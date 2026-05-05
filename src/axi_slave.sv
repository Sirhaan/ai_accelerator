module axi_slave
import pkg ::*;(
    input logic clk,rst,
    // slave input ports (from DMA / OR DDR)
    input logic tvalid,
    output logic tready,
    input logic [IN_WIDTH-1:0] tdata,
    input logic tlast,
    // slave output ports (to sram controller)
    input logic tready_out,
    output logic tvalid_out,
    output logic [OUT_WIDTH-1:0] tdata_out,
    output logic tlast_out
);
// primary register
logic [IN_WIDTH-1:0] r_data;
logic r_valid;
logic r_last;
// skid buffer
logic [IN_WIDTH-1:0] sk_data;
logic sk_valid;
logic sk_last;

// boundary signals
logic accepted; // accept data from upstream
logic consumed; // data consumed by downstream

always_comb begin
    accepted = tvalid && tready;
    consumed = r_valid && tready_out; //when primaryregister is full and output is ready, data is consumed
end
// skid buffer logic
always_ff @(posedge clk or posedge rst) begin
    if (rst) tready <= 1'b1;
    else tready <= !sk_valid; // only ready when skid buffer is empty
end

// primary register logic
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        r_valid <= 0;
        r_last <= 0;
        r_data <= 0;
    end else begin
        if(consumed) begin
        if(sk_valid) begin
            r_data <= sk_data;
            r_valid <= 1;
            r_last <= sk_last;
            sk_valid <= 0; // clear skid buffer
        end else if(accepted) begin
            r_data <= tdata;
            r_valid <= 1;
            r_last <= tlast;
        end
    end
    else if(!r_valid && accepted) begin
        r_data <= tdata;
        r_valid <= 1;
        r_last <= tlast;
    end
end
    end

    // skid buffer capture logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            sk_valid <= 0;
            sk_last <= 0;
            sk_data <= 0;
        end else begin 
            if (accepted && r_valid && !consumed) begin
            sk_data <= tdata;
            sk_valid <= 1;
            sk_last <= tlast;  
            end
            else if(consumed && sk_valid) begin
                sk_valid <= 0; // clear skid buffer when data is consumed
            end
        end
    end
    // output logic
    always_comb begin
        tdata_out = r_data;
        tvalid_out = r_valid;
        tlast_out = r_last;
    end
endmodule
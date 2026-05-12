module axi_slave
import pkg ::*;
#(
    parameter int unsigned DATA_WIDTH = IN_WIDTH
)(
    input logic clk,rst,
    // slave input ports (from DMA / OR DDR)
    input logic tvalid,
    output logic tready,
    input logic [DATA_WIDTH-1:0] tdata,
    input logic tlast,
    // slave output ports (to sram controller)
    input logic tready_out,
    output logic tvalid_out,
    output logic [DATA_WIDTH-1:0] tdata_out,
    output logic tlast_out
);
logic [DATA_WIDTH-1:0] r_data;
logic r_valid;
logic r_last;

logic input_fire;
logic output_fire;

assign output_fire = tvalid_out && tready_out;
assign tready = !r_valid || output_fire;
assign input_fire = tvalid && tready;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        r_valid <= 1'b0;
        r_last <= 1'b0;
        r_data <= '0;
    end else begin
        if (input_fire) begin
            r_data <= tdata;
            r_valid <= 1'b1;
            r_last <= tlast;
        end else if (output_fire) begin
            r_valid <= 1'b0;
            r_last <= 1'b0;
        end
    end
end

assign tdata_out = r_data;
assign tvalid_out = r_valid;
assign tlast_out = r_last;
endmodule

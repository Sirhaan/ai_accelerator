module axi_master 
import pkg::*;(
    input logic clk,rst,
    // master output ports (to DMA / OR DDR)
    output logic tvalid,
    input logic tready,
    output logic [OUT_ROW_WIDTH-1:0] tdata,
    output logic tlast,
    // master input ports (from post-process output mux)
    output logic tready_in,
    input logic tvalid_in,
    input logic [OUT_ROW_WIDTH-1:0] tdata_in,
    input logic tlast_in
);
// primary register
logic [OUT_ROW_WIDTH-1:0] r_data;
logic r_valid;
logic r_last;

logic output_fire;
logic input_fire;

assign output_fire = tvalid && tready;
assign tready_in = !r_valid || output_fire;
assign input_fire = tvalid_in && tready_in;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        r_valid <= 0;
        r_last <= 0;
        r_data <= 0;
    end else begin
        if (input_fire) begin
            r_data <= tdata_in;
            r_valid <= 1;
            r_last <= tlast_in;
        end else if (output_fire) begin
            r_valid <= 0;
            r_last <= 0;
        end
    end
end
// output logic
assign tvalid = r_valid;
assign tdata = r_data;
assign tlast = r_last;
endmodule

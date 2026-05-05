module axi_master 
import pkg::*;(
    input logic clk,rst,
    // master output ports (to DMA / OR DDR)
    output logic tvalid,
    input logic tready,
    output logic [OUT_WIDTH-1:0] tdata,
    output logic tlast,
    // master input ports (from sram controller)
    input logic tready_in,
    output logic tvalid_in,
    input logic [IN_WIDTH-1:0] tdata_in,
    input logic tlast_in
);
// primary register
logic [IN_WIDTH-1:0] r_data;
logic r_valid;
logic r_last;

logic sent;
assign sent = tvalid && tready;
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        r_valid <= 0;
        r_last <= 0;
        r_data <= 0;
    end else begin
        if (sent || !r_valid) begin
            r_data <= tdata;
            r_valid <= 1;
            r_last <= tlast;
        end
    end
end
// output logic
assign tvalid = r_valid;
assign tdata = r_data;
assign tlast = r_last;
assign tready_in = !r_valid || sent;
endmodule


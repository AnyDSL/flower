#include <adf.h>
#include <aie_api/aie_adf.hpp>
#include <aie_api/utils.hpp>
#include <iostream>
#include <string>
#include <fstream>

typedef   int8_t  i8;
typedef  uint8_t  u8;
typedef  int16_t i16;
typedef uint16_t u16;
typedef  int32_t i32;
typedef uint32_t u32;
typedef  int64_t i64;
typedef uint64_t u64;
typedef    float f32;
typedef   double f64;

typedef f32 channel8_f32_30;

void _39680(input_window<channel8_f32_30>* __restrict _39680_44418, output_window<channel8_f32_30>* __restrict _39680_44419);
void _39625(input_window<channel8_f32_30>* __restrict _39625_44357, output_window<channel8_f32_30>* __restrict _39625_44358);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _44411;
    adf::output_plio _44412;
    adf::input_plio _44413;
    adf::output_plio _44414;
    private:
	adf::kernel k_39680;
	adf::kernel k_39625;

    public:
        cgra_graph() {
        // Nodes
		_44411 = adf::input_plio::create("_44411", adf::plio_128_bits, "input_0.txt");
        k_39680 = adf::kernel::create(_39680);
        _44412 = adf::output_plio::create("_44412", adf::plio_128_bits, "output_0.txt");
        _44413 = adf::input_plio::create("_44413", adf::plio_128_bits, "input_1.txt");
        k_39625 = adf::kernel::create(_39625);
        _44414 = adf::output_plio::create("_44414", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__39680(_44411.out[0], k_39680.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _39680_cgra_graph(k_39680.out[0], _44412.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__39625(_44413.out[0], k_39625.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _39625_cgra_graph(k_39625.out[0], _44414.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_39680) = 1;
        adf::source(k_39680) = "test_fpga_cgra_vectorized_scaled3_kernel.cxx";
        adf::runtime<ratio>(k_39625) = 1;
        adf::source(k_39625) = "test_fpga_cgra_vectorized_scaled3_kernel.cxx";
        };
};

cgra_graph cgra_dataflow;

#if defined(__AIESIM__) || defined(__X86SIM__)
int main(void) {
	cgra_dataflow.init();
	cgra_dataflow.run(10);
	std::cout << "Graph executed 10 times" << std::endl;
	cgra_dataflow.end();
	std::cout << "Graph ended." << std::endl;
	return 0;
}
#endif

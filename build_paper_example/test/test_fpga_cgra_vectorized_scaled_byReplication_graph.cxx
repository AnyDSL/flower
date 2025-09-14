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

void _45440(input_window<channel8_f32_30>* __restrict _45440_51224, output_window<channel8_f32_30>* __restrict _45440_51225);
void _45495(input_window<channel8_f32_30>* __restrict _45495_51163, output_window<channel8_f32_30>* __restrict _45495_51164);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _51217;
    adf::output_plio _51218;
    adf::input_plio _51219;
    adf::output_plio _51220;
    private:
	adf::kernel k_45440;
	adf::kernel k_45495;

    public:
        cgra_graph() {
        // Nodes
		_51217 = adf::input_plio::create("_51217", adf::plio_128_bits, "input_0.txt");
        k_45440 = adf::kernel::create(_45440);
        _51218 = adf::output_plio::create("_51218", adf::plio_128_bits, "output_0.txt");
        _51219 = adf::input_plio::create("_51219", adf::plio_128_bits, "input_1.txt");
        k_45495 = adf::kernel::create(_45495);
        _51220 = adf::output_plio::create("_51220", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__45440(_51217.out[0], k_45440.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _45440_cgra_graph(k_45440.out[0], _51218.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__45495(_51219.out[0], k_45495.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _45495_cgra_graph(k_45495.out[0], _51220.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_45440) = 1;
        adf::source(k_45440) = "test_fpga_cgra_vectorized_scaled_byReplication_kernel.cxx";
        adf::runtime<ratio>(k_45495) = 1;
        adf::source(k_45495) = "test_fpga_cgra_vectorized_scaled_byReplication_kernel.cxx";
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

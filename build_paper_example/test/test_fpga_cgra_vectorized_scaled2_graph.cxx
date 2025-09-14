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

void _40807(input_window<channel8_f32_30>* __restrict _40807_45727, output_window<channel8_f32_30>* __restrict _40807_45728);
void _40862(input_window<channel8_f32_30>* __restrict _40862_45664, output_window<channel8_f32_30>* __restrict _40862_45665);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _45718;
    adf::output_plio _45719;
    adf::input_plio _45720;
    adf::output_plio _45721;
    private:
	adf::kernel k_40862;
	adf::kernel k_40807;

    public:
        cgra_graph() {
        // Nodes
		_45718 = adf::input_plio::create("_45718", adf::plio_128_bits, "input_0.txt");
        k_40862 = adf::kernel::create(_40862);
        _45719 = adf::output_plio::create("_45719", adf::plio_128_bits, "output_0.txt");
        _45720 = adf::input_plio::create("_45720", adf::plio_128_bits, "input_1.txt");
        k_40807 = adf::kernel::create(_40807);
        _45721 = adf::output_plio::create("_45721", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__40862(_45718.out[0], k_40862.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _40862_cgra_graph(k_40862.out[0], _45719.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__40807(_45720.out[0], k_40807.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _40807_cgra_graph(k_40807.out[0], _45721.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_40862) = 1;
        adf::source(k_40862) = "test_fpga_cgra_vectorized_scaled2_kernel.cxx";
        adf::runtime<ratio>(k_40807) = 1;
        adf::source(k_40807) = "test_fpga_cgra_vectorized_scaled2_kernel.cxx";
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

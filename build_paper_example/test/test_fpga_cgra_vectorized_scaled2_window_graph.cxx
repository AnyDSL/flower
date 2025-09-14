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

typedef i32 channel8_i32_30;

void _73801(input_window<channel8_i32_30>* __restrict _73801_85465, output_window<channel8_i32_30>* __restrict _73801_85466);
void _73699(input_window<channel8_i32_30>* __restrict _73699_85639, output_window<channel8_i32_30>* __restrict _73699_85640);
void _73597(input_window<channel8_i32_30>* __restrict _73597_85327, output_window<channel8_i32_30>* __restrict _73597_85328);
void _73852(input_window<channel8_i32_30>* __restrict _73852_85596, output_window<channel8_i32_30>* __restrict _73852_85597);
void _73903(input_window<channel8_i32_30>* __restrict _73903_85682, output_window<channel8_i32_30>* __restrict _73903_85683);
void _73515(input_window<channel8_i32_30>* __restrict _73515_85402, output_window<channel8_i32_30>* __restrict _73515_85403);
void _73648(input_window<channel8_i32_30>* __restrict _73648_85510, output_window<channel8_i32_30>* __restrict _73648_85511);
void _73750(input_window<channel8_i32_30>* __restrict _73750_85553, output_window<channel8_i32_30>* __restrict _73750_85554);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _85383;
    adf::output_plio _85384;
    adf::input_plio _85385;
    adf::output_plio _85386;
    adf::input_plio _85387;
    adf::output_plio _85388;
    adf::input_plio _85389;
    adf::output_plio _85390;
    adf::input_plio _85391;
    adf::output_plio _85392;
    adf::input_plio _85393;
    adf::output_plio _85394;
    adf::input_plio _85395;
    adf::output_plio _85396;
    adf::input_plio _85397;
    adf::output_plio _85398;
    private:
	adf::kernel k_73515;
	adf::kernel k_73801;
	adf::kernel k_73597;
	adf::kernel k_73648;
	adf::kernel k_73750;
	adf::kernel k_73852;
	adf::kernel k_73699;
	adf::kernel k_73903;

    public:
        cgra_graph() {
        // Nodes
		_85383 = adf::input_plio::create("_85383", adf::plio_128_bits, "input_0.txt");
        k_73515 = adf::kernel::create(_73515);
        _85384 = adf::output_plio::create("_85384", adf::plio_128_bits, "output_0.txt");
        _85385 = adf::input_plio::create("_85385", adf::plio_128_bits, "input_1.txt");
        k_73801 = adf::kernel::create(_73801);
        _85386 = adf::output_plio::create("_85386", adf::plio_128_bits, "output_1.txt");
        _85387 = adf::input_plio::create("_85387", adf::plio_128_bits, "input_2.txt");
        k_73597 = adf::kernel::create(_73597);
        _85388 = adf::output_plio::create("_85388", adf::plio_128_bits, "output_2.txt");
        _85389 = adf::input_plio::create("_85389", adf::plio_128_bits, "input_3.txt");
        k_73648 = adf::kernel::create(_73648);
        _85390 = adf::output_plio::create("_85390", adf::plio_128_bits, "output_3.txt");
        _85391 = adf::input_plio::create("_85391", adf::plio_128_bits, "input_4.txt");
        k_73750 = adf::kernel::create(_73750);
        _85392 = adf::output_plio::create("_85392", adf::plio_128_bits, "output_4.txt");
        _85393 = adf::input_plio::create("_85393", adf::plio_128_bits, "input_5.txt");
        k_73852 = adf::kernel::create(_73852);
        _85394 = adf::output_plio::create("_85394", adf::plio_128_bits, "output_5.txt");
        _85395 = adf::input_plio::create("_85395", adf::plio_128_bits, "input_6.txt");
        k_73699 = adf::kernel::create(_73699);
        _85396 = adf::output_plio::create("_85396", adf::plio_128_bits, "output_6.txt");
        _85397 = adf::input_plio::create("_85397", adf::plio_128_bits, "input_7.txt");
        k_73903 = adf::kernel::create(_73903);
        _85398 = adf::output_plio::create("_85398", adf::plio_128_bits, "output_7.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73515(_85383.out[0], k_73515.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73515_cgra_graph(k_73515.out[0], _85384.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73801(_85385.out[0], k_73801.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73801_cgra_graph(k_73801.out[0], _85386.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73597(_85387.out[0], k_73597.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73597_cgra_graph(k_73597.out[0], _85388.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73648(_85389.out[0], k_73648.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73648_cgra_graph(k_73648.out[0], _85390.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73750(_85391.out[0], k_73750.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73750_cgra_graph(k_73750.out[0], _85392.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73852(_85393.out[0], k_73852.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73852_cgra_graph(k_73852.out[0], _85394.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73699(_85395.out[0], k_73699.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73699_cgra_graph(k_73699.out[0], _85396.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__73903(_85397.out[0], k_73903.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _73903_cgra_graph(k_73903.out[0], _85398.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_73515) = 1;
        adf::source(k_73515) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73801) = 1;
        adf::source(k_73801) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73597) = 1;
        adf::source(k_73597) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73648) = 1;
        adf::source(k_73648) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73750) = 1;
        adf::source(k_73750) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73852) = 1;
        adf::source(k_73852) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73699) = 1;
        adf::source(k_73699) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
        adf::runtime<ratio>(k_73903) = 1;
        adf::source(k_73903) = "test_fpga_cgra_vectorized_scaled2_window_kernel.cxx";
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

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

void _34499(input_window<channel8_f32_30>* __restrict _34499_37814, output_window<channel8_f32_30>* __restrict _34499_37815);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _37868;
    adf::output_plio _37869;
    private:
	adf::kernel k_34499;

    public:
        cgra_graph() {
        // Nodes
		_37868 = adf::input_plio::create("_37868", adf::plio_128_bits, "input_0.txt");
        k_34499 = adf::kernel::create(_34499);
        _37869 = adf::output_plio::create("_37869", adf::plio_128_bits, "output_0.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__34499(_37868.out[0], k_34499.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _34499_cgra_graph(k_34499.out[0], _37869.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_34499) = 1;
        adf::location<adf::kernel>(k_34499) = adf::tile(1, 1);
        adf::source(k_34499) = "test_fpga_cgra_vectorized_kernel.cxx";
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

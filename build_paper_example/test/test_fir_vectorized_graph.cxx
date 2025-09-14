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

void _53434(input_window<channel8_i32_30>* __restrict _53434_58692, output_window<channel8_i32_30>* __restrict _53434_58693);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _58687;
    adf::output_plio _58688;
    private:
	adf::kernel k_53434;

    public:
        cgra_graph() {
        // Nodes
		_58687 = adf::input_plio::create("_58687", adf::plio_128_bits, "input_0.txt");
        k_53434 = adf::kernel::create(_53434);
        _58688 = adf::output_plio::create("_58688", adf::plio_128_bits, "output_0.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__53434(_58687.out[0], k_53434.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _53434_cgra_graph(k_53434.out[0], _58688.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_53434) = 1;
        adf::source(k_53434) = "test_fir_vectorized_kernel.cxx";
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

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

void _38651(input_window<channel8_f32_30>* __restrict _38651_43087, output_window<channel8_f32_30>* __restrict _38651_43088);
void _38706(input_window<channel8_f32_30>* __restrict _38706_43026, output_window<channel8_f32_30>* __restrict _38706_43027);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _43080;
    adf::output_plio _43081;
    adf::input_plio _43082;
    adf::output_plio _43083;
    private:
	adf::kernel k_38651;
	adf::kernel k_38706;

    public:
        cgra_graph() {
        // Nodes
		_43080 = adf::input_plio::create("_43080", adf::plio_128_bits, "input_0.txt");
        k_38651 = adf::kernel::create(_38651);
        _43081 = adf::output_plio::create("_43081", adf::plio_128_bits, "output_0.txt");
        _43082 = adf::input_plio::create("_43082", adf::plio_128_bits, "input_1.txt");
        k_38706 = adf::kernel::create(_38706);
        _43083 = adf::output_plio::create("_43083", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__38651(_43080.out[0], k_38651.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _38651_cgra_graph(k_38651.out[0], _43081.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> cgra_graph__38706(_43082.out[0], k_38706.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_f32_30)>> _38706_cgra_graph(k_38706.out[0], _43083.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_38651) = 1;
        adf::source(k_38651) = "test_fpga_cgra_vectorized_scaled_kernel.cxx";
        adf::runtime<ratio>(k_38706) = 1;
        adf::source(k_38706) = "test_fpga_cgra_vectorized_scaled_kernel.cxx";
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

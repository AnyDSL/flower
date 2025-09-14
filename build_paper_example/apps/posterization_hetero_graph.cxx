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

void _70559(input_window<channel8_i32_30>* __restrict _70559_77857, output_window<channel8_i32_30>* __restrict _70559_77858);
void _70339(input_window<channel8_i32_30>* __restrict _70339_77946, output_window<channel8_i32_30>* __restrict _70339_77947);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _77850;
    adf::output_plio _77851;
    adf::input_plio _77852;
    adf::output_plio _77853;
    private:
	adf::kernel k_70559;
	adf::kernel k_70339;

    public:
        cgra_graph() {
        // Nodes
		_77850 = adf::input_plio::create("_77850", adf::plio_128_bits, "input_0.txt");
        k_70559 = adf::kernel::create(_70559);
        _77851 = adf::output_plio::create("_77851", adf::plio_128_bits, "output_0.txt");
        _77852 = adf::input_plio::create("_77852", adf::plio_128_bits, "input_1.txt");
        k_70339 = adf::kernel::create(_70339);
        _77853 = adf::output_plio::create("_77853", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__70559(_77850.out[0], k_70559.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _70559_cgra_graph(k_70559.out[0], _77851.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__70339(_77852.out[0], k_70339.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _70339_cgra_graph(k_70339.out[0], _77853.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_70559) = 1;
        adf::source(k_70559) = "posterization_hetero_kernel.cxx";
        adf::runtime<ratio>(k_70339) = 1;
        adf::source(k_70339) = "posterization_hetero_kernel.cxx";
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

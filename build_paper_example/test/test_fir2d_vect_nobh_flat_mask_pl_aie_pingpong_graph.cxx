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

void _78034(input_window<channel8_i32_30>* __restrict _78034_91228, output_window<channel8_i32_30>* __restrict _78034_91229);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _91223;
    adf::output_plio _91224;
    private:
	adf::kernel k_78034;

    public:
        cgra_graph() {
        // Nodes
		_91223 = adf::input_plio::create("_91223", adf::plio_128_bits, "input_0.txt");
        k_78034 = adf::kernel::create(_78034);
        _91224 = adf::output_plio::create("_91224", adf::plio_128_bits, "output_0.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__78034(_91223.out[0], k_78034.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _78034_cgra_graph(k_78034.out[0], _91224.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_78034) = 1;
        adf::source(k_78034) = "test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_kernel.cxx";
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

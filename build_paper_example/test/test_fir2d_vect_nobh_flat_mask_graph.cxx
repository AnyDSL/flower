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

void _79680(output_window<channel8_i32_30>* __restrict _79680_97304, input_window<channel8_i32_30>* __restrict _79680_97305);

class cgra_graph : public adf::graph {
    public:
    adf::output_plio _97299;
    adf::input_plio _97300;
    private:
	adf::kernel k_79680;

    public:
        cgra_graph() {
        // Nodes
		_97299 = adf::output_plio::create("_97299", adf::plio_128_bits, "output_1.txt");
        k_79680 = adf::kernel::create(_79680);
        _97300 = adf::input_plio::create("_97300", adf::plio_128_bits, "input_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _79680_cgra_graph(k_79680.out[0], _97299.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__79680(_97300.out[0], k_79680.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_79680) = 1;
        adf::source(k_79680) = "test_fir2d_vect_nobh_flat_mask_kernel.cxx";
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

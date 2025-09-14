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

void _79446(output_stream<channel8_i32_30>* __restrict _79446_96967, input_stream<channel8_i32_30>* __restrict _79446_96968);

class cgra_graph : public adf::graph {
    public:
    adf::output_plio _96962;
    adf::input_plio _96963;
    private:
	adf::kernel k_79446;

    public:
        cgra_graph() {
        // Nodes
		_96962 = adf::output_plio::create("_96962", adf::plio_128_bits, "output_1.txt");
        k_79446 = adf::kernel::create(_79446);
        _96963 = adf::input_plio::create("_96963", adf::plio_128_bits, "input_1.txt");
        // Edges
		adf::connect<adf::stream> _79446_cgra_graph(k_79446.out[0], _96962.in[0]);
        adf::connect<adf::stream> cgra_graph__79446(_96963.out[0], k_79446.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_79446) = 1;
        adf::source(k_79446) = "test_fir2d_vect_nobh_flat_mask_stream_kernel.cxx";
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

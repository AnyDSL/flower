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

void _90442(input_window<channel8_i32_30>* __restrict _90442_110794, output_window<channel8_i32_30>* __restrict _90442_110795);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _110789;
    adf::output_plio _110790;
    private:
	adf::kernel k_90442;

    public:
        cgra_graph() {
        // Nodes
		_110789 = adf::input_plio::create("_110789", adf::plio_128_bits, "input_1.txt");
        k_90442 = adf::kernel::create(_90442);
        _110790 = adf::output_plio::create("_110790", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__90442(_110789.out[0], k_90442.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _90442_cgra_graph(k_90442.out[0], _110790.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_90442) = 1;
        adf::source(k_90442) = "test_fir2d_vect_nobh_kernel.cxx";
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

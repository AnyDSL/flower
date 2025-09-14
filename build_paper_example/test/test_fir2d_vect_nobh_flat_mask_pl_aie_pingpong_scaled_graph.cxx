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

void _102505(input_window<channel8_i32_30>* __restrict _102505_123257, output_window<channel8_i32_30>* __restrict _102505_123258);
void _102110(input_window<channel8_i32_30>* __restrict _102110_122867, output_window<channel8_i32_30>* __restrict _102110_122868);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _123554;
    adf::output_plio _123555;
    adf::input_plio _123556;
    adf::output_plio _123557;
    private:
	adf::kernel k_102110;
	adf::kernel k_102505;

    public:
        cgra_graph() {
        // Nodes
		_123554 = adf::input_plio::create("_123554", adf::plio_128_bits, "input_0.txt");
        k_102110 = adf::kernel::create(_102110);
        _123555 = adf::output_plio::create("_123555", adf::plio_128_bits, "output_0.txt");
        _123556 = adf::input_plio::create("_123556", adf::plio_128_bits, "input_1.txt");
        k_102505 = adf::kernel::create(_102505);
        _123557 = adf::output_plio::create("_123557", adf::plio_128_bits, "output_1.txt");
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__102110(_123554.out[0], k_102110.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _102110_cgra_graph(k_102110.out[0], _123555.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> cgra_graph__102505(_123556.out[0], k_102505.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel8_i32_30)>> _102505_cgra_graph(k_102505.out[0], _123557.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_102110) = 1;
        adf::source(k_102110) = "test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_scaled_kernel.cxx";
        adf::runtime<ratio>(k_102505) = 1;
        adf::source(k_102505) = "test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_scaled_kernel.cxx";
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

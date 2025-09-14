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

typedef f32 channel_f32_30;

void _39622(input_window<channel_f32_30>* __restrict _39622_43705, output_window<channel_f32_30>* __restrict _39622_43706);
void _39677(input_window<channel_f32_30>* __restrict _39677_43652, output_window<channel_f32_30>* __restrict _39677_43653);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _43746;
    adf::output_plio _43747;
    private:
	adf::kernel k_39622;
	adf::kernel k_39677;

    public:
        cgra_graph() {
        // Nodes
		_43746 = adf::input_plio::create("_43746", adf::plio_32_bits, "input_1.txt");
        k_39622 = adf::kernel::create(_39622);
        _43747 = adf::output_plio::create("_43747", adf::plio_32_bits, "output_1.txt");
        k_39677 = adf::kernel::create(_39677);
        // Edges
		adf::connect<adf::window<4096 * sizeof(channel_f32_30)>> cgra_graph__39622(_43746.out[0], k_39622.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel_f32_30)>> _39677_cgra_graph(k_39677.out[0], _43747.in[0]);
        adf::connect<adf::window<4096 * sizeof(channel_f32_30)>> _39622__39677(k_39622.out[0], k_39677.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_39622) = 1;
        adf::source(k_39622) = "test_fpga_multi_kernel_cgra_dataflow_kernel.cxx";
        adf::runtime<ratio>(k_39677) = 1;
        adf::source(k_39677) = "test_fpga_multi_kernel_cgra_dataflow_kernel.cxx";
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

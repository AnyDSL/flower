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

void _125254(input_stream<channel8_i32_30>* __restrict _125254_149981, output_stream<channel8_i32_30>* __restrict _125254_149982);
void _125206(input_stream<channel8_i32_30>* __restrict _125206_149883, output_stream<channel8_i32_30>* __restrict _125206_149884, output_stream<channel8_i32_30>* __restrict _125206_149885);
void _126155(input_stream<channel8_i32_30>* __restrict _126155_149927, input_stream<channel8_i32_30>* __restrict _126155_149928, output_stream<channel8_i32_30>* __restrict _126155_149929);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _149876;
    adf::output_plio _149877;
    adf::input_plio _149878;
    adf::output_plio _149879;
    private:
	adf::kernel k_125206;
	adf::kernel k_126155;
	adf::kernel k_125254;

    public:
        cgra_graph() {
        // Nodes
		_149876 = adf::input_plio::create("_149876", adf::plio_128_bits, "input_0.txt");
        k_125206 = adf::kernel::create(_125206);
        _149877 = adf::output_plio::create("_149877", adf::plio_128_bits, "output_0.txt");
        _149878 = adf::input_plio::create("_149878", adf::plio_128_bits, "input_1.txt");
        k_126155 = adf::kernel::create(_126155);
        _149879 = adf::output_plio::create("_149879", adf::plio_128_bits, "output_1.txt");
        k_125254 = adf::kernel::create(_125254);
        // Edges
		adf::connect<adf::stream> cgra_graph__125206(_149876.out[0], k_125206.in[0]);
        adf::connect<adf::stream> _125206_cgra_graph(k_125206.out[0], _149877.in[0]);
        adf::connect<adf::stream> cgra_graph__126155(_149878.out[0], k_126155.in[0]);
        adf::connect<adf::stream> _126155_cgra_graph(k_126155.out[0], _149879.in[0]);
        adf::connect<adf::stream> _125206__125254(k_125206.out[1], k_125254.in[0]);
        adf::connect<adf::stream> _125254__126155(k_125254.out[0], k_126155.in[1]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_125206) = 1;
        adf::source(k_125206) = "paper_example_kernel.cxx";
        adf::runtime<ratio>(k_126155) = 1;
        adf::source(k_126155) = "paper_example_kernel.cxx";
        adf::runtime<ratio>(k_125254) = 1;
        adf::source(k_125254) = "paper_example_kernel.cxx";
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

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

void _58197(input_stream<channel8_i32_30>* __restrict _58197_65939, output_stream<channel8_i32_30>* __restrict _58197_65940);
void _58073(input_stream<channel8_i32_30>* __restrict _58073_65910, output_stream<channel8_i32_30>* __restrict _58073_65911);
void _58157(input_stream<channel8_i32_30>* __restrict _58157_65978, output_stream<channel8_i32_30>* __restrict _58157_65979);
void _58117(input_stream<channel8_i32_30>* __restrict _58117_65996, output_stream<channel8_i32_30>* __restrict _58117_65997);
void _58217(input_stream<channel8_i32_30>* __restrict _58217_65929, output_stream<channel8_i32_30>* __restrict _58217_65930);
void _58137(input_stream<channel8_i32_30>* __restrict _58137_66022, output_stream<channel8_i32_30>* __restrict _58137_66023);
void _58097(input_stream<channel8_i32_30>* __restrict _58097_65949, output_stream<channel8_i32_30>* __restrict _58097_65950);
void _58177(input_stream<channel8_i32_30>* __restrict _58177_66008, output_stream<channel8_i32_30>* __restrict _58177_66009);

class cgra_graph : public adf::graph {
    public:
    adf::input_plio _65959;
    adf::output_plio _65960;
    adf::input_plio _65961;
    adf::output_plio _65962;
    adf::input_plio _65963;
    adf::output_plio _65964;
    adf::input_plio _65965;
    adf::output_plio _65966;
    adf::input_plio _65967;
    adf::output_plio _65968;
    adf::input_plio _65969;
    adf::output_plio _65970;
    adf::input_plio _65971;
    adf::output_plio _65972;
    adf::input_plio _65973;
    adf::output_plio _65974;
    private:
	adf::kernel k_58157;
	adf::kernel k_58073;
	adf::kernel k_58217;
	adf::kernel k_58097;
	adf::kernel k_58117;
	adf::kernel k_58177;
	adf::kernel k_58197;
	adf::kernel k_58137;

    public:
        cgra_graph() {
        // Nodes
		_65959 = adf::input_plio::create("_65959", adf::plio_128_bits, "input_0.txt");
        k_58157 = adf::kernel::create(_58157);
        _65960 = adf::output_plio::create("_65960", adf::plio_128_bits, "output_0.txt");
        _65961 = adf::input_plio::create("_65961", adf::plio_128_bits, "input_1.txt");
        k_58073 = adf::kernel::create(_58073);
        _65962 = adf::output_plio::create("_65962", adf::plio_128_bits, "output_1.txt");
        _65963 = adf::input_plio::create("_65963", adf::plio_128_bits, "input_2.txt");
        k_58217 = adf::kernel::create(_58217);
        _65964 = adf::output_plio::create("_65964", adf::plio_128_bits, "output_2.txt");
        _65965 = adf::input_plio::create("_65965", adf::plio_128_bits, "input_3.txt");
        k_58097 = adf::kernel::create(_58097);
        _65966 = adf::output_plio::create("_65966", adf::plio_128_bits, "output_3.txt");
        _65967 = adf::input_plio::create("_65967", adf::plio_128_bits, "input_4.txt");
        k_58117 = adf::kernel::create(_58117);
        _65968 = adf::output_plio::create("_65968", adf::plio_128_bits, "output_4.txt");
        _65969 = adf::input_plio::create("_65969", adf::plio_128_bits, "input_5.txt");
        k_58177 = adf::kernel::create(_58177);
        _65970 = adf::output_plio::create("_65970", adf::plio_128_bits, "output_5.txt");
        _65971 = adf::input_plio::create("_65971", adf::plio_128_bits, "input_6.txt");
        k_58197 = adf::kernel::create(_58197);
        _65972 = adf::output_plio::create("_65972", adf::plio_128_bits, "output_6.txt");
        _65973 = adf::input_plio::create("_65973", adf::plio_128_bits, "input_7.txt");
        k_58137 = adf::kernel::create(_58137);
        _65974 = adf::output_plio::create("_65974", adf::plio_128_bits, "output_7.txt");
        // Edges
		adf::connect<adf::stream> cgra_graph__58157(_65959.out[0], k_58157.in[0]);
        adf::connect<adf::stream> _58157_cgra_graph(k_58157.out[0], _65960.in[0]);
        adf::connect<adf::stream> cgra_graph__58073(_65961.out[0], k_58073.in[0]);
        adf::connect<adf::stream> _58073_cgra_graph(k_58073.out[0], _65962.in[0]);
        adf::connect<adf::stream> cgra_graph__58217(_65963.out[0], k_58217.in[0]);
        adf::connect<adf::stream> _58217_cgra_graph(k_58217.out[0], _65964.in[0]);
        adf::connect<adf::stream> cgra_graph__58097(_65965.out[0], k_58097.in[0]);
        adf::connect<adf::stream> _58097_cgra_graph(k_58097.out[0], _65966.in[0]);
        adf::connect<adf::stream> cgra_graph__58117(_65967.out[0], k_58117.in[0]);
        adf::connect<adf::stream> _58117_cgra_graph(k_58117.out[0], _65968.in[0]);
        adf::connect<adf::stream> cgra_graph__58177(_65969.out[0], k_58177.in[0]);
        adf::connect<adf::stream> _58177_cgra_graph(k_58177.out[0], _65970.in[0]);
        adf::connect<adf::stream> cgra_graph__58197(_65971.out[0], k_58197.in[0]);
        adf::connect<adf::stream> _58197_cgra_graph(k_58197.out[0], _65972.in[0]);
        adf::connect<adf::stream> cgra_graph__58137(_65973.out[0], k_58137.in[0]);
        adf::connect<adf::stream> _58137_cgra_graph(k_58137.out[0], _65974.in[0]);
        // Constrains and Configurations
		adf::runtime<ratio>(k_58157) = 1;
        adf::source(k_58157) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58073) = 1;
        adf::source(k_58073) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58217) = 1;
        adf::source(k_58217) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58097) = 1;
        adf::source(k_58097) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58117) = 1;
        adf::source(k_58117) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58177) = 1;
        adf::source(k_58177) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58197) = 1;
        adf::source(k_58197) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
        adf::runtime<ratio>(k_58137) = 1;
        adf::source(k_58137) = "test_fpga_cgra_vectorized_scaled2_stream_kernel.cxx";
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


#include <hls_stream.h>
#include <hls_math.h>

typedef   int8_t  i8;
typedef  uint8_t  u8;
typedef  int16_t i16;
typedef uint16_t u16;
typedef  int32_t i32;
typedef uint32_t u32;
typedef  int64_t i64;
typedef  uint64_t u64;
typedef    float f32;
typedef   double f64;

extern "C" {
typedef struct {
    i32 e[8];
} array_30;
typedef array_30 channel8_i32_33;

#ifndef __SYNTHESIS__
void hls_top(array_30[256], hls::stream<channel8_i32_33>*, array_30[256], hls::stream<channel8_i32_33>*);
void _53363(array_30[256], hls::stream<channel8_i32_33>*);
void _53564(array_30[256], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _53363(array_30 _53363_56036[256], hls::stream<channel8_i32_33>* _53363_56037) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_53363_56036 struct_level
#pragma HLS data_pack variable=_53363_56037 struct_level
i32   loop_56040;
    i32 p_loop_56040;
    i32   loop_56041;
    i32 p_loop_56041;
    i32   loop_56042;
    i32 p_loop_56042;
    i32   for_body_56057;
    i32 p_for_body_56057;
    bool _56043;
    i32 _56064;
    i32 idx_56065;
    array_30* _56066;
    array_30 _56067;
    array_30 _56071;
    i32 _56079;
    {
        p_loop_56040 = 0;
        p_loop_56041 = 1;
        p_loop_56042 = 1;
        goto loop_56038;
    }
loop_56038: {
        loop_56040 = p_loop_56040;
        loop_56041 = p_loop_56041;
        loop_56042 = p_loop_56042;
        _56043 = (loop_56040 < loop_56041);
        if (_56043) goto branch_true_56044; else goto branch_false_56084;
    }
branch_false_56084: {
        return void();
    }
branch_true_56044: {
        int i56045;
        for (i56045 = 0; i56045 < 2048; i56045++) {
            #pragma HLS PIPELINE
            p_for_body_56057 = i56045;
            goto for_body_56055;
            pipeline_continue_56074: continue;
        }
        goto cont_56077;
    }
for_body_56055: {
        for_body_56057 = p_for_body_56057;
        _56064 = (256 * loop_56040);
        idx_56065 = (_56064 + for_body_56057);
        _56066 = (&(_53363_56036)[idx_56065]);
        _56067 = *_56066;
        _56071 = (_56067);
        *_53363_56037 << _56071;
        goto continue_wrapper_56072;
    }
continue_wrapper_56072: {
        goto pipeline_continue_56074;
    }
cont_56077: {
        _56079 = (loop_56040 + loop_56042);
        p_loop_56040 = _56079;
        p_loop_56041 = loop_56041;
        p_loop_56042 = loop_56042;
        goto loop_56038;
    }
}

void _53564(array_30 _53564_56092[256], hls::stream<channel8_i32_33>* _53564_56093) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_53564_56092 struct_level
#pragma HLS data_pack variable=_53564_56093 struct_level
i32   loop_56096;
    i32 p_loop_56096;
    i32   loop_56097;
    i32 p_loop_56097;
    i32   loop_56098;
    i32 p_loop_56098;
    i32   for_body_56111;
    i32 p_for_body_56111;
    array_30   cont_56118;
    array_30 p_cont_56118;
    bool _56099;
    i32 _56122;
    i32 idx_56123;
    array_30* _56124;
    i32 _56128;
    {
        p_loop_56096 = 0;
        p_loop_56097 = 1;
        p_loop_56098 = 1;
        goto loop_56094;
    }
loop_56094: {
        loop_56096 = p_loop_56096;
        loop_56097 = p_loop_56097;
        loop_56098 = p_loop_56098;
        _56099 = (loop_56096 < loop_56097);
        if (_56099) goto branch_true_56100; else goto branch_false_56133;
    }
branch_false_56133: {
        return void();
    }
branch_true_56100: {
        int i56101;
        for (i56101 = 0; i56101 < 2048; i56101++) {
            #pragma HLS PIPELINE
            p_for_body_56111 = i56101;
            goto for_body_56109;
            pipeline_continue_56119: continue;
        }
        goto cont_56126;
    }
for_body_56109: {
        for_body_56111 = p_for_body_56111;
        *_53564_56093 >> cont_56118;
        p_cont_56118 = cont_56118;
        goto cont_56116;
    }
cont_56116: {
        cont_56118 = p_cont_56118;
        _56122 = (256 * loop_56096);
        idx_56123 = (_56122 + for_body_56111);
        _56124 = (&(_53564_56092)[idx_56123]);
        (*_56124 = cont_56118);
        goto pipeline_continue_56119;
    }
cont_56126: {
        _56128 = (loop_56096 + loop_56098);
        p_loop_56096 = _56128;
        p_loop_56097 = loop_56097;
        p_loop_56098 = loop_56098;
        goto loop_56094;
    }
}

void hls_top(array_30 hls_top_56140[256], hls::stream<channel8_i32_33>* hls_top_56141, array_30 hls_top_56142[256], hls::stream<channel8_i32_33>* hls_top_56143) {
    #pragma HLS INTERFACE m_axi     port = hls_top_56140 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_56140
#pragma HLS STABLE variable = hls_top_56140
#pragma HLS INTERFACE axis port = hls_top_56141
#pragma HLS INTERFACE m_axi     port = hls_top_56142 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_56142
#pragma HLS STABLE variable = hls_top_56142
#pragma HLS INTERFACE axis port = hls_top_56143
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _53363(hls_top_56140, hls_top_56141);
        
    }
next_kernel_56144: {
        _53564(hls_top_56142, hls_top_56143);
        
    }
hls_top_56151: {
        return void();
    }
}

} /* extern "C" */

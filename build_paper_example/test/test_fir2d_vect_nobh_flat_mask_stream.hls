
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
void hls_top(array_30[131072], hls::stream<channel8_i32_33>*, array_30[131072], hls::stream<channel8_i32_33>*);
void _79375(array_30[131072], hls::stream<channel8_i32_33>*);
void _80148(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _80148(array_30 _80148_83197[131072], hls::stream<channel8_i32_33>* _80148_83198) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_80148_83197 struct_level
#pragma HLS data_pack variable=_80148_83198 struct_level
i32   loop_83201;
    i32 p_loop_83201;
    i32   loop_83202;
    i32 p_loop_83202;
    i32   loop_83203;
    i32 p_loop_83203;
    i32   for_body_83218;
    i32 p_for_body_83218;
    array_30   cont_83225;
    array_30 p_cont_83225;
    bool _83204;
    i32 _83230;
    i32 idx_83231;
    array_30* _83232;
    i32 _83236;
    {
        p_loop_83201 = 0;
        p_loop_83202 = 1024;
        p_loop_83203 = 1;
        goto loop_83199;
    }
loop_83199: {
        loop_83201 = p_loop_83201;
        loop_83202 = p_loop_83202;
        loop_83203 = p_loop_83203;
        _83204 = (loop_83201 < loop_83202);
        if (_83204) goto branch_true_83205; else goto branch_false_83241;
    }
branch_false_83241: {
        return void();
    }
branch_true_83205: {
        int i83206;
        for (i83206 = 0; i83206 < 128; i83206++) {
            #pragma HLS PIPELINE
            p_for_body_83218 = i83206;
            goto for_body_83216;
            pipeline_continue_83226: continue;
        }
        goto cont_83234;
    }
for_body_83216: {
        for_body_83218 = p_for_body_83218;
        *_80148_83198 >> cont_83225;
        p_cont_83225 = cont_83225;
        goto cont_83223;
    }
cont_83223: {
        cont_83225 = p_cont_83225;
        _83230 = (1024 * loop_83201);
        idx_83231 = (_83230 + for_body_83218);
        _83232 = (&(_80148_83197)[idx_83231]);
        (*_83232 = cont_83225);
        goto pipeline_continue_83226;
    }
cont_83234: {
        _83236 = (loop_83201 + loop_83203);
        p_loop_83201 = _83236;
        p_loop_83202 = loop_83202;
        p_loop_83203 = loop_83203;
        goto loop_83199;
    }
}

void _79375(array_30 _79375_83256[131072], hls::stream<channel8_i32_33>* _79375_83257) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_79375_83256 struct_level
#pragma HLS data_pack variable=_79375_83257 struct_level
i32   loop_83260;
    i32 p_loop_83260;
    i32   loop_83261;
    i32 p_loop_83261;
    i32   loop_83262;
    i32 p_loop_83262;
    i32   for_body_83275;
    i32 p_for_body_83275;
    bool _83263;
    i32 _83281;
    i32 idx_83282;
    array_30* _83283;
    array_30 _83284;
    array_30 _83288;
    i32 _83296;
    {
        p_loop_83260 = 0;
        p_loop_83261 = 1024;
        p_loop_83262 = 1;
        goto loop_83258;
    }
loop_83258: {
        loop_83260 = p_loop_83260;
        loop_83261 = p_loop_83261;
        loop_83262 = p_loop_83262;
        _83263 = (loop_83260 < loop_83261);
        if (_83263) goto branch_true_83264; else goto branch_false_83301;
    }
branch_false_83301: {
        return void();
    }
branch_true_83264: {
        int i83265;
        for (i83265 = 0; i83265 < 128; i83265++) {
            #pragma HLS PIPELINE
            p_for_body_83275 = i83265;
            goto for_body_83273;
            pipeline_continue_83291: continue;
        }
        goto cont_83294;
    }
for_body_83273: {
        for_body_83275 = p_for_body_83275;
        _83281 = (1024 * loop_83260);
        idx_83282 = (_83281 + for_body_83275);
        _83283 = (&(_79375_83256)[idx_83282]);
        _83284 = *_83283;
        _83288 = (_83284);
        *_79375_83257 << _83288;
        goto continue_wrapper_83289;
    }
continue_wrapper_83289: {
        goto pipeline_continue_83291;
    }
cont_83294: {
        _83296 = (loop_83260 + loop_83262);
        p_loop_83260 = _83296;
        p_loop_83261 = loop_83261;
        p_loop_83262 = loop_83262;
        goto loop_83258;
    }
}

void hls_top(array_30 hls_top_83249[131072], hls::stream<channel8_i32_33>* hls_top_83250, array_30 hls_top_83251[131072], hls::stream<channel8_i32_33>* hls_top_83252) {
    #pragma HLS INTERFACE m_axi     port = hls_top_83249 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_83249
#pragma HLS STABLE variable = hls_top_83249
#pragma HLS INTERFACE axis port = hls_top_83250
#pragma HLS INTERFACE m_axi     port = hls_top_83251 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_83251
#pragma HLS STABLE variable = hls_top_83251
#pragma HLS INTERFACE axis port = hls_top_83252
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _79375(hls_top_83249, hls_top_83250);
        
    }
next_kernel_83305: {
        _80148(hls_top_83251, hls_top_83252);
        
    }
hls_top_83309: {
        return void();
    }
}

} /* extern "C" */

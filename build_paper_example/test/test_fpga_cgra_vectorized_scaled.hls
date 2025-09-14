
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
    f32 e[8];
} array_30;
typedef array_30 channel8_f32_33;

#ifndef __SYNTHESIS__
void hls_top(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
void _38570(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
void _38755(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
#endif /* __SYNTHESIS__ */

void _38570(array_30 _38570_41267[524288], hls::stream<channel8_f32_33>* _38570_41268, hls::stream<channel8_f32_33>* _38570_41269) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_38570_41267 struct_level
#pragma HLS data_pack variable=_38570_41268 struct_level
#pragma HLS data_pack variable=_38570_41269 struct_level
i32   loop_41272;
    i32 p_loop_41272;
    i32   loop_41273;
    i32 p_loop_41273;
    i32   loop_41274;
    i32 p_loop_41274;
    i32   for_body_41289;
    i32 p_for_body_41289;
    bool _41275;
    i32 _41296;
    i32 idx0_41297;
    array_30* _41298;
    array_30 _41299;
    array_30 _41303;
    i32 idx1_41306;
    array_30* _41307;
    array_30 _41308;
    array_30 _41310;
    i32 _41318;
    {
        p_loop_41272 = 0;
        p_loop_41273 = 2048;
        p_loop_41274 = 1;
        goto loop_41270;
    }
loop_41270: {
        loop_41272 = p_loop_41272;
        loop_41273 = p_loop_41273;
        loop_41274 = p_loop_41274;
        _41275 = (loop_41272 < loop_41273);
        if (_41275) goto branch_true_41276; else goto branch_false_41324;
    }
branch_false_41324: {
        return void();
    }
branch_true_41276: {
        int i41277;
        for (i41277 = 0; i41277 < 128; i41277++) {
            #pragma HLS PIPELINE
            p_for_body_41289 = i41277;
            goto for_body_41287;
            pipeline_continue_41313: continue;
        }
        goto cont_41316;
    }
for_body_41287: {
        for_body_41289 = p_for_body_41289;
        _41296 = (256 * loop_41272);
        idx0_41297 = (_41296 + for_body_41289);
        _41298 = (&(_38570_41267)[idx0_41297]);
        _41299 = *_41298;
        _41303 = (_41299);
        *_38570_41268 << _41303;
        goto cont_41304;
    }
cont_41304: {
        idx1_41306 = (128 + idx0_41297);
        _41307 = (&(_38570_41267)[idx1_41306]);
        _41308 = *_41307;
        _41310 = (_41308);
        *_38570_41269 << _41310;
        goto continue_wrapper_41311;
    }
continue_wrapper_41311: {
        goto pipeline_continue_41313;
    }
cont_41316: {
        _41318 = (loop_41272 + loop_41274);
        p_loop_41272 = _41318;
        p_loop_41273 = loop_41273;
        p_loop_41274 = loop_41274;
        goto loop_41270;
    }
}

void _38755(array_30 _38755_41335[524288], hls::stream<channel8_f32_33>* _38755_41336, hls::stream<channel8_f32_33>* _38755_41337) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_38755_41335 struct_level
#pragma HLS data_pack variable=_38755_41336 struct_level
#pragma HLS data_pack variable=_38755_41337 struct_level
i32   loop_41340;
    i32 p_loop_41340;
    i32   loop_41341;
    i32 p_loop_41341;
    i32   loop_41342;
    i32 p_loop_41342;
    i32   for_body_41355;
    i32 p_for_body_41355;
    array_30   cont_41362;
    array_30 p_cont_41362;
    array_30   cont_41369;
    array_30 p_cont_41369;
    bool _41343;
    i32 _41363;
    i32 idx0_41364;
    array_30* _41365;
    i32 idx1_41373;
    array_30* _41374;
    i32 _41378;
    {
        p_loop_41340 = 0;
        p_loop_41341 = 2048;
        p_loop_41342 = 1;
        goto loop_41338;
    }
loop_41338: {
        loop_41340 = p_loop_41340;
        loop_41341 = p_loop_41341;
        loop_41342 = p_loop_41342;
        _41343 = (loop_41340 < loop_41341);
        if (_41343) goto branch_true_41344; else goto branch_false_41384;
    }
branch_false_41384: {
        return void();
    }
branch_true_41344: {
        int i41345;
        for (i41345 = 0; i41345 < 128; i41345++) {
            #pragma HLS PIPELINE
            p_for_body_41355 = i41345;
            goto for_body_41353;
            pipeline_continue_41370: continue;
        }
        goto cont_41376;
    }
for_body_41353: {
        for_body_41355 = p_for_body_41355;
        *_38755_41336 >> cont_41362;
        p_cont_41362 = cont_41362;
        goto cont_41360;
    }
cont_41360: {
        cont_41362 = p_cont_41362;
        _41363 = (256 * loop_41340);
        idx0_41364 = (_41363 + for_body_41355);
        _41365 = (&(_38755_41335)[idx0_41364]);
        (*_41365 = cont_41362);
        *_38755_41337 >> cont_41369;
        p_cont_41369 = cont_41369;
        goto cont_41367;
    }
cont_41367: {
        cont_41369 = p_cont_41369;
        idx1_41373 = (128 + idx0_41364);
        _41374 = (&(_38755_41335)[idx1_41373]);
        (*_41374 = cont_41369);
        goto pipeline_continue_41370;
    }
cont_41376: {
        _41378 = (loop_41340 + loop_41342);
        p_loop_41340 = _41378;
        p_loop_41341 = loop_41341;
        p_loop_41342 = loop_41342;
        goto loop_41338;
    }
}

void hls_top(array_30 hls_top_41258[524288], hls::stream<channel8_f32_33>* hls_top_41259, hls::stream<channel8_f32_33>* hls_top_41260, array_30 hls_top_41261[524288], hls::stream<channel8_f32_33>* hls_top_41262, hls::stream<channel8_f32_33>* hls_top_41263) {
    #pragma HLS INTERFACE m_axi     port = hls_top_41258 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_41258
#pragma HLS STABLE variable = hls_top_41258
#pragma HLS INTERFACE axis port = hls_top_41259
#pragma HLS INTERFACE axis port = hls_top_41260
#pragma HLS INTERFACE m_axi     port = hls_top_41261 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_41261
#pragma HLS STABLE variable = hls_top_41261
#pragma HLS INTERFACE axis port = hls_top_41262
#pragma HLS INTERFACE axis port = hls_top_41263
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _38570(hls_top_41258, hls_top_41259, hls_top_41260);
        
    }
next_kernel_41330: {
        _38755(hls_top_41261, hls_top_41262, hls_top_41263);
        
    }
hls_top_41396: {
        return void();
    }
}

} /* extern "C" */

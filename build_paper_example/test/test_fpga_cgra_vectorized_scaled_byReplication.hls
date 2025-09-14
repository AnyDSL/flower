
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
void hls_top(array_30[524288], hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*);
void _45313(array_30[524288], hls::stream<channel8_f32_33>*);
void _45544(array_30[524288], hls::stream<channel8_f32_33>*);
void _45378(array_30[524288], hls::stream<channel8_f32_33>*);
void _45596(array_30[524288], hls::stream<channel8_f32_33>*);
#endif /* __SYNTHESIS__ */

void _45596(array_30 _45596_49471[524288], hls::stream<channel8_f32_33>* _45596_49472) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_45596_49471 struct_level
#pragma HLS data_pack variable=_45596_49472 struct_level
i32   loop_49475;
    i32 p_loop_49475;
    i32   loop_49476;
    i32 p_loop_49476;
    i32   loop_49477;
    i32 p_loop_49477;
    i32   for_body_49490;
    i32 p_for_body_49490;
    array_30   cont_49493;
    array_30 p_cont_49493;
    bool _49478;
    i32 _49497;
    i32 idx_49498;
    i32 idx_49499;
    array_30* _49500;
    i32 _49504;
    {
        p_loop_49475 = 0;
        p_loop_49476 = 1024;
        p_loop_49477 = 1;
        goto loop_49473;
    }
loop_49473: {
        loop_49475 = p_loop_49475;
        loop_49476 = p_loop_49476;
        loop_49477 = p_loop_49477;
        _49478 = (loop_49475 < loop_49476);
        if (_49478) goto branch_true_49479; else goto branch_false_49509;
    }
branch_false_49509: {
        return void();
    }
branch_true_49479: {
        int i49480;
        for (i49480 = 0; i49480 < 256; i49480++) {
            #pragma HLS PIPELINE
            p_for_body_49490 = i49480;
            goto for_body_49488;
            pipeline_continue_49494: continue;
        }
        goto cont_49502;
    }
for_body_49488: {
        for_body_49490 = p_for_body_49490;
        *_45596_49472 >> cont_49493;
        p_cont_49493 = cont_49493;
        goto cont_49491;
    }
cont_49491: {
        cont_49493 = p_cont_49493;
        _49497 = (256 * loop_49475);
        idx_49498 = (_49497 + for_body_49490);
        idx_49499 = (262144 + idx_49498);
        _49500 = (&(_45596_49471)[idx_49499]);
        (*_49500 = cont_49493);
        goto pipeline_continue_49494;
    }
cont_49502: {
        _49504 = (loop_49475 + loop_49477);
        p_loop_49475 = _49504;
        p_loop_49476 = loop_49476;
        p_loop_49477 = loop_49477;
        goto loop_49473;
    }
}

void _45313(array_30 _45313_49372[524288], hls::stream<channel8_f32_33>* _45313_49373) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_45313_49372 struct_level
#pragma HLS data_pack variable=_45313_49373 struct_level
i32   loop_49376;
    i32 p_loop_49376;
    i32   loop_49377;
    i32 p_loop_49377;
    i32   loop_49378;
    i32 p_loop_49378;
    i32   for_body_49391;
    i32 p_for_body_49391;
    bool _49379;
    i32 _49392;
    i32 idx_49393;
    array_30* _49394;
    array_30 _49395;
    array_30 _49397;
    i32 _49405;
    {
        p_loop_49376 = 0;
        p_loop_49377 = 1024;
        p_loop_49378 = 1;
        goto loop_49374;
    }
loop_49374: {
        loop_49376 = p_loop_49376;
        loop_49377 = p_loop_49377;
        loop_49378 = p_loop_49378;
        _49379 = (loop_49376 < loop_49377);
        if (_49379) goto branch_true_49380; else goto branch_false_49410;
    }
branch_false_49410: {
        return void();
    }
branch_true_49380: {
        int i49381;
        for (i49381 = 0; i49381 < 256; i49381++) {
            #pragma HLS PIPELINE
            p_for_body_49391 = i49381;
            goto for_body_49389;
            pipeline_continue_49400: continue;
        }
        goto cont_49403;
    }
for_body_49389: {
        for_body_49391 = p_for_body_49391;
        _49392 = (256 * loop_49376);
        idx_49393 = (_49392 + for_body_49391);
        _49394 = (&(_45313_49372)[idx_49393]);
        _49395 = *_49394;
        _49397 = (_49395);
        *_45313_49373 << _49397;
        goto continue_wrapper_49398;
    }
continue_wrapper_49398: {
        goto pipeline_continue_49400;
    }
cont_49403: {
        _49405 = (loop_49376 + loop_49378);
        p_loop_49376 = _49405;
        p_loop_49377 = loop_49377;
        p_loop_49378 = loop_49378;
        goto loop_49374;
    }
}

void _45544(array_30 _45544_49419[524288], hls::stream<channel8_f32_33>* _45544_49420) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_45544_49419 struct_level
#pragma HLS data_pack variable=_45544_49420 struct_level
i32   loop_49423;
    i32 p_loop_49423;
    i32   loop_49424;
    i32 p_loop_49424;
    i32   loop_49425;
    i32 p_loop_49425;
    i32   for_body_49438;
    i32 p_for_body_49438;
    array_30   cont_49445;
    array_30 p_cont_49445;
    bool _49426;
    i32 _49449;
    i32 idx_49450;
    array_30* _49451;
    i32 _49455;
    {
        p_loop_49423 = 0;
        p_loop_49424 = 1024;
        p_loop_49425 = 1;
        goto loop_49421;
    }
loop_49421: {
        loop_49423 = p_loop_49423;
        loop_49424 = p_loop_49424;
        loop_49425 = p_loop_49425;
        _49426 = (loop_49423 < loop_49424);
        if (_49426) goto branch_true_49427; else goto branch_false_49460;
    }
branch_false_49460: {
        return void();
    }
branch_true_49427: {
        int i49428;
        for (i49428 = 0; i49428 < 256; i49428++) {
            #pragma HLS PIPELINE
            p_for_body_49438 = i49428;
            goto for_body_49436;
            pipeline_continue_49446: continue;
        }
        goto cont_49453;
    }
for_body_49436: {
        for_body_49438 = p_for_body_49438;
        *_45544_49420 >> cont_49445;
        p_cont_49445 = cont_49445;
        goto cont_49443;
    }
cont_49443: {
        cont_49445 = p_cont_49445;
        _49449 = (256 * loop_49423);
        idx_49450 = (_49449 + for_body_49438);
        _49451 = (&(_45544_49419)[idx_49450]);
        (*_49451 = cont_49445);
        goto pipeline_continue_49446;
    }
cont_49453: {
        _49455 = (loop_49423 + loop_49425);
        p_loop_49423 = _49455;
        p_loop_49424 = loop_49424;
        p_loop_49425 = loop_49425;
        goto loop_49421;
    }
}

void _45378(array_30 _45378_49303[524288], hls::stream<channel8_f32_33>* _45378_49304) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_45378_49303 struct_level
#pragma HLS data_pack variable=_45378_49304 struct_level
i32   loop_49307;
    i32 p_loop_49307;
    i32   loop_49308;
    i32 p_loop_49308;
    i32   loop_49309;
    i32 p_loop_49309;
    i32   for_body_49324;
    i32 p_for_body_49324;
    bool _49310;
    i32 _49331;
    i32 idx_49332;
    i32 idx_49333;
    array_30* _49334;
    array_30 _49335;
    array_30 _49339;
    i32 _49347;
    {
        p_loop_49307 = 0;
        p_loop_49308 = 1024;
        p_loop_49309 = 1;
        goto loop_49305;
    }
loop_49305: {
        loop_49307 = p_loop_49307;
        loop_49308 = p_loop_49308;
        loop_49309 = p_loop_49309;
        _49310 = (loop_49307 < loop_49308);
        if (_49310) goto branch_true_49311; else goto branch_false_49352;
    }
branch_false_49352: {
        return void();
    }
branch_true_49311: {
        int i49312;
        for (i49312 = 0; i49312 < 256; i49312++) {
            #pragma HLS PIPELINE
            p_for_body_49324 = i49312;
            goto for_body_49322;
            pipeline_continue_49342: continue;
        }
        goto cont_49345;
    }
for_body_49322: {
        for_body_49324 = p_for_body_49324;
        _49331 = (256 * loop_49307);
        idx_49332 = (_49331 + for_body_49324);
        idx_49333 = (262144 + idx_49332);
        _49334 = (&(_45378_49303)[idx_49333]);
        _49335 = *_49334;
        _49339 = (_49335);
        *_45378_49304 << _49339;
        goto continue_wrapper_49340;
    }
continue_wrapper_49340: {
        goto pipeline_continue_49342;
    }
cont_49345: {
        _49347 = (loop_49307 + loop_49309);
        p_loop_49307 = _49347;
        p_loop_49308 = loop_49308;
        p_loop_49309 = loop_49309;
        goto loop_49305;
    }
}

void hls_top(array_30 hls_top_49361[524288], hls::stream<channel8_f32_33>* hls_top_49362, array_30 hls_top_49363[524288], hls::stream<channel8_f32_33>* hls_top_49364, array_30 hls_top_49365[524288], hls::stream<channel8_f32_33>* hls_top_49366, array_30 hls_top_49367[524288], hls::stream<channel8_f32_33>* hls_top_49368) {
    #pragma HLS INTERFACE m_axi     port = hls_top_49361 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_49361
#pragma HLS STABLE variable = hls_top_49361
#pragma HLS INTERFACE axis port = hls_top_49362
#pragma HLS INTERFACE m_axi     port = hls_top_49363 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_49363
#pragma HLS STABLE variable = hls_top_49363
#pragma HLS INTERFACE axis port = hls_top_49364
#pragma HLS INTERFACE m_axi     port = hls_top_49365 bundle = gmem3  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_49365
#pragma HLS STABLE variable = hls_top_49365
#pragma HLS INTERFACE axis port = hls_top_49366
#pragma HLS INTERFACE m_axi     port = hls_top_49367 bundle = gmem4  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_49367
#pragma HLS STABLE variable = hls_top_49367
#pragma HLS INTERFACE axis port = hls_top_49368
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _45313(hls_top_49363, hls_top_49364);
        
    }
next_kernel_49414: {
        _45544(hls_top_49367, hls_top_49368);
        
    }
next_kernel_49464: {
        _45378(hls_top_49361, hls_top_49362);
        
    }
next_kernel_49466: {
        _45596(hls_top_49365, hls_top_49366);
        
    }
hls_top_49520: {
        return void();
    }
}

} /* extern "C" */

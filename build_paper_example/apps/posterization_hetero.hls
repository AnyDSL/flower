
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
void hls_top(array_30[131072], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, array_30[131072], hls::stream<channel8_i32_33>*);
void _70268(array_30[131072], hls::stream<channel8_i32_33>*);
void _70408(hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
void _70638(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _70408(hls::stream<channel8_i32_33>* _70408_75446, hls::stream<channel8_i32_33>* _70408_75447) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_70408_75446 struct_level
#pragma HLS data_pack variable=_70408_75447 struct_level
i32   loop_75450;
    i32 p_loop_75450;
    i32   for_body_75463;
    i32 p_for_body_75463;
    array_30   cont_75470;
    array_30 p_cont_75470;
    i32   cont_75477;
    i32 p_cont_75477;
    i32   cont_75483;
    i32 p_cont_75483;
    i32   cont_75490;
    i32 p_cont_75490;
    i32   cont_75496;
    i32 p_cont_75496;
    i32   cont_75503;
    i32 p_cont_75503;
    i32   cont_75510;
    i32 p_cont_75510;
    i32   cont_75517;
    i32 p_cont_75517;
    bool _75451;
    i32 _75471;
    bool _75473;
    array_30 _75574;
    array_30 value_vec_75520_slot;
    array_30* value_vec_75520 = &value_vec_75520_slot;
    i32 _75478;
    bool _75479;
    i32* _75567;
    i32 _75485;
    bool _75486;
    i32* _75561;
    i32 _75491;
    bool _75492;
    i32* _75555;
    i32 _75498;
    bool _75499;
    i32* _75549;
    i32 _75505;
    bool _75506;
    i32* _75543;
    i32 _75512;
    bool _75513;
    i32* _75537;
    i32* _75521;
    array_30 _75523;
    array_30 _75525;
    i32 _75533;
    {
        _75574.e[0ULL] = 0;
        _75574.e[1ULL] = 0;
        _75574.e[2ULL] = 0;
        _75574.e[3ULL] = 0;
        _75574.e[4ULL] = 0;
        _75574.e[5ULL] = 0;
        _75574.e[6ULL] = 0;
        _75574.e[7ULL] = 0;
        p_loop_75450 = 0;
        goto loop_75448;
    }
loop_75448: {
        loop_75450 = p_loop_75450;
        _75451 = (loop_75450 < 1024);
        if (_75451) goto branch_true_75452; else goto branch_false_75582;
    }
branch_false_75582: {
        return void();
    }
branch_true_75452: {
        int i75453;
        for (i75453 = 0; i75453 < 128; i75453++) {
            #pragma HLS PIPELINE
            p_for_body_75463 = i75453;
            goto for_body_75461;
            pipeline_continue_75528: continue;
        }
        goto cont_75531;
    }
for_body_75461: {
        for_body_75463 = p_for_body_75463;
        *_70408_75446 >> cont_75470;
        p_cont_75470 = cont_75470;
        goto cont_75468;
    }
cont_75468: {
        cont_75470 = p_cont_75470;
        _75471 = (cont_75470.e[0]);
        _75473 = (_75471 < 3);
        (*value_vec_75520 = _75574);
        if (_75473) goto branch_true_75474; else goto branch_false_75577;
    }
branch_false_75577: {
        p_cont_75477 = 3;
        goto cont_75475;
    }
branch_true_75474: {
        p_cont_75477 = _75471;
        goto cont_75475;
    }
cont_75475: {
        cont_75477 = p_cont_75477;
        _75478 = (cont_75470.e[1]);
        _75479 = (_75478 < 3);
        _75567 = (&(value_vec_75520)->e[0]);
        (*_75567 = cont_75477);
        if (_75479) goto branch_true_75480; else goto branch_false_75570;
    }
branch_false_75570: {
        p_cont_75483 = 3;
        goto cont_75481;
    }
branch_true_75480: {
        p_cont_75483 = _75478;
        goto cont_75481;
    }
cont_75481: {
        cont_75483 = p_cont_75483;
        _75485 = (cont_75470.e[2]);
        _75486 = (_75485 < 3);
        _75561 = (&(value_vec_75520)->e[1]);
        (*_75561 = cont_75483);
        if (_75486) goto branch_true_75487; else goto branch_false_75564;
    }
branch_false_75564: {
        p_cont_75490 = 3;
        goto cont_75488;
    }
branch_true_75487: {
        p_cont_75490 = _75485;
        goto cont_75488;
    }
cont_75488: {
        cont_75490 = p_cont_75490;
        _75491 = (cont_75470.e[3]);
        _75492 = (_75491 < 3);
        _75555 = (&(value_vec_75520)->e[2]);
        (*_75555 = cont_75490);
        if (_75492) goto branch_true_75493; else goto branch_false_75558;
    }
branch_false_75558: {
        p_cont_75496 = 3;
        goto cont_75494;
    }
branch_true_75493: {
        p_cont_75496 = _75491;
        goto cont_75494;
    }
cont_75494: {
        cont_75496 = p_cont_75496;
        _75498 = (cont_75470.e[4]);
        _75499 = (_75498 < 3);
        _75549 = (&(value_vec_75520)->e[3]);
        (*_75549 = cont_75496);
        if (_75499) goto branch_true_75500; else goto branch_false_75552;
    }
branch_false_75552: {
        p_cont_75503 = 3;
        goto cont_75501;
    }
branch_true_75500: {
        p_cont_75503 = _75498;
        goto cont_75501;
    }
cont_75501: {
        cont_75503 = p_cont_75503;
        _75505 = (cont_75470.e[5]);
        _75506 = (_75505 < 3);
        _75543 = (&(value_vec_75520)->e[4]);
        (*_75543 = cont_75503);
        if (_75506) goto branch_true_75507; else goto branch_false_75546;
    }
branch_false_75546: {
        p_cont_75510 = 3;
        goto cont_75508;
    }
branch_true_75507: {
        p_cont_75510 = _75505;
        goto cont_75508;
    }
cont_75508: {
        cont_75510 = p_cont_75510;
        _75512 = (cont_75470.e[6]);
        _75513 = (_75512 < 3);
        _75537 = (&(value_vec_75520)->e[5]);
        (*_75537 = cont_75510);
        if (_75513) goto branch_true_75514; else goto branch_false_75540;
    }
branch_false_75540: {
        p_cont_75517 = 3;
        goto cont_75515;
    }
branch_true_75514: {
        p_cont_75517 = _75512;
        goto cont_75515;
    }
cont_75515: {
        cont_75517 = p_cont_75517;
        _75521 = (&(value_vec_75520)->e[6]);
        (*_75521 = cont_75517);
        _75523 = *value_vec_75520;
        _75525 = (_75523);
        *_70408_75447 << _75525;
        goto continue_wrapper_75526;
    }
continue_wrapper_75526: {
        goto pipeline_continue_75528;
    }
cont_75531: {
        _75533 = (1 + loop_75450);
        p_loop_75450 = _75533;
        goto loop_75448;
    }
}

void _70268(array_30 _70268_75379[131072], hls::stream<channel8_i32_33>* _70268_75380) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_70268_75379 struct_level
#pragma HLS data_pack variable=_70268_75380 struct_level
i32   loop_75383;
    i32 p_loop_75383;
    i32   loop_75384;
    i32 p_loop_75384;
    i32   loop_75385;
    i32 p_loop_75385;
    i32   for_body_75400;
    i32 p_for_body_75400;
    bool _75386;
    i32 _75406;
    i32 idx_75407;
    array_30* _75408;
    array_30 _75409;
    array_30 _75413;
    i32 _75421;
    {
        p_loop_75383 = 0;
        p_loop_75384 = 1024;
        p_loop_75385 = 1;
        goto loop_75381;
    }
loop_75381: {
        loop_75383 = p_loop_75383;
        loop_75384 = p_loop_75384;
        loop_75385 = p_loop_75385;
        _75386 = (loop_75383 < loop_75384);
        if (_75386) goto branch_true_75387; else goto branch_false_75426;
    }
branch_false_75426: {
        return void();
    }
branch_true_75387: {
        int i75388;
        for (i75388 = 0; i75388 < 128; i75388++) {
            #pragma HLS PIPELINE
            p_for_body_75400 = i75388;
            goto for_body_75398;
            pipeline_continue_75416: continue;
        }
        goto cont_75419;
    }
for_body_75398: {
        for_body_75400 = p_for_body_75400;
        _75406 = (128 * loop_75383);
        idx_75407 = (_75406 + for_body_75400);
        _75408 = (&(_70268_75379)[idx_75407]);
        _75409 = *_75408;
        _75413 = (_75409);
        *_70268_75380 << _75413;
        goto continue_wrapper_75414;
    }
continue_wrapper_75414: {
        goto pipeline_continue_75416;
    }
cont_75419: {
        _75421 = (loop_75383 + loop_75385);
        p_loop_75383 = _75421;
        p_loop_75384 = loop_75384;
        p_loop_75385 = loop_75385;
        goto loop_75381;
    }
}

void _70638(array_30 _70638_75591[131072], hls::stream<channel8_i32_33>* _70638_75592) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_70638_75591 struct_level
#pragma HLS data_pack variable=_70638_75592 struct_level
i32   loop_75595;
    i32 p_loop_75595;
    i32   loop_75596;
    i32 p_loop_75596;
    i32   loop_75597;
    i32 p_loop_75597;
    i32   for_body_75610;
    i32 p_for_body_75610;
    array_30   cont_75613;
    array_30 p_cont_75613;
    bool _75598;
    i32 _75617;
    i32 idx_75618;
    array_30* _75619;
    i32 _75623;
    {
        p_loop_75595 = 0;
        p_loop_75596 = 1024;
        p_loop_75597 = 1;
        goto loop_75593;
    }
loop_75593: {
        loop_75595 = p_loop_75595;
        loop_75596 = p_loop_75596;
        loop_75597 = p_loop_75597;
        _75598 = (loop_75595 < loop_75596);
        if (_75598) goto branch_true_75599; else goto branch_false_75628;
    }
branch_false_75628: {
        return void();
    }
branch_true_75599: {
        int i75600;
        for (i75600 = 0; i75600 < 128; i75600++) {
            #pragma HLS PIPELINE
            p_for_body_75610 = i75600;
            goto for_body_75608;
            pipeline_continue_75614: continue;
        }
        goto cont_75621;
    }
for_body_75608: {
        for_body_75610 = p_for_body_75610;
        *_70638_75592 >> cont_75613;
        p_cont_75613 = cont_75613;
        goto cont_75611;
    }
cont_75611: {
        cont_75613 = p_cont_75613;
        _75617 = (128 * loop_75595);
        idx_75618 = (_75617 + for_body_75610);
        _75619 = (&(_70638_75591)[idx_75618]);
        (*_75619 = cont_75613);
        goto pipeline_continue_75614;
    }
cont_75621: {
        _75623 = (loop_75595 + loop_75597);
        p_loop_75595 = _75623;
        p_loop_75596 = loop_75596;
        p_loop_75597 = loop_75597;
        goto loop_75593;
    }
}

void hls_top(array_30 hls_top_75435[131072], hls::stream<channel8_i32_33>* hls_top_75436, hls::stream<channel8_i32_33>* hls_top_75437, hls::stream<channel8_i32_33>* hls_top_75438, array_30 hls_top_75439[131072], hls::stream<channel8_i32_33>* hls_top_75440) {
    #pragma HLS INTERFACE m_axi     port = hls_top_75435 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_75435
#pragma HLS STABLE variable = hls_top_75435
#pragma HLS INTERFACE axis port = hls_top_75436
#pragma HLS INTERFACE axis port = hls_top_75437
#pragma HLS INTERFACE axis port = hls_top_75438
#pragma HLS INTERFACE m_axi     port = hls_top_75439 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_75439
#pragma HLS STABLE variable = hls_top_75439
#pragma HLS INTERFACE axis port = hls_top_75440
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _70268(hls_top_75439, hls_top_75440);
        
    }
next_kernel_75441: {
        _70408(hls_top_75437, hls_top_75438);
        
    }
next_kernel_75586: {
        _70638(hls_top_75435, hls_top_75436);
        
    }
hls_top_75644: {
        return void();
    }
}

} /* extern "C" */

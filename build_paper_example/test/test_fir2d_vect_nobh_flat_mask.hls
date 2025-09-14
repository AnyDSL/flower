
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
void _79610(array_30[131072], hls::stream<channel8_i32_33>*);
void _80389(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _79610(array_30 _79610_83430[131072], hls::stream<channel8_i32_33>* _79610_83431) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_79610_83430 struct_level
#pragma HLS data_pack variable=_79610_83431 struct_level
i32   loop_83434;
    i32 p_loop_83434;
    i32   loop_83435;
    i32 p_loop_83435;
    i32   loop_83436;
    i32 p_loop_83436;
    i32   for_body_83451;
    i32 p_for_body_83451;
    bool _83437;
    i32 _83457;
    i32 idx_83458;
    array_30* _83459;
    array_30 _83460;
    array_30 _83464;
    i32 _83472;
    {
        p_loop_83434 = 0;
        p_loop_83435 = 1024;
        p_loop_83436 = 1;
        goto loop_83432;
    }
loop_83432: {
        loop_83434 = p_loop_83434;
        loop_83435 = p_loop_83435;
        loop_83436 = p_loop_83436;
        _83437 = (loop_83434 < loop_83435);
        if (_83437) goto branch_true_83438; else goto branch_false_83477;
    }
branch_false_83477: {
        return void();
    }
branch_true_83438: {
        int i83439;
        for (i83439 = 0; i83439 < 1024; i83439++) {
            #pragma HLS PIPELINE
            p_for_body_83451 = i83439;
            goto for_body_83449;
            pipeline_continue_83467: continue;
        }
        goto cont_83470;
    }
for_body_83449: {
        for_body_83451 = p_for_body_83451;
        _83457 = (1024 * loop_83434);
        idx_83458 = (_83457 + for_body_83451);
        _83459 = (&(_79610_83430)[idx_83458]);
        _83460 = *_83459;
        _83464 = (_83460);
        *_79610_83431 << _83464;
        goto continue_wrapper_83465;
    }
continue_wrapper_83465: {
        goto pipeline_continue_83467;
    }
cont_83470: {
        _83472 = (loop_83434 + loop_83436);
        p_loop_83434 = _83472;
        p_loop_83435 = loop_83435;
        p_loop_83436 = loop_83436;
        goto loop_83432;
    }
}

void _80389(array_30 _80389_83494[131072], hls::stream<channel8_i32_33>* _80389_83495) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_80389_83494 struct_level
#pragma HLS data_pack variable=_80389_83495 struct_level
i32   loop_83498;
    i32 p_loop_83498;
    i32   loop_83499;
    i32 p_loop_83499;
    i32   loop_83500;
    i32 p_loop_83500;
    i32   for_body_83513;
    i32 p_for_body_83513;
    array_30   cont_83520;
    array_30 p_cont_83520;
    bool _83501;
    i32 _83524;
    i32 idx_83525;
    array_30* _83526;
    i32 _83530;
    {
        p_loop_83498 = 0;
        p_loop_83499 = 1024;
        p_loop_83500 = 1;
        goto loop_83496;
    }
loop_83496: {
        loop_83498 = p_loop_83498;
        loop_83499 = p_loop_83499;
        loop_83500 = p_loop_83500;
        _83501 = (loop_83498 < loop_83499);
        if (_83501) goto branch_true_83502; else goto branch_false_83535;
    }
branch_false_83535: {
        return void();
    }
branch_true_83502: {
        int i83503;
        for (i83503 = 0; i83503 < 1024; i83503++) {
            #pragma HLS PIPELINE
            p_for_body_83513 = i83503;
            goto for_body_83511;
            pipeline_continue_83521: continue;
        }
        goto cont_83528;
    }
for_body_83511: {
        for_body_83513 = p_for_body_83513;
        *_80389_83495 >> cont_83520;
        p_cont_83520 = cont_83520;
        goto cont_83518;
    }
cont_83518: {
        cont_83520 = p_cont_83520;
        _83524 = (1024 * loop_83498);
        idx_83525 = (_83524 + for_body_83513);
        _83526 = (&(_80389_83494)[idx_83525]);
        (*_83526 = cont_83520);
        goto pipeline_continue_83521;
    }
cont_83528: {
        _83530 = (loop_83498 + loop_83500);
        p_loop_83498 = _83530;
        p_loop_83499 = loop_83499;
        p_loop_83500 = loop_83500;
        goto loop_83496;
    }
}

void hls_top(array_30 hls_top_83485[131072], hls::stream<channel8_i32_33>* hls_top_83486, array_30 hls_top_83487[131072], hls::stream<channel8_i32_33>* hls_top_83488) {
    #pragma HLS INTERFACE m_axi     port = hls_top_83485 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_83485
#pragma HLS STABLE variable = hls_top_83485
#pragma HLS INTERFACE axis port = hls_top_83486
#pragma HLS INTERFACE m_axi     port = hls_top_83487 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_83487
#pragma HLS STABLE variable = hls_top_83487
#pragma HLS INTERFACE axis port = hls_top_83488
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _79610(hls_top_83485, hls_top_83486);
        
    }
next_kernel_83489: {
        _80389(hls_top_83487, hls_top_83488);
        
    }
hls_top_83547: {
        return void();
    }
}

} /* extern "C" */

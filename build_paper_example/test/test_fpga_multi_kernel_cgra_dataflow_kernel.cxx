
#include <adf.h>
#include <aie_api/aie_adf.hpp>
#include <aie_api/utils.hpp>
#include <aie_api/operators.hpp>
using namespace aie::operators;

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

typedef f32 channel_f32_30;

void _39622(input_window<channel_f32_30>* __restrict, output_window<channel_f32_30>* __restrict);
void _39677(input_window<channel_f32_30>* __restrict, output_window<channel_f32_30>* __restrict);

void _39622(input_window<channel_f32_30>* __restrict _39622_43705, output_window<channel_f32_30>* __restrict _39622_43706) {
    i32   loop_43709;
    i32 p_loop_43709;
    i32   for_body_43722;
    i32 p_for_body_43722;
    f32   cont_43725;
    f32 p_cont_43725;
    bool _43710;
    i32 _43733;
    {
        p_loop_43709 = 0;
        goto loop_43707;
    }
loop_43707: {
        loop_43709 = p_loop_43709;
        _43710 = (loop_43709 < 2048);
        if (_43710) goto branch_true_43711; else goto branch_false_43739;
    }
branch_false_43739: {
        return;
    }
branch_true_43711: {
        int i43712;
        for (i43712 = 0; i43712 < 2048; i43712++)
        chess_prepare_for_pipelining {
            p_for_body_43722 = i43712;
            goto for_body_43720;
            pipeline_continue_43728: continue;
        }
        goto cont_43731;
    }
for_body_43720: {
        for_body_43722 = p_for_body_43722;
        cont_43725 = window_readincr(_39622_43705);
        p_cont_43725 = cont_43725;
        goto cont_43723;
    }
cont_43723: {
        cont_43725 = p_cont_43725;
        window_writeincr(_39622_43706, cont_43725);
        goto continue_wrapper_43726;
    }
continue_wrapper_43726: {
        goto pipeline_continue_43728;
    }
cont_43731: {
        _43733 = (1 + loop_43709);
        p_loop_43709 = _43733;
        goto loop_43707;
    }
}

void _39677(input_window<channel_f32_30>* __restrict _39677_43652, output_window<channel_f32_30>* __restrict _39677_43653) {
    i32   loop_43656;
    i32 p_loop_43656;
    i32   for_body_43671;
    i32 p_for_body_43671;
    f32   cont_43678;
    f32 p_cont_43678;
    bool _43658;
    i32 _43692;
    {
        p_loop_43656 = 0;
        goto loop_43654;
    }
loop_43654: {
        loop_43656 = p_loop_43656;
        _43658 = (loop_43656 < 2048);
        if (_43658) goto branch_true_43659; else goto branch_false_43698;
    }
branch_false_43698: {
        return;
    }
branch_true_43659: {
        int i43660;
        for (i43660 = 0; i43660 < 2048; i43660++)
        chess_prepare_for_pipelining {
            p_for_body_43671 = i43660;
            goto for_body_43669;
            pipeline_continue_43686: continue;
        }
        goto cont_43689;
    }
for_body_43669: {
        for_body_43671 = p_for_body_43671;
        cont_43678 = window_readincr(_39677_43652);
        p_cont_43678 = cont_43678;
        goto cont_43676;
    }
cont_43676: {
        cont_43678 = p_cont_43678;
        window_writeincr(_39677_43653, cont_43678);
        goto continue_wrapper_43684;
    }
continue_wrapper_43684: {
        goto pipeline_continue_43686;
    }
cont_43689: {
        _43692 = (1 + loop_43656);
        p_loop_43656 = _43692;
        goto loop_43654;
    }
}


    
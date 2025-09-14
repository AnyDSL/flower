
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
typedef  acc64 i64;
typedef  acc80 u64;
typedef    float f32;
typedef   double f64;

typedef struct {
    f32 e[8];
} array_31;
typedef f32 channel8_f32_30;

void _40862(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);
void _40807(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);

void _40807(input_window<channel8_f32_30>* __restrict _40807_45727, output_window<channel8_f32_30>* __restrict _40807_45728) {
    i32   loop_45731;
    i32 p_loop_45731;
    i32   for_body_45744;
    i32 p_for_body_45744;
    aie::vector<f32, 8>   cont_45747;
    aie::vector<f32, 8> p_cont_45747;
    bool _45732;
    i32 _45755;
    {
        p_loop_45731 = 0;
        goto loop_45729;
    }
loop_45729: {
        loop_45731 = p_loop_45731;
        _45732 = (loop_45731 < 2048);
        if (_45732) goto branch_true_45733; else goto branch_false_45761;
    }
branch_false_45761: {
        return;
    }
branch_true_45733: {
        int i45734;
        for (i45734 = 0; i45734 < 128; i45734++)
        chess_prepare_for_pipelining {
            p_for_body_45744 = i45734;
            goto for_body_45742;
            pipeline_continue_45750: continue;
        }
        goto cont_45753;
    }
for_body_45742: {
        for_body_45744 = p_for_body_45744;
        cont_45747 = window_readincr_v<8>(_40807_45727);
        p_cont_45747 = cont_45747;
        goto cont_45745;
    }
cont_45745: {
        cont_45747 = p_cont_45747;
        window_writeincr(_40807_45728, cont_45747);
        goto continue_wrapper_45748;
    }
continue_wrapper_45748: {
        goto pipeline_continue_45750;
    }
cont_45753: {
        _45755 = (1 + loop_45731);
        p_loop_45731 = _45755;
        goto loop_45729;
    }
}

void _40862(input_window<channel8_f32_30>* __restrict _40862_45664, output_window<channel8_f32_30>* __restrict _40862_45665) {
    i32   loop_45668;
    i32 p_loop_45668;
    i32   for_body_45684;
    i32 p_for_body_45684;
    aie::vector<f32, 8>   cont_45691;
    aie::vector<f32, 8> p_cont_45691;
    bool _45670;
    i32 _45705;
    {
        p_loop_45668 = 0;
        goto loop_45666;
    }
loop_45666: {
        loop_45668 = p_loop_45668;
        _45670 = (loop_45668 < 2048);
        if (_45670) goto branch_true_45671; else goto branch_false_45711;
    }
branch_false_45711: {
        return;
    }
branch_true_45671: {
        int i45672;
        for (i45672 = 0; i45672 < 128; i45672++)
        chess_prepare_for_pipelining {
            p_for_body_45684 = i45672;
            goto for_body_45682;
            pipeline_continue_45699: continue;
        }
        goto cont_45702;
    }
for_body_45682: {
        for_body_45684 = p_for_body_45684;
        cont_45691 = window_readincr_v<8>(_40862_45664);
        p_cont_45691 = cont_45691;
        goto cont_45689;
    }
cont_45689: {
        cont_45691 = p_cont_45691;
        window_writeincr(_40862_45665, cont_45691);
        goto continue_wrapper_45697;
    }
continue_wrapper_45697: {
        goto pipeline_continue_45699;
    }
cont_45702: {
        _45705 = (1 + loop_45668);
        p_loop_45668 = _45705;
        goto loop_45666;
    }
}


    
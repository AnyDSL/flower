
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
    i32 e[8];
} array_31;
typedef i32 channel8_i32_30;

void _70559(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _70339(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);

void _70559(input_window<channel8_i32_30>* __restrict _70559_77857, output_window<channel8_i32_30>* __restrict _70559_77858) {
    i32   loop_77861;
    i32 p_loop_77861;
    i32   for_body_77877;
    i32 p_for_body_77877;
    aie::vector<i32, 8>   cont_77886;
    aie::vector<i32, 8> p_cont_77886;
    aie::vector<i32, 8>   cont_77896;
    aie::vector<i32, 8> p_cont_77896;
    aie::accum<i64, 8>   cont_77904;
    aie::accum<i64, 8> p_cont_77904;
    aie::vector<i32, 8>   cont_77914;
    aie::vector<i32, 8> p_cont_77914;
    bool _77863;
    i32 _77928;
    {
        p_loop_77861 = 0;
        goto loop_77859;
    }
loop_77859: {
        loop_77861 = p_loop_77861;
        _77863 = (loop_77861 < 1024);
        if (_77863) goto branch_true_77864; else goto branch_false_77937;
    }
branch_false_77937: {
        return;
    }
branch_true_77864: {
        int i77865;
        for (i77865 = 0; i77865 < 128; i77865++)
        chess_prepare_for_pipelining {
            p_for_body_77877 = i77865;
            goto for_body_77875;
            pipeline_continue_77922: continue;
        }
        goto cont_77925;
    }
for_body_77875: {
        for_body_77877 = p_for_body_77877;
        cont_77886 = window_readincr_v<8>(_70559_77857);
        p_cont_77886 = cont_77886;
        goto cont_77884;
    }
cont_77884: {
        cont_77886 = p_cont_77886;
        cont_77896 = aie::broadcast<i32, 8>(85);
        p_cont_77896 = cont_77896;
        goto cont_77894;
    }
cont_77894: {
        cont_77896 = p_cont_77896;
        cont_77904 = aie::mul(cont_77886, cont_77896);
        p_cont_77904 = cont_77904;
        goto cont_77902;
    }
cont_77902: {
        cont_77904 = p_cont_77904;
        cont_77914 = srs(cont_77904, 1);
        p_cont_77914 = cont_77914;
        goto cont_77912;
    }
cont_77912: {
        cont_77914 = p_cont_77914;
        window_writeincr(_70559_77858, cont_77914);
        goto continue_wrapper_77920;
    }
continue_wrapper_77920: {
        goto pipeline_continue_77922;
    }
cont_77925: {
        _77928 = (1 + loop_77861);
        p_loop_77861 = _77928;
        goto loop_77859;
    }
}

void _70339(input_window<channel8_i32_30>* __restrict _70339_77946, output_window<channel8_i32_30>* __restrict _70339_77947) {
    i32   loop_77950;
    i32 p_loop_77950;
    i32   for_body_77963;
    i32 p_for_body_77963;
    aie::vector<i32, 8>   cont_77966;
    aie::vector<i32, 8> p_cont_77966;
    aie::vector<i32, 8>   cont_77975;
    aie::vector<i32, 8> p_cont_77975;
    bool _77951;
    i32 _77983;
    {
        p_loop_77950 = 0;
        goto loop_77948;
    }
loop_77948: {
        loop_77950 = p_loop_77950;
        _77951 = (loop_77950 < 1024);
        if (_77951) goto branch_true_77952; else goto branch_false_77990;
    }
branch_false_77990: {
        return;
    }
branch_true_77952: {
        int i77953;
        for (i77953 = 0; i77953 < 128; i77953++)
        chess_prepare_for_pipelining {
            p_for_body_77963 = i77953;
            goto for_body_77961;
            pipeline_continue_77978: continue;
        }
        goto cont_77981;
    }
for_body_77961: {
        for_body_77963 = p_for_body_77963;
        cont_77966 = window_readincr_v<8>(_70339_77946);
        p_cont_77966 = cont_77966;
        goto cont_77964;
    }
cont_77964: {
        cont_77966 = p_cont_77966;
        cont_77975 = aie::downshift(cont_77966, 6);
        p_cont_77975 = cont_77975;
        goto cont_77973;
    }
cont_77973: {
        cont_77975 = p_cont_77975;
        window_writeincr(_70339_77947, cont_77975);
        goto continue_wrapper_77976;
    }
continue_wrapper_77976: {
        goto pipeline_continue_77978;
    }
cont_77981: {
        _77983 = (1 + loop_77950);
        p_loop_77950 = _77983;
        goto loop_77948;
    }
}


    
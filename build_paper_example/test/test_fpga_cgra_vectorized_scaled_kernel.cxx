
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

void _38651(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);
void _38706(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);

void _38651(input_window<channel8_f32_30>* __restrict _38651_43087, output_window<channel8_f32_30>* __restrict _38651_43088) {
    i32   loop_43091;
    i32 p_loop_43091;
    i32   for_body_43104;
    i32 p_for_body_43104;
    aie::vector<f32, 8>   cont_43107;
    aie::vector<f32, 8> p_cont_43107;
    bool _43092;
    i32 _43115;
    {
        p_loop_43091 = 0;
        goto loop_43089;
    }
loop_43089: {
        loop_43091 = p_loop_43091;
        _43092 = (loop_43091 < 2048);
        if (_43092) goto branch_true_43093; else goto branch_false_43121;
    }
branch_false_43121: {
        return;
    }
branch_true_43093: {
        int i43094;
        for (i43094 = 0; i43094 < 128; i43094++)
        chess_prepare_for_pipelining {
            p_for_body_43104 = i43094;
            goto for_body_43102;
            pipeline_continue_43110: continue;
        }
        goto cont_43113;
    }
for_body_43102: {
        for_body_43104 = p_for_body_43104;
        cont_43107 = window_readincr_v<8>(_38651_43087);
        p_cont_43107 = cont_43107;
        goto cont_43105;
    }
cont_43105: {
        cont_43107 = p_cont_43107;
        window_writeincr(_38651_43088, cont_43107);
        goto continue_wrapper_43108;
    }
continue_wrapper_43108: {
        goto pipeline_continue_43110;
    }
cont_43113: {
        _43115 = (1 + loop_43091);
        p_loop_43091 = _43115;
        goto loop_43089;
    }
}

void _38706(input_window<channel8_f32_30>* __restrict _38706_43026, output_window<channel8_f32_30>* __restrict _38706_43027) {
    i32   loop_43030;
    i32 p_loop_43030;
    i32   for_body_43046;
    i32 p_for_body_43046;
    aie::vector<f32, 8>   cont_43053;
    aie::vector<f32, 8> p_cont_43053;
    bool _43032;
    i32 _43067;
    {
        p_loop_43030 = 0;
        goto loop_43028;
    }
loop_43028: {
        loop_43030 = p_loop_43030;
        _43032 = (loop_43030 < 2048);
        if (_43032) goto branch_true_43033; else goto branch_false_43073;
    }
branch_false_43073: {
        return;
    }
branch_true_43033: {
        int i43034;
        for (i43034 = 0; i43034 < 128; i43034++)
        chess_prepare_for_pipelining {
            p_for_body_43046 = i43034;
            goto for_body_43044;
            pipeline_continue_43061: continue;
        }
        goto cont_43064;
    }
for_body_43044: {
        for_body_43046 = p_for_body_43046;
        cont_43053 = window_readincr_v<8>(_38706_43026);
        p_cont_43053 = cont_43053;
        goto cont_43051;
    }
cont_43051: {
        cont_43053 = p_cont_43053;
        window_writeincr(_38706_43027, cont_43053);
        goto continue_wrapper_43059;
    }
continue_wrapper_43059: {
        goto pipeline_continue_43061;
    }
cont_43064: {
        _43067 = (1 + loop_43030);
        p_loop_43030 = _43067;
        goto loop_43028;
    }
}


    
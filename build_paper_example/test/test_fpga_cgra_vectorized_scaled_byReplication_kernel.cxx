
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

void _45440(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);
void _45495(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);

void _45440(input_window<channel8_f32_30>* __restrict _45440_51224, output_window<channel8_f32_30>* __restrict _45440_51225) {
    i32   loop_51228;
    i32 p_loop_51228;
    i32   for_body_51241;
    i32 p_for_body_51241;
    aie::vector<f32, 8>   cont_51244;
    aie::vector<f32, 8> p_cont_51244;
    bool _51229;
    i32 _51252;
    {
        p_loop_51228 = 0;
        goto loop_51226;
    }
loop_51226: {
        loop_51228 = p_loop_51228;
        _51229 = (loop_51228 < 1024);
        if (_51229) goto branch_true_51230; else goto branch_false_51258;
    }
branch_false_51258: {
        return;
    }
branch_true_51230: {
        int i51231;
        for (i51231 = 0; i51231 < 256; i51231++)
        chess_prepare_for_pipelining {
            p_for_body_51241 = i51231;
            goto for_body_51239;
            pipeline_continue_51247: continue;
        }
        goto cont_51250;
    }
for_body_51239: {
        for_body_51241 = p_for_body_51241;
        cont_51244 = window_readincr_v<8>(_45440_51224);
        p_cont_51244 = cont_51244;
        goto cont_51242;
    }
cont_51242: {
        cont_51244 = p_cont_51244;
        window_writeincr(_45440_51225, cont_51244);
        goto continue_wrapper_51245;
    }
continue_wrapper_51245: {
        goto pipeline_continue_51247;
    }
cont_51250: {
        _51252 = (1 + loop_51228);
        p_loop_51228 = _51252;
        goto loop_51226;
    }
}

void _45495(input_window<channel8_f32_30>* __restrict _45495_51163, output_window<channel8_f32_30>* __restrict _45495_51164) {
    i32   loop_51167;
    i32 p_loop_51167;
    i32   for_body_51183;
    i32 p_for_body_51183;
    aie::vector<f32, 8>   cont_51190;
    aie::vector<f32, 8> p_cont_51190;
    bool _51169;
    i32 _51204;
    {
        p_loop_51167 = 0;
        goto loop_51165;
    }
loop_51165: {
        loop_51167 = p_loop_51167;
        _51169 = (loop_51167 < 1024);
        if (_51169) goto branch_true_51170; else goto branch_false_51210;
    }
branch_false_51210: {
        return;
    }
branch_true_51170: {
        int i51171;
        for (i51171 = 0; i51171 < 256; i51171++)
        chess_prepare_for_pipelining {
            p_for_body_51183 = i51171;
            goto for_body_51181;
            pipeline_continue_51198: continue;
        }
        goto cont_51201;
    }
for_body_51181: {
        for_body_51183 = p_for_body_51183;
        cont_51190 = window_readincr_v<8>(_45495_51163);
        p_cont_51190 = cont_51190;
        goto cont_51188;
    }
cont_51188: {
        cont_51190 = p_cont_51190;
        window_writeincr(_45495_51164, cont_51190);
        goto continue_wrapper_51196;
    }
continue_wrapper_51196: {
        goto pipeline_continue_51198;
    }
cont_51201: {
        _51204 = (1 + loop_51167);
        p_loop_51167 = _51204;
        goto loop_51165;
    }
}


    
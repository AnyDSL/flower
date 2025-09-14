
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

void _39680(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);
void _39625(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);

void _39680(input_window<channel8_f32_30>* __restrict _39680_44418, output_window<channel8_f32_30>* __restrict _39680_44419) {
    i32   loop_44422;
    i32 p_loop_44422;
    i32   for_body_44435;
    i32 p_for_body_44435;
    aie::vector<f32, 8>   cont_44438;
    aie::vector<f32, 8> p_cont_44438;
    bool _44423;
    i32 _44446;
    {
        p_loop_44422 = 0;
        goto loop_44420;
    }
loop_44420: {
        loop_44422 = p_loop_44422;
        _44423 = (loop_44422 < 2048);
        if (_44423) goto branch_true_44424; else goto branch_false_44452;
    }
branch_false_44452: {
        return;
    }
branch_true_44424: {
        int i44425;
        for (i44425 = 0; i44425 < 128; i44425++)
        chess_prepare_for_pipelining {
            p_for_body_44435 = i44425;
            goto for_body_44433;
            pipeline_continue_44441: continue;
        }
        goto cont_44444;
    }
for_body_44433: {
        for_body_44435 = p_for_body_44435;
        cont_44438 = window_readincr_v<8>(_39680_44418);
        p_cont_44438 = cont_44438;
        goto cont_44436;
    }
cont_44436: {
        cont_44438 = p_cont_44438;
        window_writeincr(_39680_44419, cont_44438);
        goto continue_wrapper_44439;
    }
continue_wrapper_44439: {
        goto pipeline_continue_44441;
    }
cont_44444: {
        _44446 = (1 + loop_44422);
        p_loop_44422 = _44446;
        goto loop_44420;
    }
}

void _39625(input_window<channel8_f32_30>* __restrict _39625_44357, output_window<channel8_f32_30>* __restrict _39625_44358) {
    i32   loop_44361;
    i32 p_loop_44361;
    i32   for_body_44377;
    i32 p_for_body_44377;
    aie::vector<f32, 8>   cont_44384;
    aie::vector<f32, 8> p_cont_44384;
    bool _44363;
    i32 _44398;
    {
        p_loop_44361 = 0;
        goto loop_44359;
    }
loop_44359: {
        loop_44361 = p_loop_44361;
        _44363 = (loop_44361 < 2048);
        if (_44363) goto branch_true_44364; else goto branch_false_44404;
    }
branch_false_44404: {
        return;
    }
branch_true_44364: {
        int i44365;
        for (i44365 = 0; i44365 < 128; i44365++)
        chess_prepare_for_pipelining {
            p_for_body_44377 = i44365;
            goto for_body_44375;
            pipeline_continue_44392: continue;
        }
        goto cont_44395;
    }
for_body_44375: {
        for_body_44377 = p_for_body_44377;
        cont_44384 = window_readincr_v<8>(_39625_44357);
        p_cont_44384 = cont_44384;
        goto cont_44382;
    }
cont_44382: {
        cont_44384 = p_cont_44384;
        window_writeincr(_39625_44358, cont_44384);
        goto continue_wrapper_44390;
    }
continue_wrapper_44390: {
        goto pipeline_continue_44392;
    }
cont_44395: {
        _44398 = (1 + loop_44361);
        p_loop_44361 = _44398;
        goto loop_44359;
    }
}


    
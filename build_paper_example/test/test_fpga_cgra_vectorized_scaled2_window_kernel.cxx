
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

void _73515(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73801(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73597(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73648(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73750(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73852(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73699(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _73903(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);

void _73801(input_window<channel8_i32_30>* __restrict _73801_85465, output_window<channel8_i32_30>* __restrict _73801_85466) {
    i32   loop_85469;
    i32 p_loop_85469;
    i32   for_body_85482;
    i32 p_for_body_85482;
    aie::vector<i32, 8>   cont_85485;
    aie::vector<i32, 8> p_cont_85485;
    bool _85470;
    i32 _85493;
    {
        p_loop_85469 = 0;
        goto loop_85467;
    }
loop_85467: {
        loop_85469 = p_loop_85469;
        _85470 = (loop_85469 < 2048);
        if (_85470) goto branch_true_85471; else goto branch_false_85499;
    }
branch_false_85499: {
        return;
    }
branch_true_85471: {
        int i85472;
        for (i85472 = 0; i85472 < 32; i85472++)
        chess_prepare_for_pipelining {
            p_for_body_85482 = i85472;
            goto for_body_85480;
            pipeline_continue_85488: continue;
        }
        goto cont_85491;
    }
for_body_85480: {
        for_body_85482 = p_for_body_85482;
        cont_85485 = window_readincr_v<8>(_73801_85465);
        p_cont_85485 = cont_85485;
        goto cont_85483;
    }
cont_85483: {
        cont_85485 = p_cont_85485;
        window_writeincr(_73801_85466, cont_85485);
        goto continue_wrapper_85486;
    }
continue_wrapper_85486: {
        goto pipeline_continue_85488;
    }
cont_85491: {
        _85493 = (1 + loop_85469);
        p_loop_85469 = _85493;
        goto loop_85467;
    }
}

void _73699(input_window<channel8_i32_30>* __restrict _73699_85639, output_window<channel8_i32_30>* __restrict _73699_85640) {
    i32   loop_85643;
    i32 p_loop_85643;
    i32   for_body_85656;
    i32 p_for_body_85656;
    aie::vector<i32, 8>   cont_85659;
    aie::vector<i32, 8> p_cont_85659;
    bool _85644;
    i32 _85667;
    {
        p_loop_85643 = 0;
        goto loop_85641;
    }
loop_85641: {
        loop_85643 = p_loop_85643;
        _85644 = (loop_85643 < 2048);
        if (_85644) goto branch_true_85645; else goto branch_false_85673;
    }
branch_false_85673: {
        return;
    }
branch_true_85645: {
        int i85646;
        for (i85646 = 0; i85646 < 32; i85646++)
        chess_prepare_for_pipelining {
            p_for_body_85656 = i85646;
            goto for_body_85654;
            pipeline_continue_85662: continue;
        }
        goto cont_85665;
    }
for_body_85654: {
        for_body_85656 = p_for_body_85656;
        cont_85659 = window_readincr_v<8>(_73699_85639);
        p_cont_85659 = cont_85659;
        goto cont_85657;
    }
cont_85657: {
        cont_85659 = p_cont_85659;
        window_writeincr(_73699_85640, cont_85659);
        goto continue_wrapper_85660;
    }
continue_wrapper_85660: {
        goto pipeline_continue_85662;
    }
cont_85665: {
        _85667 = (1 + loop_85643);
        p_loop_85643 = _85667;
        goto loop_85641;
    }
}

void _73597(input_window<channel8_i32_30>* __restrict _73597_85327, output_window<channel8_i32_30>* __restrict _73597_85328) {
    i32   loop_85331;
    i32 p_loop_85331;
    i32   for_body_85347;
    i32 p_for_body_85347;
    aie::vector<i32, 8>   cont_85356;
    aie::vector<i32, 8> p_cont_85356;
    bool _85333;
    i32 _85370;
    {
        p_loop_85331 = 0;
        goto loop_85329;
    }
loop_85329: {
        loop_85331 = p_loop_85331;
        _85333 = (loop_85331 < 2048);
        if (_85333) goto branch_true_85334; else goto branch_false_85376;
    }
branch_false_85376: {
        return;
    }
branch_true_85334: {
        int i85335;
        for (i85335 = 0; i85335 < 32; i85335++)
        chess_prepare_for_pipelining {
            p_for_body_85347 = i85335;
            goto for_body_85345;
            pipeline_continue_85364: continue;
        }
        goto cont_85367;
    }
for_body_85345: {
        for_body_85347 = p_for_body_85347;
        cont_85356 = window_readincr_v<8>(_73597_85327);
        p_cont_85356 = cont_85356;
        goto cont_85354;
    }
cont_85354: {
        cont_85356 = p_cont_85356;
        window_writeincr(_73597_85328, cont_85356);
        goto continue_wrapper_85362;
    }
continue_wrapper_85362: {
        goto pipeline_continue_85364;
    }
cont_85367: {
        _85370 = (1 + loop_85331);
        p_loop_85331 = _85370;
        goto loop_85329;
    }
}

void _73852(input_window<channel8_i32_30>* __restrict _73852_85596, output_window<channel8_i32_30>* __restrict _73852_85597) {
    i32   loop_85600;
    i32 p_loop_85600;
    i32   for_body_85613;
    i32 p_for_body_85613;
    aie::vector<i32, 8>   cont_85616;
    aie::vector<i32, 8> p_cont_85616;
    bool _85601;
    i32 _85624;
    {
        p_loop_85600 = 0;
        goto loop_85598;
    }
loop_85598: {
        loop_85600 = p_loop_85600;
        _85601 = (loop_85600 < 2048);
        if (_85601) goto branch_true_85602; else goto branch_false_85630;
    }
branch_false_85630: {
        return;
    }
branch_true_85602: {
        int i85603;
        for (i85603 = 0; i85603 < 32; i85603++)
        chess_prepare_for_pipelining {
            p_for_body_85613 = i85603;
            goto for_body_85611;
            pipeline_continue_85619: continue;
        }
        goto cont_85622;
    }
for_body_85611: {
        for_body_85613 = p_for_body_85613;
        cont_85616 = window_readincr_v<8>(_73852_85596);
        p_cont_85616 = cont_85616;
        goto cont_85614;
    }
cont_85614: {
        cont_85616 = p_cont_85616;
        window_writeincr(_73852_85597, cont_85616);
        goto continue_wrapper_85617;
    }
continue_wrapper_85617: {
        goto pipeline_continue_85619;
    }
cont_85622: {
        _85624 = (1 + loop_85600);
        p_loop_85600 = _85624;
        goto loop_85598;
    }
}

void _73903(input_window<channel8_i32_30>* __restrict _73903_85682, output_window<channel8_i32_30>* __restrict _73903_85683) {
    i32   loop_85686;
    i32 p_loop_85686;
    i32   for_body_85699;
    i32 p_for_body_85699;
    aie::vector<i32, 8>   cont_85702;
    aie::vector<i32, 8> p_cont_85702;
    bool _85687;
    i32 _85710;
    {
        p_loop_85686 = 0;
        goto loop_85684;
    }
loop_85684: {
        loop_85686 = p_loop_85686;
        _85687 = (loop_85686 < 2048);
        if (_85687) goto branch_true_85688; else goto branch_false_85716;
    }
branch_false_85716: {
        return;
    }
branch_true_85688: {
        int i85689;
        for (i85689 = 0; i85689 < 32; i85689++)
        chess_prepare_for_pipelining {
            p_for_body_85699 = i85689;
            goto for_body_85697;
            pipeline_continue_85705: continue;
        }
        goto cont_85708;
    }
for_body_85697: {
        for_body_85699 = p_for_body_85699;
        cont_85702 = window_readincr_v<8>(_73903_85682);
        p_cont_85702 = cont_85702;
        goto cont_85700;
    }
cont_85700: {
        cont_85702 = p_cont_85702;
        window_writeincr(_73903_85683, cont_85702);
        goto continue_wrapper_85703;
    }
continue_wrapper_85703: {
        goto pipeline_continue_85705;
    }
cont_85708: {
        _85710 = (1 + loop_85686);
        p_loop_85686 = _85710;
        goto loop_85684;
    }
}

void _73515(input_window<channel8_i32_30>* __restrict _73515_85402, output_window<channel8_i32_30>* __restrict _73515_85403) {
    i32   loop_85406;
    i32 p_loop_85406;
    i32   for_body_85419;
    i32 p_for_body_85419;
    aie::vector<i32, 8>   cont_85422;
    aie::vector<i32, 8> p_cont_85422;
    aie::accum<i64, 8>   cont_85430;
    aie::accum<i64, 8> p_cont_85430;
    aie::vector<i32, 8>   cont_85440;
    aie::vector<i32, 8> p_cont_85440;
    bool _85407;
    i32 _85448;
    {
        p_loop_85406 = 0;
        goto loop_85404;
    }
loop_85404: {
        loop_85406 = p_loop_85406;
        _85407 = (loop_85406 < 2048);
        if (_85407) goto branch_true_85408; else goto branch_false_85456;
    }
branch_false_85456: {
        return;
    }
branch_true_85408: {
        int i85409;
        for (i85409 = 0; i85409 < 32; i85409++)
        chess_prepare_for_pipelining {
            p_for_body_85419 = i85409;
            goto for_body_85417;
            pipeline_continue_85443: continue;
        }
        goto cont_85446;
    }
for_body_85417: {
        for_body_85419 = p_for_body_85419;
        cont_85422 = window_readincr_v<8>(_73515_85402);
        p_cont_85422 = cont_85422;
        goto cont_85420;
    }
cont_85420: {
        cont_85422 = p_cont_85422;
        cont_85430 = aie::mul(cont_85422, cont_85422);
        p_cont_85430 = cont_85430;
        goto cont_85428;
    }
cont_85428: {
        cont_85430 = p_cont_85430;
        cont_85440 = srs(cont_85430, 1);
        p_cont_85440 = cont_85440;
        goto cont_85438;
    }
cont_85438: {
        cont_85440 = p_cont_85440;
        window_writeincr(_73515_85403, cont_85440);
        goto continue_wrapper_85441;
    }
continue_wrapper_85441: {
        goto pipeline_continue_85443;
    }
cont_85446: {
        _85448 = (1 + loop_85406);
        p_loop_85406 = _85448;
        goto loop_85404;
    }
}

void _73648(input_window<channel8_i32_30>* __restrict _73648_85510, output_window<channel8_i32_30>* __restrict _73648_85511) {
    i32   loop_85514;
    i32 p_loop_85514;
    i32   for_body_85527;
    i32 p_for_body_85527;
    aie::vector<i32, 8>   cont_85530;
    aie::vector<i32, 8> p_cont_85530;
    bool _85515;
    i32 _85538;
    {
        p_loop_85514 = 0;
        goto loop_85512;
    }
loop_85512: {
        loop_85514 = p_loop_85514;
        _85515 = (loop_85514 < 2048);
        if (_85515) goto branch_true_85516; else goto branch_false_85544;
    }
branch_false_85544: {
        return;
    }
branch_true_85516: {
        int i85517;
        for (i85517 = 0; i85517 < 32; i85517++)
        chess_prepare_for_pipelining {
            p_for_body_85527 = i85517;
            goto for_body_85525;
            pipeline_continue_85533: continue;
        }
        goto cont_85536;
    }
for_body_85525: {
        for_body_85527 = p_for_body_85527;
        cont_85530 = window_readincr_v<8>(_73648_85510);
        p_cont_85530 = cont_85530;
        goto cont_85528;
    }
cont_85528: {
        cont_85530 = p_cont_85530;
        window_writeincr(_73648_85511, cont_85530);
        goto continue_wrapper_85531;
    }
continue_wrapper_85531: {
        goto pipeline_continue_85533;
    }
cont_85536: {
        _85538 = (1 + loop_85514);
        p_loop_85514 = _85538;
        goto loop_85512;
    }
}

void _73750(input_window<channel8_i32_30>* __restrict _73750_85553, output_window<channel8_i32_30>* __restrict _73750_85554) {
    i32   loop_85557;
    i32 p_loop_85557;
    i32   for_body_85570;
    i32 p_for_body_85570;
    aie::vector<i32, 8>   cont_85573;
    aie::vector<i32, 8> p_cont_85573;
    bool _85558;
    i32 _85581;
    {
        p_loop_85557 = 0;
        goto loop_85555;
    }
loop_85555: {
        loop_85557 = p_loop_85557;
        _85558 = (loop_85557 < 2048);
        if (_85558) goto branch_true_85559; else goto branch_false_85587;
    }
branch_false_85587: {
        return;
    }
branch_true_85559: {
        int i85560;
        for (i85560 = 0; i85560 < 32; i85560++)
        chess_prepare_for_pipelining {
            p_for_body_85570 = i85560;
            goto for_body_85568;
            pipeline_continue_85576: continue;
        }
        goto cont_85579;
    }
for_body_85568: {
        for_body_85570 = p_for_body_85570;
        cont_85573 = window_readincr_v<8>(_73750_85553);
        p_cont_85573 = cont_85573;
        goto cont_85571;
    }
cont_85571: {
        cont_85573 = p_cont_85573;
        window_writeincr(_73750_85554, cont_85573);
        goto continue_wrapper_85574;
    }
continue_wrapper_85574: {
        goto pipeline_continue_85576;
    }
cont_85579: {
        _85581 = (1 + loop_85557);
        p_loop_85557 = _85581;
        goto loop_85555;
    }
}


    
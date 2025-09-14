
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

void _78034(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row0_91440  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row1_91447  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row2_91452  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });

void _78034(input_window<channel8_i32_30>* __restrict _78034_91228, output_window<channel8_i32_30>* __restrict _78034_91229) {
    i32*   cont_91242;
    i32* p_cont_91242;
    i32*   cont_91245;
    i32* p_cont_91245;
    i32   for_body_91266;
    i32 p_for_body_91266;
    i32*   if_join_91272;
    i32* p_if_join_91272;
    i32   for_body_91284;
    i32 p_for_body_91284;
    aie::vector<i32, 8>   cont_91293;
    aie::vector<i32, 8> p_cont_91293;
    i32   loop_91327;
    i32 p_loop_91327;
    i32   loop_91328;
    i32 p_loop_91328;
    i32   loop_91329;
    i32 p_loop_91329;
    i32*   if_join_91337;
    i32* p_if_join_91337;
    i32*   if_join_91343;
    i32* p_if_join_91343;
    i32   for_body_91363;
    i32 p_for_body_91363;
    aie::vector<i32, 8>   cont_91366;
    aie::vector<i32, 8> p_cont_91366;
    aie::vector<i32, 8>   cont_91401;
    aie::vector<i32, 8> p_cont_91401;
    aie::vector<i32, 8>   cont_91404;
    aie::vector<i32, 8> p_cont_91404;
    aie::vector<i32, 8>   cont_91407;
    aie::vector<i32, 8> p_cont_91407;
    aie::vector<i32, 8>   cont_91415;
    aie::vector<i32, 8> p_cont_91415;
    aie::vector<i32, 8>   cont_91418;
    aie::vector<i32, 8> p_cont_91418;
    aie::vector<i32, 8>   cont_91421;
    aie::vector<i32, 8> p_cont_91421;
    i32   for_body_91432;
    i32 p_for_body_91432;
    aie::vector<i32, 8>   cont_91444;
    aie::vector<i32, 8> p_cont_91444;
    aie::vector<i32, 8>   cont_91451;
    aie::vector<i32, 8> p_cont_91451;
    aie::vector<i32, 8>   cont_91456;
    aie::vector<i32, 8> p_cont_91456;
    aie::vector<i32, 8>   cont_91469;
    aie::vector<i32, 8> p_cont_91469;
    aie::vector<i32, 8>   cont_91481;
    aie::vector<i32, 8> p_cont_91481;
    aie::vector<i32, 8>   cont_91484;
    aie::vector<i32, 8> p_cont_91484;
    aie::vector<i32, 8>   cont_91494;
    aie::vector<i32, 8> p_cont_91494;
    aie::vector<i32, 8>   cont_91506;
    aie::vector<i32, 8> p_cont_91506;
    aie::accum<u64, 8>   cont_91520;
    aie::accum<u64, 8> p_cont_91520;
    aie::vector<i32, 8>   cont_91536;
    aie::vector<i32, 8> p_cont_91536;
    aie::vector<i32, 8>   cont_91544;
    aie::vector<i32, 8> p_cont_91544;
    aie::accum<u64, 8>   cont_91564;
    aie::accum<u64, 8> p_cont_91564;
    aie::vector<i32, 8>   cont_91577;
    aie::vector<i32, 8> p_cont_91577;
    aie::vector<i32, 8>   cont_91586;
    aie::vector<i32, 8> p_cont_91586;
    aie::accum<u64, 8>   cont_91597;
    aie::accum<u64, 8> p_cont_91597;
    aie::vector<i32, 8>   cont_91607;
    aie::vector<i32, 8> p_cont_91607;
    i32 cont_91233_reserved[3072];
    i32 cont_91240_reserved[3072];
    bool use_alt_91259_slot;
    bool* use_alt_91259 = &use_alt_91259_slot;
    bool _91267;
    bool _91268;
    i32 _91304;
    i32 _91301;
    i32 _91302;
    i32 idx_91305;
    i32* _91306;
    bool _91317;
    bool _91320;
    bool _91321;
    aie::vector<i32, 8> y_91354_slot;
    aie::vector<i32, 8>* y_91354 = &y_91354_slot;
    bool _91330;
    bool _91332;
    bool _91333;
    bool _91338;
    bool _91339;
    aie::vector<i32, 8> _91355;
    aie::vector<i32, 8> _91357;
    aie::vector<i32, 8> _91359;
    aie::vector<i32, 8> _91367;
    i32 _91373;
    aie::vector<i32, 8> _91369;
    i32 _91370;
    i32 _91371;
    i32 _91372;
    i32 widx_91374;
    i32* _91375;
    aie::vector<i32, 8> line0_idx_91385_slot;
    aie::vector<i32, 8>* line0_idx_91385 = &line0_idx_91385_slot;
    i32 line1_idx_91390_slot;
    i32* line1_idx_91390 = &line1_idx_91390_slot;
    i32 line2_idx_91395_slot;
    i32* line2_idx_91395 = &line2_idx_91395_slot;
    aie::vector<i32, 8> data_slice2_91411_slot;
    aie::vector<i32, 8>* data_slice2_91411 = &data_slice2_91411_slot;
    i32* _91441;
    i32* _91448;
    i32* _91453;
    aie::vector<i32, 8> _91457;
    aie::vector<i32, 8> _91463;
    aie::vector<i32, 8> _91459;
    i32 _91460;
    i32 _91461;
    i32 line0_seg_91462;
    i32 _91464;
    i32* _91465;
    i32* _91466;
    aie::vector<i32, 8> _91474;
    aie::vector<i32, 8> _91476;
    i32 _91477;
    aie::accum<u64, 8> acc_91522_slot;
    aie::accum<u64, 8>* acc_91522 = &acc_91522_slot;
    i32 _91524;
    i32 _91530;
    aie::vector<i32, 8> _91526;
    i32 _91527;
    i32 _91528;
    i32 line1_seg_91529;
    i32 _91531;
    i32* _91532;
    i32* _91533;
    i32 _91537;
    i32 _91539;
    i32 _91540;
    aie::accum<u64, 8> _91559;
    aie::accum<u64, 8> _91561;
    i32 _91566;
    i32 _91571;
    aie::vector<i32, 8> _91568;
    i32 _91569;
    i32 line2_seg_91570;
    i32 _91572;
    i32* _91573;
    i32* _91574;
    i32 _91579;
    i32 _91581;
    i32 _91582;
    aie::accum<u64, 8> _91589;
    aie::vector<i32, 8> _91591;
    aie::accum<u64, 8> _91593;
    aie::vector<i32, 8> _91594;
    aie::vector<i32, 8> _91625;
    aie::vector<i32, 8> _91627;
    i32 _91628;
    bool _91630;
    bool _91632;
    bool _91633;
    i32 _91635;
    {
        _91441 = (&(&g_laplace_coeffs_row0_91440)->e[0]);
        _91448 = (&(&g_laplace_coeffs_row1_91447)->e[0]);
        _91453 = (&(&g_laplace_coeffs_row2_91452)->e[0]);
        set_sat();
        goto cont_91233;
    }
cont_91233: {
        p_cont_91242 = cont_91233_reserved;
        goto cont_91240;
    }
cont_91240: {
        cont_91242 = p_cont_91242;
        p_cont_91245 = cont_91240_reserved;
        goto cont_91243;
    }
cont_91243: {
        cont_91245 = p_cont_91245;
        (*use_alt_91259 = false);
        int i91246;
        for (i91246 = 0; i91246 < 2; i91246++)
        chess_prepare_for_pipelining {
            p_for_body_91266 = i91246;
            goto for_body_91264;
            pipeline_continue_91314: continue;
        }
        goto for_break_91323;
    }
for_body_91264: {
        for_body_91266 = p_for_body_91266;
        _91267 = *use_alt_91259;
        _91268 = (_91267);
        if (_91268) goto branch_true_91269; else goto branch_false_91693;
    }
branch_false_91693: {
        p_if_join_91272 = cont_91242;
        goto if_join_91270;
    }
branch_true_91269: {
        p_if_join_91272 = cont_91245;
        goto if_join_91270;
    }
if_join_91270: {
        if_join_91272 = p_if_join_91272;
        int i91273;
        for (i91273 = 0; i91273 < 128; i91273++)
        chess_prepare_for_pipelining {
            p_for_body_91284 = i91273;
            goto for_body_91282;
            pipeline_continue_91309: continue;
        }
        goto for_break_91312;
    }
for_body_91282: {
        for_body_91284 = p_for_body_91284;
        cont_91293 = window_readincr_v<8>(_78034_91228);
        p_cont_91293 = cont_91293;
        goto cont_91291;
    }
cont_91291: {
        cont_91293 = p_cont_91293;
        _91304 = (8 * for_body_91284);
        _91301 = (for_body_91266 % 3);
        _91302 = (1024 * _91301);
        idx_91305 = (_91302 + _91304);
        _91306 = (&(if_join_91272)[idx_91305]);
        aie::store_v(_91306, cont_91293);
        goto continue_wrapper_91307;
    }
continue_wrapper_91307: {
        goto pipeline_continue_91309;
    }
for_break_91312: {
        _91317 = *use_alt_91259;
        _91320 = (_91317);
        _91321 = (true ^ _91320);
        (*use_alt_91259 = _91321);
        goto pipeline_continue_91314;
    }
for_break_91323: {
        (*y_91354 = 0);
        p_loop_91327 = 0;
        p_loop_91328 = 1022;
        p_loop_91329 = 1;
        goto loop_91325;
    }
loop_91325: {
        loop_91327 = p_loop_91327;
        loop_91328 = p_loop_91328;
        loop_91329 = p_loop_91329;
        _91330 = (loop_91327 < loop_91328);
        if (_91330) goto branch_true_91331; else goto branch_false_91679;
    }
branch_false_91679: {
        return;
    }
branch_true_91331: {
        _91332 = *use_alt_91259;
        _91333 = (_91332);
        if (_91333) goto branch_true_91334; else goto branch_false_91676;
    }
branch_false_91676: {
        p_if_join_91337 = cont_91242;
        goto if_join_91335;
    }
branch_true_91334: {
        p_if_join_91337 = cont_91245;
        goto if_join_91335;
    }
if_join_91335: {
        if_join_91337 = p_if_join_91337;
        _91338 = *use_alt_91259;
        _91339 = (_91338);
        if (_91339) goto branch_true_91340; else goto branch_false_91671;
    }
branch_false_91671: {
        p_if_join_91343 = cont_91245;
        goto if_join_91341;
    }
branch_true_91340: {
        p_if_join_91343 = cont_91242;
        goto if_join_91341;
    }
if_join_91341: {
        if_join_91343 = p_if_join_91343;
        _91355 = *y_91354;
        _91357 = *y_91354;
        _91359 = *y_91354;
        int i91344;
        for (i91344 = 0; i91344 < 128; i91344++)
        chess_prepare_for_pipelining {
            p_for_body_91363 = i91344;
            goto for_body_91361;
            pipeline_continue_91620: continue;
        }
        goto for_break_91623;
    }
for_body_91361: {
        for_body_91363 = p_for_body_91363;
        cont_91366 = window_readincr_v<8>(_78034_91228);
        p_cont_91366 = cont_91366;
        goto cont_91364;
    }
cont_91364: {
        cont_91366 = p_cont_91366;
        _91367 = *y_91354;
        _91373 = (8 * for_body_91363);
        _91369 = (_91367);
        _91370 = (3 + _91369);
        _91371 = (_91370 % 3);
        _91372 = (1024 * _91371);
        widx_91374 = (_91372 + _91373);
        _91375 = (&(if_join_91343)[widx_91374]);
        aie::store_v(_91375, cont_91366);
        goto cont_91376;
    }
cont_91376: {
        (*line0_idx_91385 = 0);
        (*line1_idx_91390 = 0);
        (*line2_idx_91395 = 0);
        cont_91401 = aie::zeros<i32, 8>();
        p_cont_91401 = cont_91401;
        goto cont_91399;
    }
cont_91399: {
        cont_91401 = p_cont_91401;
        cont_91404 = aie::zeros<i32, 8>();
        p_cont_91404 = cont_91404;
        goto cont_91402;
    }
cont_91402: {
        cont_91404 = p_cont_91404;
        cont_91407 = aie::zeros<i32, 8>();
        p_cont_91407 = cont_91407;
        goto cont_91405;
    }
cont_91405: {
        cont_91407 = p_cont_91407;
        (*data_slice2_91411 = cont_91407);
        cont_91415 = aie::zeros<i32, 8>();
        p_cont_91415 = cont_91415;
        goto cont_91413;
    }
cont_91413: {
        cont_91415 = p_cont_91415;
        cont_91418 = aie::zeros<i32, 8>();
        p_cont_91418 = cont_91418;
        goto cont_91416;
    }
cont_91416: {
        cont_91418 = p_cont_91418;
        cont_91421 = aie::zeros<i32, 8>();
        p_cont_91421 = cont_91421;
        goto cont_91419;
    }
cont_91419: {
        cont_91421 = p_cont_91421;
        int i91422;
        for (i91422 = 0; i91422 < 128; i91422++)
        chess_prepare_for_pipelining {
            p_for_body_91432 = i91422;
            goto for_body_91430;
            pipeline_continue_91615: continue;
        }
        goto continue_wrapper_91618;
    }
for_body_91430: {
        for_body_91432 = p_for_body_91432;
        cont_91444 = aie::load_v<8>(_91441);
        p_cont_91444 = cont_91444;
        goto cont_91442;
    }
cont_91442: {
        cont_91444 = p_cont_91444;
        cont_91451 = aie::load_v<8>(_91448);
        p_cont_91451 = cont_91451;
        goto cont_91449;
    }
cont_91449: {
        cont_91451 = p_cont_91451;
        cont_91456 = aie::load_v<8>(_91453);
        p_cont_91456 = cont_91456;
        goto cont_91454;
    }
cont_91454: {
        cont_91456 = p_cont_91456;
        _91457 = *line0_idx_91385;
        _91463 = (_91457);
        _91459 = (_91355);
        _91460 = (1 + _91459);
        _91461 = (_91460 % 3);
        line0_seg_91462 = (1024 * _91461);
        _91464 = (line0_seg_91462 + _91463);
        _91465 = (&(if_join_91337)[_91464]);
        memcpy(&_91466, &_91465, sizeof(_91466));
        cont_91469 = aie::load_v<8>(_91466);
        p_cont_91469 = cont_91469;
        goto cont_91467;
    }
cont_91467: {
        cont_91469 = p_cont_91469;
        _91474 = *line0_idx_91385;
        _91476 = (_91474);
        _91477 = (8 + _91476);
        (*line0_idx_91385 = _91477);
        cont_91481 =  (cont_91469);
        p_cont_91481 = cont_91481;
        goto cont_91479;
    }
cont_91479: {
        cont_91481 = p_cont_91481;
        cont_91484 =  (cont_91415);
        p_cont_91484 = cont_91484;
        goto cont_91482;
    }
cont_91482: {
        cont_91484 = p_cont_91484;
        cont_91494 = aie::shuffle_up_fill(cont_91481, cont_91484, 1);
        p_cont_91494 = cont_91494;
        goto cont_91492;
    }
cont_91492: {
        cont_91494 = p_cont_91494;
        cont_91415.insert(0, cont_91494);
        goto cont_91502;
    }
cont_91502: {
        cont_91506 =  (cont_91494);
        p_cont_91506 = cont_91506;
        goto cont_91504;
    }
cont_91504: {
        cont_91506 = p_cont_91506;
        cont_91520 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_91444, 0, cont_91506, 0);
        p_cont_91520 = cont_91520;
        goto cont_91518;
    }
cont_91518: {
        cont_91520 = p_cont_91520;
        (*acc_91522 = cont_91520);
        _91524 = *line1_idx_91390;
        _91530 = (_91524);
        _91526 = (_91357);
        _91527 = (2 + _91526);
        _91528 = (_91527 % 3);
        line1_seg_91529 = (1024 * _91528);
        _91531 = (line1_seg_91529 + _91530);
        _91532 = (&(if_join_91337)[_91531]);
        memcpy(&_91533, &_91532, sizeof(_91533));
        cont_91536 = aie::load_v<8>(_91533);
        p_cont_91536 = cont_91536;
        goto cont_91534;
    }
cont_91534: {
        cont_91536 = p_cont_91536;
        _91537 = *line1_idx_91390;
        _91539 = (_91537);
        _91540 = (8 + _91539);
        (*line1_idx_91390 = _91540);
        cont_91544 = aie::shuffle_up_fill(cont_91536, cont_91418, 1);
        p_cont_91544 = cont_91544;
        goto cont_91542;
    }
cont_91542: {
        cont_91544 = p_cont_91544;
        cont_91418.insert(0, cont_91544);
        goto cont_91545;
    }
cont_91545: {
        _91559 = *acc_91522;
        _91561 = (_91559);
        cont_91564 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_91561, cont_91451, 0, cont_91544, 0);
        p_cont_91564 = cont_91564;
        goto cont_91562;
    }
cont_91562: {
        cont_91564 = p_cont_91564;
        (*acc_91522 = cont_91564);
        _91566 = *line2_idx_91395;
        _91571 = (_91566);
        _91568 = (_91359);
        _91569 = (_91568 % 3);
        line2_seg_91570 = (1024 * _91569);
        _91572 = (line2_seg_91570 + _91571);
        _91573 = (&(if_join_91337)[_91572]);
        memcpy(&_91574, &_91573, sizeof(_91574));
        cont_91577 = aie::load_v<8>(_91574);
        p_cont_91577 = cont_91577;
        goto cont_91575;
    }
cont_91575: {
        cont_91577 = p_cont_91577;
        (*data_slice2_91411 = cont_91577);
        _91579 = *line2_idx_91395;
        _91581 = (_91579);
        _91582 = (8 + _91581);
        (*line2_idx_91395 = _91582);
        cont_91586 = aie::shuffle_up_fill(cont_91577, cont_91421, 1);
        p_cont_91586 = cont_91586;
        goto cont_91584;
    }
cont_91584: {
        cont_91586 = p_cont_91586;
        cont_91421.insert(0, cont_91586);
        goto cont_91587;
    }
cont_91587: {
        _91589 = *acc_91522;
        _91591 = *data_slice2_91411;
        _91593 = (_91589);
        _91594 = (_91591);
        cont_91597 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_91593, cont_91456, 0, _91594, 0);
        p_cont_91597 = cont_91597;
        goto cont_91595;
    }
cont_91595: {
        cont_91597 = p_cont_91597;
        (*acc_91522 = cont_91597);
        cont_91607 = srs(cont_91597, 0);
        p_cont_91607 = cont_91607;
        goto cont_91605;
    }
cont_91605: {
        cont_91607 = p_cont_91607;
        window_writeincr(_78034_91229, cont_91607);
        goto continue_wrapper_91613;
    }
continue_wrapper_91613: {
        goto pipeline_continue_91615;
    }
continue_wrapper_91618: {
        goto pipeline_continue_91620;
    }
for_break_91623: {
        _91625 = *y_91354;
        _91627 = (_91625);
        _91628 = (1 + _91627);
        (*y_91354 = _91628);
        _91630 = *use_alt_91259;
        _91632 = (_91630);
        _91633 = (true ^ _91632);
        (*use_alt_91259 = _91633);
        _91635 = (loop_91327 + loop_91329);
        p_loop_91327 = _91635;
        p_loop_91328 = loop_91328;
        p_loop_91329 = loop_91329;
        goto loop_91325;
    }
}


    

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

void _102110(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
void _102505(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
i32 g_lbuf_cnt_123278  = 0;
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row0_123378  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row1_123383  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row2_123388  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
i32 g_lbuf_cnt_122898  = 0;
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row0_123027  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row1_123034  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row2_123039  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });

void _102505(input_window<channel8_i32_30>* __restrict _102505_123257, output_window<channel8_i32_30>* __restrict _102505_123258) {
    i32*   cont_123263;
    i32* p_cont_123263;
    i32*   cont_123266;
    i32* p_cont_123266;
    i32   for_body_123277;
    i32 p_for_body_123277;
    i32*   if_join_123286;
    i32* p_if_join_123286;
    i32*   if_join_123290;
    i32* p_if_join_123290;
    i32   for_body_123303;
    i32 p_for_body_123303;
    aie::vector<i32, 8>   cont_123306;
    aie::vector<i32, 8> p_cont_123306;
    aie::vector<i32, 8>   cont_123346;
    aie::vector<i32, 8> p_cont_123346;
    aie::vector<i32, 8>   cont_123349;
    aie::vector<i32, 8> p_cont_123349;
    aie::vector<i32, 8>   cont_123352;
    aie::vector<i32, 8> p_cont_123352;
    aie::vector<i32, 8>   cont_123360;
    aie::vector<i32, 8> p_cont_123360;
    aie::vector<i32, 8>   cont_123363;
    aie::vector<i32, 8> p_cont_123363;
    aie::vector<i32, 8>   cont_123366;
    aie::vector<i32, 8> p_cont_123366;
    i32   for_body_123377;
    i32 p_for_body_123377;
    aie::vector<i32, 8>   cont_123382;
    aie::vector<i32, 8> p_cont_123382;
    aie::vector<i32, 8>   cont_123387;
    aie::vector<i32, 8> p_cont_123387;
    aie::vector<i32, 8>   cont_123392;
    aie::vector<i32, 8> p_cont_123392;
    aie::vector<i32, 8>   cont_123405;
    aie::vector<i32, 8> p_cont_123405;
    aie::vector<i32, 8>   cont_123413;
    aie::vector<i32, 8> p_cont_123413;
    aie::vector<i32, 8>   cont_123416;
    aie::vector<i32, 8> p_cont_123416;
    aie::vector<i32, 8>   cont_123419;
    aie::vector<i32, 8> p_cont_123419;
    aie::vector<i32, 8>   cont_123424;
    aie::vector<i32, 8> p_cont_123424;
    aie::accum<u64, 8>   cont_123427;
    aie::accum<u64, 8> p_cont_123427;
    aie::vector<i32, 8>   cont_123442;
    aie::vector<i32, 8> p_cont_123442;
    aie::vector<i32, 8>   cont_123450;
    aie::vector<i32, 8> p_cont_123450;
    aie::accum<u64, 8>   cont_123458;
    aie::accum<u64, 8> p_cont_123458;
    aie::vector<i32, 8>   cont_123470;
    aie::vector<i32, 8> p_cont_123470;
    aie::vector<i32, 8>   cont_123479;
    aie::vector<i32, 8> p_cont_123479;
    aie::accum<u64, 8>   cont_123490;
    aie::accum<u64, 8> p_cont_123490;
    aie::vector<i32, 8>   cont_123494;
    aie::vector<i32, 8> p_cont_123494;
    i32 cont_123259_reserved[3072];
    i32 cont_123261_reserved[3072];
    i32 _123279;
    i32 _123280;
    i32 _123281;
    bool use_lbuff_p_123282;
    i32 _123299;
    i32 _123310;
    i32 _123307;
    i32 lbuf_seg_123308;
    i32 _123309;
    i32 lbuff_idx_123311;
    i32* _123312;
    i32 _123320;
    i32 _123322;
    i32 _123324;
    i32 _123325;
    i32 line0_idx_123330_slot;
    i32* line0_idx_123330 = &line0_idx_123330_slot;
    i32 line1_idx_123335_slot;
    i32* line1_idx_123335 = &line1_idx_123335_slot;
    i32 line2_idx_123340_slot;
    i32* line2_idx_123340 = &line2_idx_123340_slot;
    aie::vector<i32, 8> data_slice2_123356_slot;
    aie::vector<i32, 8>* data_slice2_123356 = &data_slice2_123356_slot;
    i32* _123379;
    i32* _123384;
    i32* _123389;
    i32 _123393;
    i32 _123399;
    i32 cur_lbuf_cnt_123395;
    i32 _123396;
    i32 _123397;
    i32 line0_seg_123398;
    i32 _123400;
    i32* _123401;
    i32* _123402;
    i32 _123406;
    i32 _123408;
    i32 _123409;
    aie::accum<u64, 8> acc_123429_slot;
    aie::accum<u64, 8>* acc_123429 = &acc_123429_slot;
    i32 _123431;
    i32 _123436;
    i32 _123433;
    i32 _123434;
    i32 line1_seg_123435;
    i32 _123437;
    i32* _123438;
    i32* _123439;
    i32 _123443;
    i32 _123445;
    i32 _123446;
    aie::accum<u64, 8> _123453;
    aie::accum<u64, 8> _123455;
    i32 _123460;
    i32 _123464;
    i32 _123462;
    i32 line2_seg_123463;
    i32 _123465;
    i32* _123466;
    i32* _123467;
    i32 _123472;
    i32 _123474;
    i32 _123475;
    aie::accum<u64, 8> _123482;
    aie::vector<i32, 8> _123484;
    aie::accum<u64, 8> _123486;
    aie::vector<i32, 8> _123487;
    {
        _123379 = (&(&g_laplace_coeffs_row0_123378)->e[0]);
        _123384 = (&(&g_laplace_coeffs_row1_123383)->e[0]);
        _123389 = (&(&g_laplace_coeffs_row2_123388)->e[0]);
        set_sat();
        goto cont_123259;
    }
cont_123259: {
        p_cont_123263 = cont_123259_reserved;
        goto cont_123261;
    }
cont_123261: {
        cont_123263 = p_cont_123263;
        p_cont_123266 = cont_123261_reserved;
        goto cont_123264;
    }
cont_123264: {
        cont_123266 = p_cont_123266;
        int i123267;
        for (i123267 = 0; i123267 < 511; i123267++)
        chess_prepare_for_pipelining {
            p_for_body_123277 = i123267;
            goto for_body_123275;
            pipeline_continue_123502: continue;
        }
        goto _102505_123566;
    }
for_body_123275: {
        for_body_123277 = p_for_body_123277;
        _123279 = *&g_lbuf_cnt_123278;
        _123280 = (_123279);
        _123281 = (_123280 % 2);
        use_lbuff_p_123282 = (_123281 == 1);
        if (use_lbuff_p_123282) goto branch_true_123283; else goto branch_false_123544;
    }
branch_false_123544: {
        p_if_join_123286 = cont_123263;
        goto if_join_123284;
    }
branch_true_123283: {
        p_if_join_123286 = cont_123266;
        goto if_join_123284;
    }
if_join_123284: {
        if_join_123286 = p_if_join_123286;
        if (use_lbuff_p_123282) goto branch_true_123287; else goto branch_false_123539;
    }
branch_false_123539: {
        p_if_join_123290 = cont_123266;
        goto if_join_123288;
    }
branch_true_123287: {
        p_if_join_123290 = cont_123263;
        goto if_join_123288;
    }
if_join_123288: {
        if_join_123290 = p_if_join_123290;
        _123299 = *&g_lbuf_cnt_123278;
        int i123291;
        for (i123291 = 0; i123291 < 128; i123291++)
        chess_prepare_for_pipelining {
            p_for_body_123303 = i123291;
            goto for_body_123301;
            pipeline_continue_123315: continue;
        }
        goto for_break_123318;
    }
for_body_123301: {
        for_body_123303 = p_for_body_123303;
        cont_123306 = window_readincr_v<8>(_102505_123257);
        p_cont_123306 = cont_123306;
        goto cont_123304;
    }
cont_123304: {
        cont_123306 = p_cont_123306;
        _123310 = (8 * for_body_123303);
        _123307 = (_123299);
        lbuf_seg_123308 = (_123307 % 3);
        _123309 = (1024 * lbuf_seg_123308);
        lbuff_idx_123311 = (_123309 + _123310);
        _123312 = (&(if_join_123286)[lbuff_idx_123311]);
        aie::store_v(_123312, cont_123306);
        goto continue_wrapper_123313;
    }
continue_wrapper_123313: {
        goto pipeline_continue_123315;
    }
for_break_123318: {
        _123320 = *&g_lbuf_cnt_123278;
        _123322 = *&g_lbuf_cnt_123278;
        _123324 = (_123322);
        _123325 = (1 + _123324);
        (*&g_lbuf_cnt_123278 = _123325);
        (*line0_idx_123330 = 0);
        (*line1_idx_123335 = 0);
        (*line2_idx_123340 = 0);
        cont_123346 = aie::zeros<i32, 8>();
        p_cont_123346 = cont_123346;
        goto cont_123344;
    }
cont_123344: {
        cont_123346 = p_cont_123346;
        cont_123349 = aie::zeros<i32, 8>();
        p_cont_123349 = cont_123349;
        goto cont_123347;
    }
cont_123347: {
        cont_123349 = p_cont_123349;
        cont_123352 = aie::zeros<i32, 8>();
        p_cont_123352 = cont_123352;
        goto cont_123350;
    }
cont_123350: {
        cont_123352 = p_cont_123352;
        (*data_slice2_123356 = cont_123352);
        cont_123360 = aie::zeros<i32, 8>();
        p_cont_123360 = cont_123360;
        goto cont_123358;
    }
cont_123358: {
        cont_123360 = p_cont_123360;
        cont_123363 = aie::zeros<i32, 8>();
        p_cont_123363 = cont_123363;
        goto cont_123361;
    }
cont_123361: {
        cont_123363 = p_cont_123363;
        cont_123366 = aie::zeros<i32, 8>();
        p_cont_123366 = cont_123366;
        goto cont_123364;
    }
cont_123364: {
        cont_123366 = p_cont_123366;
        int i123367;
        for (i123367 = 0; i123367 < 128; i123367++)
        chess_prepare_for_pipelining {
            p_for_body_123377 = i123367;
            goto for_body_123375;
            pipeline_continue_123497: continue;
        }
        goto continue_wrapper_123500;
    }
for_body_123375: {
        for_body_123377 = p_for_body_123377;
        cont_123382 = aie::load_v<8>(_123379);
        p_cont_123382 = cont_123382;
        goto cont_123380;
    }
cont_123380: {
        cont_123382 = p_cont_123382;
        cont_123387 = aie::load_v<8>(_123384);
        p_cont_123387 = cont_123387;
        goto cont_123385;
    }
cont_123385: {
        cont_123387 = p_cont_123387;
        cont_123392 = aie::load_v<8>(_123389);
        p_cont_123392 = cont_123392;
        goto cont_123390;
    }
cont_123390: {
        cont_123392 = p_cont_123392;
        _123393 = *line0_idx_123330;
        _123399 = (_123393);
        cur_lbuf_cnt_123395 = (_123320);
        _123396 = (1 + cur_lbuf_cnt_123395);
        _123397 = (_123396 % 3);
        line0_seg_123398 = (1024 * _123397);
        _123400 = (line0_seg_123398 + _123399);
        _123401 = (&(if_join_123290)[_123400]);
        memcpy(&_123402, &_123401, sizeof(_123402));
        cont_123405 = aie::load_v<8>(_123402);
        p_cont_123405 = cont_123405;
        goto cont_123403;
    }
cont_123403: {
        cont_123405 = p_cont_123405;
        _123406 = *line0_idx_123330;
        _123408 = (_123406);
        _123409 = (8 + _123408);
        (*line0_idx_123330 = _123409);
        cont_123413 =  (cont_123405);
        p_cont_123413 = cont_123413;
        goto cont_123411;
    }
cont_123411: {
        cont_123413 = p_cont_123413;
        cont_123416 =  (cont_123360);
        p_cont_123416 = cont_123416;
        goto cont_123414;
    }
cont_123414: {
        cont_123416 = p_cont_123416;
        cont_123419 = aie::shuffle_up_fill(cont_123413, cont_123416, 1);
        p_cont_123419 = cont_123419;
        goto cont_123417;
    }
cont_123417: {
        cont_123419 = p_cont_123419;
        cont_123360.insert(0, cont_123419);
        goto cont_123420;
    }
cont_123420: {
        cont_123424 =  (cont_123419);
        p_cont_123424 = cont_123424;
        goto cont_123422;
    }
cont_123422: {
        cont_123424 = p_cont_123424;
        cont_123427 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_123382, 0, cont_123424, 0);
        p_cont_123427 = cont_123427;
        goto cont_123425;
    }
cont_123425: {
        cont_123427 = p_cont_123427;
        (*acc_123429 = cont_123427);
        _123431 = *line1_idx_123335;
        _123436 = (_123431);
        _123433 = (2 + cur_lbuf_cnt_123395);
        _123434 = (_123433 % 3);
        line1_seg_123435 = (1024 * _123434);
        _123437 = (line1_seg_123435 + _123436);
        _123438 = (&(if_join_123290)[_123437]);
        memcpy(&_123439, &_123438, sizeof(_123439));
        cont_123442 = aie::load_v<8>(_123439);
        p_cont_123442 = cont_123442;
        goto cont_123440;
    }
cont_123440: {
        cont_123442 = p_cont_123442;
        _123443 = *line1_idx_123335;
        _123445 = (_123443);
        _123446 = (8 + _123445);
        (*line1_idx_123335 = _123446);
        cont_123450 = aie::shuffle_up_fill(cont_123442, cont_123363, 1);
        p_cont_123450 = cont_123450;
        goto cont_123448;
    }
cont_123448: {
        cont_123450 = p_cont_123450;
        cont_123363.insert(0, cont_123450);
        goto cont_123451;
    }
cont_123451: {
        _123453 = *acc_123429;
        _123455 = (_123453);
        cont_123458 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_123455, cont_123387, 0, cont_123450, 0);
        p_cont_123458 = cont_123458;
        goto cont_123456;
    }
cont_123456: {
        cont_123458 = p_cont_123458;
        (*acc_123429 = cont_123458);
        _123460 = *line2_idx_123340;
        _123464 = (_123460);
        _123462 = (cur_lbuf_cnt_123395 % 3);
        line2_seg_123463 = (1024 * _123462);
        _123465 = (line2_seg_123463 + _123464);
        _123466 = (&(if_join_123290)[_123465]);
        memcpy(&_123467, &_123466, sizeof(_123467));
        cont_123470 = aie::load_v<8>(_123467);
        p_cont_123470 = cont_123470;
        goto cont_123468;
    }
cont_123468: {
        cont_123470 = p_cont_123470;
        (*data_slice2_123356 = cont_123470);
        _123472 = *line2_idx_123340;
        _123474 = (_123472);
        _123475 = (8 + _123474);
        (*line2_idx_123340 = _123475);
        cont_123479 = aie::shuffle_up_fill(cont_123470, cont_123366, 1);
        p_cont_123479 = cont_123479;
        goto cont_123477;
    }
cont_123477: {
        cont_123479 = p_cont_123479;
        cont_123366.insert(0, cont_123479);
        goto cont_123480;
    }
cont_123480: {
        _123482 = *acc_123429;
        _123484 = *data_slice2_123356;
        _123486 = (_123482);
        _123487 = (_123484);
        cont_123490 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_123486, cont_123392, 0, _123487, 0);
        p_cont_123490 = cont_123490;
        goto cont_123488;
    }
cont_123488: {
        cont_123490 = p_cont_123490;
        (*acc_123429 = cont_123490);
        cont_123494 = srs(cont_123490, 0);
        p_cont_123494 = cont_123494;
        goto cont_123492;
    }
cont_123492: {
        cont_123494 = p_cont_123494;
        window_writeincr(_102505_123258, cont_123494);
        goto continue_wrapper_123495;
    }
continue_wrapper_123495: {
        goto pipeline_continue_123497;
    }
continue_wrapper_123500: {
        goto pipeline_continue_123502;
    }
_102505_123566: {
        return;
    }
}

void _102110(input_window<channel8_i32_30>* __restrict _102110_122867, output_window<channel8_i32_30>* __restrict _102110_122868) {
    i32*   cont_122881;
    i32* p_cont_122881;
    i32*   cont_122884;
    i32* p_cont_122884;
    i32   for_body_122897;
    i32 p_for_body_122897;
    i32*   if_join_122909;
    i32* p_if_join_122909;
    i32*   if_join_122913;
    i32* p_if_join_122913;
    i32   for_body_122928;
    i32 p_for_body_122928;
    aie::vector<i32, 8>   cont_122937;
    aie::vector<i32, 8> p_cont_122937;
    aie::vector<i32, 8>   cont_122989;
    aie::vector<i32, 8> p_cont_122989;
    aie::vector<i32, 8>   cont_122992;
    aie::vector<i32, 8> p_cont_122992;
    aie::vector<i32, 8>   cont_122995;
    aie::vector<i32, 8> p_cont_122995;
    aie::vector<i32, 8>   cont_123003;
    aie::vector<i32, 8> p_cont_123003;
    aie::vector<i32, 8>   cont_123006;
    aie::vector<i32, 8> p_cont_123006;
    aie::vector<i32, 8>   cont_123009;
    aie::vector<i32, 8> p_cont_123009;
    i32   for_body_123020;
    i32 p_for_body_123020;
    aie::vector<i32, 8>   cont_123031;
    aie::vector<i32, 8> p_cont_123031;
    aie::vector<i32, 8>   cont_123038;
    aie::vector<i32, 8> p_cont_123038;
    aie::vector<i32, 8>   cont_123043;
    aie::vector<i32, 8> p_cont_123043;
    aie::vector<i32, 8>   cont_123056;
    aie::vector<i32, 8> p_cont_123056;
    aie::vector<i32, 8>   cont_123068;
    aie::vector<i32, 8> p_cont_123068;
    aie::vector<i32, 8>   cont_123071;
    aie::vector<i32, 8> p_cont_123071;
    aie::vector<i32, 8>   cont_123081;
    aie::vector<i32, 8> p_cont_123081;
    aie::vector<i32, 8>   cont_123093;
    aie::vector<i32, 8> p_cont_123093;
    aie::accum<u64, 8>   cont_123107;
    aie::accum<u64, 8> p_cont_123107;
    aie::vector<i32, 8>   cont_123122;
    aie::vector<i32, 8> p_cont_123122;
    aie::vector<i32, 8>   cont_123130;
    aie::vector<i32, 8> p_cont_123130;
    aie::accum<u64, 8>   cont_123150;
    aie::accum<u64, 8> p_cont_123150;
    aie::vector<i32, 8>   cont_123162;
    aie::vector<i32, 8> p_cont_123162;
    aie::vector<i32, 8>   cont_123171;
    aie::vector<i32, 8> p_cont_123171;
    aie::accum<u64, 8>   cont_123182;
    aie::accum<u64, 8> p_cont_123182;
    aie::vector<i32, 8>   cont_123192;
    aie::vector<i32, 8> p_cont_123192;
    i32 cont_122872_reserved[3072];
    i32 cont_122879_reserved[3072];
    i32 _122899;
    i32 _122901;
    i32 _122903;
    bool use_lbuff_p_122905;
    i32 _122922;
    i32 _122949;
    i32 _122944;
    i32 lbuf_seg_122946;
    i32 _122947;
    i32 lbuff_idx_122950;
    i32* _122951;
    i32 _122963;
    i32 _122965;
    i32 _122967;
    i32 _122968;
    i32 line0_idx_122973_slot;
    i32* line0_idx_122973 = &line0_idx_122973_slot;
    i32 line1_idx_122978_slot;
    i32* line1_idx_122978 = &line1_idx_122978_slot;
    i32 line2_idx_122983_slot;
    i32* line2_idx_122983 = &line2_idx_122983_slot;
    aie::vector<i32, 8> data_slice2_122999_slot;
    aie::vector<i32, 8>* data_slice2_122999 = &data_slice2_122999_slot;
    i32* _123028;
    i32* _123035;
    i32* _123040;
    i32 _123044;
    i32 _123050;
    i32 cur_lbuf_cnt_123046;
    i32 _123047;
    i32 _123048;
    i32 line0_seg_123049;
    i32 _123051;
    i32* _123052;
    i32* _123053;
    i32 _123061;
    i32 _123063;
    i32 _123064;
    aie::accum<u64, 8> acc_123109_slot;
    aie::accum<u64, 8>* acc_123109 = &acc_123109_slot;
    i32 _123111;
    i32 _123116;
    i32 _123113;
    i32 _123114;
    i32 line1_seg_123115;
    i32 _123117;
    i32* _123118;
    i32* _123119;
    i32 _123123;
    i32 _123125;
    i32 _123126;
    aie::accum<u64, 8> _123145;
    aie::accum<u64, 8> _123147;
    i32 _123152;
    i32 _123156;
    i32 _123154;
    i32 line2_seg_123155;
    i32 _123157;
    i32* _123158;
    i32* _123159;
    i32 _123164;
    i32 _123166;
    i32 _123167;
    aie::accum<u64, 8> _123174;
    aie::vector<i32, 8> _123176;
    aie::accum<u64, 8> _123178;
    aie::vector<i32, 8> _123179;
    {
        _123028 = (&(&g_laplace_coeffs_row0_123027)->e[0]);
        _123035 = (&(&g_laplace_coeffs_row1_123034)->e[0]);
        _123040 = (&(&g_laplace_coeffs_row2_123039)->e[0]);
        set_sat();
        goto cont_122872;
    }
cont_122872: {
        p_cont_122881 = cont_122872_reserved;
        goto cont_122879;
    }
cont_122879: {
        cont_122881 = p_cont_122881;
        p_cont_122884 = cont_122879_reserved;
        goto cont_122882;
    }
cont_122882: {
        cont_122884 = p_cont_122884;
        int i122885;
        for (i122885 = 0; i122885 < 511; i122885++)
        chess_prepare_for_pipelining {
            p_for_body_122897 = i122885;
            goto for_body_122895;
            pipeline_continue_123205: continue;
        }
        goto _102110_123571;
    }
for_body_122895: {
        for_body_122897 = p_for_body_122897;
        _122899 = *&g_lbuf_cnt_122898;
        _122901 = (_122899);
        _122903 = (_122901 % 2);
        use_lbuff_p_122905 = (_122903 == 1);
        if (use_lbuff_p_122905) goto branch_true_122906; else goto branch_false_123247;
    }
branch_false_123247: {
        p_if_join_122909 = cont_122881;
        goto if_join_122907;
    }
branch_true_122906: {
        p_if_join_122909 = cont_122884;
        goto if_join_122907;
    }
if_join_122907: {
        if_join_122909 = p_if_join_122909;
        if (use_lbuff_p_122905) goto branch_true_122910; else goto branch_false_123242;
    }
branch_false_123242: {
        p_if_join_122913 = cont_122884;
        goto if_join_122911;
    }
branch_true_122910: {
        p_if_join_122913 = cont_122881;
        goto if_join_122911;
    }
if_join_122911: {
        if_join_122913 = p_if_join_122913;
        _122922 = *&g_lbuf_cnt_122898;
        int i122914;
        for (i122914 = 0; i122914 < 128; i122914++)
        chess_prepare_for_pipelining {
            p_for_body_122928 = i122914;
            goto for_body_122926;
            pipeline_continue_122954: continue;
        }
        goto for_break_122957;
    }
for_body_122926: {
        for_body_122928 = p_for_body_122928;
        cont_122937 = window_readincr_v<8>(_102110_122867);
        p_cont_122937 = cont_122937;
        goto cont_122935;
    }
cont_122935: {
        cont_122937 = p_cont_122937;
        _122949 = (8 * for_body_122928);
        _122944 = (_122922);
        lbuf_seg_122946 = (_122944 % 3);
        _122947 = (1024 * lbuf_seg_122946);
        lbuff_idx_122950 = (_122947 + _122949);
        _122951 = (&(if_join_122909)[lbuff_idx_122950]);
        aie::store_v(_122951, cont_122937);
        goto continue_wrapper_122952;
    }
continue_wrapper_122952: {
        goto pipeline_continue_122954;
    }
for_break_122957: {
        _122963 = *&g_lbuf_cnt_122898;
        _122965 = *&g_lbuf_cnt_122898;
        _122967 = (_122965);
        _122968 = (1 + _122967);
        (*&g_lbuf_cnt_122898 = _122968);
        (*line0_idx_122973 = 0);
        (*line1_idx_122978 = 0);
        (*line2_idx_122983 = 0);
        cont_122989 = aie::zeros<i32, 8>();
        p_cont_122989 = cont_122989;
        goto cont_122987;
    }
cont_122987: {
        cont_122989 = p_cont_122989;
        cont_122992 = aie::zeros<i32, 8>();
        p_cont_122992 = cont_122992;
        goto cont_122990;
    }
cont_122990: {
        cont_122992 = p_cont_122992;
        cont_122995 = aie::zeros<i32, 8>();
        p_cont_122995 = cont_122995;
        goto cont_122993;
    }
cont_122993: {
        cont_122995 = p_cont_122995;
        (*data_slice2_122999 = cont_122995);
        cont_123003 = aie::zeros<i32, 8>();
        p_cont_123003 = cont_123003;
        goto cont_123001;
    }
cont_123001: {
        cont_123003 = p_cont_123003;
        cont_123006 = aie::zeros<i32, 8>();
        p_cont_123006 = cont_123006;
        goto cont_123004;
    }
cont_123004: {
        cont_123006 = p_cont_123006;
        cont_123009 = aie::zeros<i32, 8>();
        p_cont_123009 = cont_123009;
        goto cont_123007;
    }
cont_123007: {
        cont_123009 = p_cont_123009;
        int i123010;
        for (i123010 = 0; i123010 < 128; i123010++)
        chess_prepare_for_pipelining {
            p_for_body_123020 = i123010;
            goto for_body_123018;
            pipeline_continue_123200: continue;
        }
        goto continue_wrapper_123203;
    }
for_body_123018: {
        for_body_123020 = p_for_body_123020;
        cont_123031 = aie::load_v<8>(_123028);
        p_cont_123031 = cont_123031;
        goto cont_123029;
    }
cont_123029: {
        cont_123031 = p_cont_123031;
        cont_123038 = aie::load_v<8>(_123035);
        p_cont_123038 = cont_123038;
        goto cont_123036;
    }
cont_123036: {
        cont_123038 = p_cont_123038;
        cont_123043 = aie::load_v<8>(_123040);
        p_cont_123043 = cont_123043;
        goto cont_123041;
    }
cont_123041: {
        cont_123043 = p_cont_123043;
        _123044 = *line0_idx_122973;
        _123050 = (_123044);
        cur_lbuf_cnt_123046 = (_122963);
        _123047 = (1 + cur_lbuf_cnt_123046);
        _123048 = (_123047 % 3);
        line0_seg_123049 = (1024 * _123048);
        _123051 = (line0_seg_123049 + _123050);
        _123052 = (&(if_join_122913)[_123051]);
        memcpy(&_123053, &_123052, sizeof(_123053));
        cont_123056 = aie::load_v<8>(_123053);
        p_cont_123056 = cont_123056;
        goto cont_123054;
    }
cont_123054: {
        cont_123056 = p_cont_123056;
        _123061 = *line0_idx_122973;
        _123063 = (_123061);
        _123064 = (8 + _123063);
        (*line0_idx_122973 = _123064);
        cont_123068 =  (cont_123056);
        p_cont_123068 = cont_123068;
        goto cont_123066;
    }
cont_123066: {
        cont_123068 = p_cont_123068;
        cont_123071 =  (cont_123003);
        p_cont_123071 = cont_123071;
        goto cont_123069;
    }
cont_123069: {
        cont_123071 = p_cont_123071;
        cont_123081 = aie::shuffle_up_fill(cont_123068, cont_123071, 1);
        p_cont_123081 = cont_123081;
        goto cont_123079;
    }
cont_123079: {
        cont_123081 = p_cont_123081;
        cont_123003.insert(0, cont_123081);
        goto cont_123089;
    }
cont_123089: {
        cont_123093 =  (cont_123081);
        p_cont_123093 = cont_123093;
        goto cont_123091;
    }
cont_123091: {
        cont_123093 = p_cont_123093;
        cont_123107 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_123031, 0, cont_123093, 0);
        p_cont_123107 = cont_123107;
        goto cont_123105;
    }
cont_123105: {
        cont_123107 = p_cont_123107;
        (*acc_123109 = cont_123107);
        _123111 = *line1_idx_122978;
        _123116 = (_123111);
        _123113 = (2 + cur_lbuf_cnt_123046);
        _123114 = (_123113 % 3);
        line1_seg_123115 = (1024 * _123114);
        _123117 = (line1_seg_123115 + _123116);
        _123118 = (&(if_join_122913)[_123117]);
        memcpy(&_123119, &_123118, sizeof(_123119));
        cont_123122 = aie::load_v<8>(_123119);
        p_cont_123122 = cont_123122;
        goto cont_123120;
    }
cont_123120: {
        cont_123122 = p_cont_123122;
        _123123 = *line1_idx_122978;
        _123125 = (_123123);
        _123126 = (8 + _123125);
        (*line1_idx_122978 = _123126);
        cont_123130 = aie::shuffle_up_fill(cont_123122, cont_123006, 1);
        p_cont_123130 = cont_123130;
        goto cont_123128;
    }
cont_123128: {
        cont_123130 = p_cont_123130;
        cont_123006.insert(0, cont_123130);
        goto cont_123131;
    }
cont_123131: {
        _123145 = *acc_123109;
        _123147 = (_123145);
        cont_123150 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_123147, cont_123038, 0, cont_123130, 0);
        p_cont_123150 = cont_123150;
        goto cont_123148;
    }
cont_123148: {
        cont_123150 = p_cont_123150;
        (*acc_123109 = cont_123150);
        _123152 = *line2_idx_122983;
        _123156 = (_123152);
        _123154 = (cur_lbuf_cnt_123046 % 3);
        line2_seg_123155 = (1024 * _123154);
        _123157 = (line2_seg_123155 + _123156);
        _123158 = (&(if_join_122913)[_123157]);
        memcpy(&_123159, &_123158, sizeof(_123159));
        cont_123162 = aie::load_v<8>(_123159);
        p_cont_123162 = cont_123162;
        goto cont_123160;
    }
cont_123160: {
        cont_123162 = p_cont_123162;
        (*data_slice2_122999 = cont_123162);
        _123164 = *line2_idx_122983;
        _123166 = (_123164);
        _123167 = (8 + _123166);
        (*line2_idx_122983 = _123167);
        cont_123171 = aie::shuffle_up_fill(cont_123162, cont_123009, 1);
        p_cont_123171 = cont_123171;
        goto cont_123169;
    }
cont_123169: {
        cont_123171 = p_cont_123171;
        cont_123009.insert(0, cont_123171);
        goto cont_123172;
    }
cont_123172: {
        _123174 = *acc_123109;
        _123176 = *data_slice2_122999;
        _123178 = (_123174);
        _123179 = (_123176);
        cont_123182 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_123178, cont_123043, 0, _123179, 0);
        p_cont_123182 = cont_123182;
        goto cont_123180;
    }
cont_123180: {
        cont_123182 = p_cont_123182;
        (*acc_123109 = cont_123182);
        cont_123192 = srs(cont_123182, 0);
        p_cont_123192 = cont_123192;
        goto cont_123190;
    }
cont_123190: {
        cont_123192 = p_cont_123192;
        window_writeincr(_102110_122868, cont_123192);
        goto continue_wrapper_123198;
    }
continue_wrapper_123198: {
        goto pipeline_continue_123200;
    }
continue_wrapper_123203: {
        goto pipeline_continue_123205;
    }
_102110_123571: {
        return;
    }
}


    
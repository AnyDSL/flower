
#include <hls_stream.h>
#include <hls_math.h>
#include <string.h>

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
typedef struct {
    i32 e[64];
} array_47;
typedef struct {
    array_30 e[8];
} array_43;

#ifndef __SYNTHESIS__
void hls_top(array_30[524288], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, array_30[524288], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
void _57914(array_30[524288], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
void _58235(array_30[524288], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _57914(array_30 _57914_63287[524288], hls::stream<channel8_i32_33>* _57914_63288, hls::stream<channel8_i32_33>* _57914_63289, hls::stream<channel8_i32_33>* _57914_63290, hls::stream<channel8_i32_33>* _57914_63291, hls::stream<channel8_i32_33>* _57914_63292, hls::stream<channel8_i32_33>* _57914_63293, hls::stream<channel8_i32_33>* _57914_63294, hls::stream<channel8_i32_33>* _57914_63295) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_57914_63287 struct_level
#pragma HLS data_pack variable=_57914_63288 struct_level
#pragma HLS data_pack variable=_57914_63289 struct_level
#pragma HLS data_pack variable=_57914_63290 struct_level
#pragma HLS data_pack variable=_57914_63291 struct_level
#pragma HLS data_pack variable=_57914_63292 struct_level
#pragma HLS data_pack variable=_57914_63293 struct_level
#pragma HLS data_pack variable=_57914_63294 struct_level
#pragma HLS data_pack variable=_57914_63295 struct_level
i32   loop_63298;
    i32 p_loop_63298;
    i32   loop_63299;
    i32 p_loop_63299;
    i32   loop_63300;
    i32 p_loop_63300;
    i32   for_body_63315;
    i32 p_for_body_63315;
    i32   loop_63318;
    i32 p_loop_63318;
    i32   loop_63319;
    i32 p_loop_63319;
    i32   loop_63320;
    i32 p_loop_63320;
    bool _63301;
    array_47 _63419;
    array_43 _63420;
    array_43 tile_63334_slot;
    array_43* tile_63334 = &tile_63334_slot;
    bool _63321;
    array_30* _63346;
    array_30 _63347;
    array_30 _63349;
    array_30* _63353;
    array_30 _63354;
    array_30 _63356;
    array_30* _63360;
    array_30 _63361;
    array_30 _63363;
    array_30* _63367;
    array_30 _63368;
    array_30 _63370;
    array_30* _63374;
    array_30 _63375;
    array_30 _63377;
    array_30* _63381;
    array_30 _63382;
    array_30 _63384;
    array_30* _63388;
    array_30 _63389;
    array_30 _63391;
    array_30* _63395;
    array_30 _63396;
    array_30 _63398;
    i32 _63406;
    i32 _63324;
    i32 _63325;
    i32 _63323;
    i32 idx_63326;
    array_30* _63327;
    array_30 _63328;
    array_30 _63336;
    array_30* _63335;
    i32 _63338;
    {
        _63419.e[0ULL] = 0;
        _63419.e[1ULL] = 0;
        _63419.e[2ULL] = 0;
        _63419.e[3ULL] = 0;
        _63419.e[4ULL] = 0;
        _63419.e[5ULL] = 0;
        _63419.e[6ULL] = 0;
        _63419.e[7ULL] = 0;
        _63419.e[8ULL] = 0;
        _63419.e[9ULL] = 0;
        _63419.e[10ULL] = 0;
        _63419.e[11ULL] = 0;
        _63419.e[12ULL] = 0;
        _63419.e[13ULL] = 0;
        _63419.e[14ULL] = 0;
        _63419.e[15ULL] = 0;
        _63419.e[16ULL] = 0;
        _63419.e[17ULL] = 0;
        _63419.e[18ULL] = 0;
        _63419.e[19ULL] = 0;
        _63419.e[20ULL] = 0;
        _63419.e[21ULL] = 0;
        _63419.e[22ULL] = 0;
        _63419.e[23ULL] = 0;
        _63419.e[24ULL] = 0;
        _63419.e[25ULL] = 0;
        _63419.e[26ULL] = 0;
        _63419.e[27ULL] = 0;
        _63419.e[28ULL] = 0;
        _63419.e[29ULL] = 0;
        _63419.e[30ULL] = 0;
        _63419.e[31ULL] = 0;
        _63419.e[32ULL] = 0;
        _63419.e[33ULL] = 0;
        _63419.e[34ULL] = 0;
        _63419.e[35ULL] = 0;
        _63419.e[36ULL] = 0;
        _63419.e[37ULL] = 0;
        _63419.e[38ULL] = 0;
        _63419.e[39ULL] = 0;
        _63419.e[40ULL] = 0;
        _63419.e[41ULL] = 0;
        _63419.e[42ULL] = 0;
        _63419.e[43ULL] = 0;
        _63419.e[44ULL] = 0;
        _63419.e[45ULL] = 0;
        _63419.e[46ULL] = 0;
        _63419.e[47ULL] = 0;
        _63419.e[48ULL] = 0;
        _63419.e[49ULL] = 0;
        _63419.e[50ULL] = 0;
        _63419.e[51ULL] = 0;
        _63419.e[52ULL] = 0;
        _63419.e[53ULL] = 0;
        _63419.e[54ULL] = 0;
        _63419.e[55ULL] = 0;
        _63419.e[56ULL] = 0;
        _63419.e[57ULL] = 0;
        _63419.e[58ULL] = 0;
        _63419.e[59ULL] = 0;
        _63419.e[60ULL] = 0;
        _63419.e[61ULL] = 0;
        _63419.e[62ULL] = 0;
        _63419.e[63ULL] = 0;
        memcpy(&_63420, &_63419, sizeof(_63420));
        p_loop_63298 = 0;
        p_loop_63299 = 2048;
        p_loop_63300 = 1;
        goto loop_63296;
    }
loop_63296: {
        loop_63298 = p_loop_63298;
        loop_63299 = p_loop_63299;
        loop_63300 = p_loop_63300;
        _63301 = (loop_63298 < loop_63299);
        if (_63301) goto branch_true_63302; else goto branch_false_63424;
    }
branch_false_63424: {
        return void();
    }
branch_true_63302: {
        int i63303;
        for (i63303 = 0; i63303 < 256; i63303++) {
            #pragma HLS PIPELINE
            p_for_body_63315 = i63303;
            goto for_body_63313;
            pipeline_continue_63401: continue;
        }
        goto cont_63404;
    }
for_body_63313: {
        for_body_63315 = p_for_body_63315;
        (*tile_63334 = _63420);
        _63323 = (256 * loop_63298);
        p_loop_63318 = 0;
        p_loop_63319 = 1;
        p_loop_63320 = 1;
        goto loop_63316;
    }
loop_63316: {
        loop_63318 = p_loop_63318;
        loop_63319 = p_loop_63319;
        loop_63320 = p_loop_63320;
        _63321 = (loop_63318 < loop_63319);
        if (_63321) goto branch_true_63322; else goto branch_false_63340;
    }
branch_false_63340: {
        _63346 = (&(tile_63334)->e[0]);
        _63347 = *_63346;
        _63349 = (_63347);
        *_57914_63288 << _63349;
        goto cont_63350;
    }
cont_63350: {
        _63353 = (&(tile_63334)->e[1]);
        _63354 = *_63353;
        _63356 = (_63354);
        *_57914_63292 << _63356;
        goto cont_63357;
    }
cont_63357: {
        _63360 = (&(tile_63334)->e[2]);
        _63361 = *_63360;
        _63363 = (_63361);
        *_57914_63293 << _63363;
        goto cont_63364;
    }
cont_63364: {
        _63367 = (&(tile_63334)->e[3]);
        _63368 = *_63367;
        _63370 = (_63368);
        *_57914_63294 << _63370;
        goto cont_63371;
    }
cont_63371: {
        _63374 = (&(tile_63334)->e[4]);
        _63375 = *_63374;
        _63377 = (_63375);
        *_57914_63290 << _63377;
        goto cont_63378;
    }
cont_63378: {
        _63381 = (&(tile_63334)->e[5]);
        _63382 = *_63381;
        _63384 = (_63382);
        *_57914_63295 << _63384;
        goto cont_63385;
    }
cont_63385: {
        _63388 = (&(tile_63334)->e[6]);
        _63389 = *_63388;
        _63391 = (_63389);
        *_57914_63291 << _63391;
        goto cont_63392;
    }
cont_63392: {
        _63395 = (&(tile_63334)->e[7]);
        _63396 = *_63395;
        _63398 = (_63396);
        *_57914_63289 << _63398;
        goto continue_wrapper_63399;
    }
continue_wrapper_63399: {
        goto pipeline_continue_63401;
    }
cont_63404: {
        _63406 = (loop_63298 + loop_63300);
        p_loop_63298 = _63406;
        p_loop_63299 = loop_63299;
        p_loop_63300 = loop_63300;
        goto loop_63296;
    }
branch_true_63322: {
        _63324 = (256 * loop_63318);
        _63325 = (for_body_63315 + _63324);
        idx_63326 = (_63323 + _63325);
        _63327 = (&(_57914_63287)[idx_63326]);
        _63328 = *_63327;
        _63336 = (_63328);
        _63335 = (&(tile_63334)->e[loop_63318]);
        (*_63335 = _63336);
        _63338 = (loop_63318 + loop_63320);
        p_loop_63318 = _63338;
        p_loop_63319 = loop_63319;
        p_loop_63320 = loop_63320;
        goto loop_63316;
    }
}

void _58235(array_30 _58235_63455[524288], hls::stream<channel8_i32_33>* _58235_63456, hls::stream<channel8_i32_33>* _58235_63457, hls::stream<channel8_i32_33>* _58235_63458, hls::stream<channel8_i32_33>* _58235_63459, hls::stream<channel8_i32_33>* _58235_63460, hls::stream<channel8_i32_33>* _58235_63461, hls::stream<channel8_i32_33>* _58235_63462, hls::stream<channel8_i32_33>* _58235_63463) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_58235_63455 struct_level
#pragma HLS data_pack variable=_58235_63456 struct_level
#pragma HLS data_pack variable=_58235_63457 struct_level
#pragma HLS data_pack variable=_58235_63458 struct_level
#pragma HLS data_pack variable=_58235_63459 struct_level
#pragma HLS data_pack variable=_58235_63460 struct_level
#pragma HLS data_pack variable=_58235_63461 struct_level
#pragma HLS data_pack variable=_58235_63462 struct_level
#pragma HLS data_pack variable=_58235_63463 struct_level
i32   loop_63466;
    i32 p_loop_63466;
    i32   loop_63467;
    i32 p_loop_63467;
    i32   loop_63468;
    i32 p_loop_63468;
    i32   for_body_63481;
    i32 p_for_body_63481;
    array_30   cont_63493;
    array_30 p_cont_63493;
    array_30   cont_63498;
    array_30 p_cont_63498;
    array_30   cont_63503;
    array_30 p_cont_63503;
    array_30   cont_63508;
    array_30 p_cont_63508;
    array_30   cont_63513;
    array_30 p_cont_63513;
    array_30   cont_63518;
    array_30 p_cont_63518;
    array_30   cont_63523;
    array_30 p_cont_63523;
    array_30   cont_63528;
    array_30 p_cont_63528;
    i32   loop_63531;
    i32 p_loop_63531;
    i32   loop_63532;
    i32 p_loop_63532;
    i32   loop_63533;
    i32 p_loop_63533;
    bool _63469;
    array_47 _63419;
    array_43 _63420;
    array_43 tile_63489_slot;
    array_43* tile_63489 = &tile_63489_slot;
    array_30* _63494;
    array_30* _63499;
    array_30* _63504;
    array_30* _63509;
    array_30* _63514;
    array_30* _63519;
    array_30* _63524;
    array_30* _63558;
    bool _63534;
    i32 _63554;
    array_30* _63536;
    array_30 _63537;
    array_30 _63544;
    i32 _63540;
    i32 _63541;
    i32 _63539;
    i32 idx_63542;
    array_30* _63543;
    i32 _63546;
    {
        _63419.e[0ULL] = 0;
        _63419.e[1ULL] = 0;
        _63419.e[2ULL] = 0;
        _63419.e[3ULL] = 0;
        _63419.e[4ULL] = 0;
        _63419.e[5ULL] = 0;
        _63419.e[6ULL] = 0;
        _63419.e[7ULL] = 0;
        _63419.e[8ULL] = 0;
        _63419.e[9ULL] = 0;
        _63419.e[10ULL] = 0;
        _63419.e[11ULL] = 0;
        _63419.e[12ULL] = 0;
        _63419.e[13ULL] = 0;
        _63419.e[14ULL] = 0;
        _63419.e[15ULL] = 0;
        _63419.e[16ULL] = 0;
        _63419.e[17ULL] = 0;
        _63419.e[18ULL] = 0;
        _63419.e[19ULL] = 0;
        _63419.e[20ULL] = 0;
        _63419.e[21ULL] = 0;
        _63419.e[22ULL] = 0;
        _63419.e[23ULL] = 0;
        _63419.e[24ULL] = 0;
        _63419.e[25ULL] = 0;
        _63419.e[26ULL] = 0;
        _63419.e[27ULL] = 0;
        _63419.e[28ULL] = 0;
        _63419.e[29ULL] = 0;
        _63419.e[30ULL] = 0;
        _63419.e[31ULL] = 0;
        _63419.e[32ULL] = 0;
        _63419.e[33ULL] = 0;
        _63419.e[34ULL] = 0;
        _63419.e[35ULL] = 0;
        _63419.e[36ULL] = 0;
        _63419.e[37ULL] = 0;
        _63419.e[38ULL] = 0;
        _63419.e[39ULL] = 0;
        _63419.e[40ULL] = 0;
        _63419.e[41ULL] = 0;
        _63419.e[42ULL] = 0;
        _63419.e[43ULL] = 0;
        _63419.e[44ULL] = 0;
        _63419.e[45ULL] = 0;
        _63419.e[46ULL] = 0;
        _63419.e[47ULL] = 0;
        _63419.e[48ULL] = 0;
        _63419.e[49ULL] = 0;
        _63419.e[50ULL] = 0;
        _63419.e[51ULL] = 0;
        _63419.e[52ULL] = 0;
        _63419.e[53ULL] = 0;
        _63419.e[54ULL] = 0;
        _63419.e[55ULL] = 0;
        _63419.e[56ULL] = 0;
        _63419.e[57ULL] = 0;
        _63419.e[58ULL] = 0;
        _63419.e[59ULL] = 0;
        _63419.e[60ULL] = 0;
        _63419.e[61ULL] = 0;
        _63419.e[62ULL] = 0;
        _63419.e[63ULL] = 0;
        memcpy(&_63420, &_63419, sizeof(_63420));
        p_loop_63466 = 0;
        p_loop_63467 = 2048;
        p_loop_63468 = 1;
        goto loop_63464;
    }
loop_63464: {
        loop_63466 = p_loop_63466;
        loop_63467 = p_loop_63467;
        loop_63468 = p_loop_63468;
        _63469 = (loop_63466 < loop_63467);
        if (_63469) goto branch_true_63470; else goto branch_false_63570;
    }
branch_false_63570: {
        return void();
    }
branch_true_63470: {
        int i63471;
        for (i63471 = 0; i63471 < 256; i63471++) {
            #pragma HLS PIPELINE
            p_for_body_63481 = i63471;
            goto for_body_63479;
            pipeline_continue_63549: continue;
        }
        goto cont_63552;
    }
for_body_63479: {
        for_body_63481 = p_for_body_63481;
        (*tile_63489 = _63420);
        *_58235_63460 >> cont_63493;
        p_cont_63493 = cont_63493;
        goto cont_63491;
    }
cont_63491: {
        cont_63493 = p_cont_63493;
        _63494 = (&(tile_63489)->e[0]);
        (*_63494 = cont_63493);
        *_58235_63456 >> cont_63498;
        p_cont_63498 = cont_63498;
        goto cont_63496;
    }
cont_63496: {
        cont_63498 = p_cont_63498;
        _63499 = (&(tile_63489)->e[1]);
        (*_63499 = cont_63498);
        *_58235_63457 >> cont_63503;
        p_cont_63503 = cont_63503;
        goto cont_63501;
    }
cont_63501: {
        cont_63503 = p_cont_63503;
        _63504 = (&(tile_63489)->e[2]);
        (*_63504 = cont_63503);
        *_58235_63458 >> cont_63508;
        p_cont_63508 = cont_63508;
        goto cont_63506;
    }
cont_63506: {
        cont_63508 = p_cont_63508;
        _63509 = (&(tile_63489)->e[3]);
        (*_63509 = cont_63508);
        *_58235_63461 >> cont_63513;
        p_cont_63513 = cont_63513;
        goto cont_63511;
    }
cont_63511: {
        cont_63513 = p_cont_63513;
        _63514 = (&(tile_63489)->e[4]);
        (*_63514 = cont_63513);
        *_58235_63459 >> cont_63518;
        p_cont_63518 = cont_63518;
        goto cont_63516;
    }
cont_63516: {
        cont_63518 = p_cont_63518;
        _63519 = (&(tile_63489)->e[5]);
        (*_63519 = cont_63518);
        *_58235_63462 >> cont_63523;
        p_cont_63523 = cont_63523;
        goto cont_63521;
    }
cont_63521: {
        cont_63523 = p_cont_63523;
        _63524 = (&(tile_63489)->e[6]);
        (*_63524 = cont_63523);
        *_58235_63463 >> cont_63528;
        p_cont_63528 = cont_63528;
        goto cont_63526;
    }
cont_63526: {
        cont_63528 = p_cont_63528;
        _63558 = (&(tile_63489)->e[7]);
        (*_63558 = cont_63528);
        _63539 = (256 * loop_63466);
        p_loop_63531 = 0;
        p_loop_63532 = 1;
        p_loop_63533 = 1;
        goto loop_63529;
    }
loop_63529: {
        loop_63531 = p_loop_63531;
        loop_63532 = p_loop_63532;
        loop_63533 = p_loop_63533;
        _63534 = (loop_63531 < loop_63532);
        if (_63534) goto branch_true_63535; else goto branch_false_63548;
    }
branch_false_63548: {
        goto pipeline_continue_63549;
    }
cont_63552: {
        _63554 = (loop_63466 + loop_63468);
        p_loop_63466 = _63554;
        p_loop_63467 = loop_63467;
        p_loop_63468 = loop_63468;
        goto loop_63464;
    }
branch_true_63535: {
        _63536 = (&(tile_63489)->e[loop_63531]);
        _63537 = *_63536;
        _63544 = (_63537);
        _63540 = (256 * loop_63531);
        _63541 = (for_body_63481 + _63540);
        idx_63542 = (_63539 + _63541);
        _63543 = (&(_58235_63455)[idx_63542]);
        (*_63543 = _63544);
        _63546 = (loop_63531 + loop_63533);
        p_loop_63531 = _63546;
        p_loop_63532 = loop_63532;
        p_loop_63533 = loop_63533;
        goto loop_63529;
    }
}

void hls_top(array_30 hls_top_63432[524288], hls::stream<channel8_i32_33>* hls_top_63433, hls::stream<channel8_i32_33>* hls_top_63434, hls::stream<channel8_i32_33>* hls_top_63435, hls::stream<channel8_i32_33>* hls_top_63436, hls::stream<channel8_i32_33>* hls_top_63437, hls::stream<channel8_i32_33>* hls_top_63438, hls::stream<channel8_i32_33>* hls_top_63439, hls::stream<channel8_i32_33>* hls_top_63440, array_30 hls_top_63441[524288], hls::stream<channel8_i32_33>* hls_top_63442, hls::stream<channel8_i32_33>* hls_top_63443, hls::stream<channel8_i32_33>* hls_top_63444, hls::stream<channel8_i32_33>* hls_top_63445, hls::stream<channel8_i32_33>* hls_top_63446, hls::stream<channel8_i32_33>* hls_top_63447, hls::stream<channel8_i32_33>* hls_top_63448, hls::stream<channel8_i32_33>* hls_top_63449) {
    #pragma HLS INTERFACE m_axi     port = hls_top_63432 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_63432
#pragma HLS STABLE variable = hls_top_63432
#pragma HLS INTERFACE axis port = hls_top_63433
#pragma HLS INTERFACE axis port = hls_top_63434
#pragma HLS INTERFACE axis port = hls_top_63435
#pragma HLS INTERFACE axis port = hls_top_63436
#pragma HLS INTERFACE axis port = hls_top_63437
#pragma HLS INTERFACE axis port = hls_top_63438
#pragma HLS INTERFACE axis port = hls_top_63439
#pragma HLS INTERFACE axis port = hls_top_63440
#pragma HLS INTERFACE m_axi     port = hls_top_63441 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_63441
#pragma HLS STABLE variable = hls_top_63441
#pragma HLS INTERFACE axis port = hls_top_63442
#pragma HLS INTERFACE axis port = hls_top_63443
#pragma HLS INTERFACE axis port = hls_top_63444
#pragma HLS INTERFACE axis port = hls_top_63445
#pragma HLS INTERFACE axis port = hls_top_63446
#pragma HLS INTERFACE axis port = hls_top_63447
#pragma HLS INTERFACE axis port = hls_top_63448
#pragma HLS INTERFACE axis port = hls_top_63449
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _57914(hls_top_63441, hls_top_63442, hls_top_63443, hls_top_63444, hls_top_63445, hls_top_63446, hls_top_63447, hls_top_63448, hls_top_63449);
        
    }
next_kernel_63450: {
        _58235(hls_top_63432, hls_top_63433, hls_top_63434, hls_top_63435, hls_top_63436, hls_top_63437, hls_top_63438, hls_top_63439, hls_top_63440);
        
    }
hls_top_63576: {
        return void();
    }
}

} /* extern "C" */

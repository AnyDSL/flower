
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

void _79680(output_window<channel8_i32_30>* __restrict, input_window<channel8_i32_30>* __restrict);
i32 g_lbuf_cnt_97340  = 0;
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row0_97451  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row1_97458  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row2_97463  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });

void _79680(output_window<channel8_i32_30>* __restrict _79680_97304, input_window<channel8_i32_30>* __restrict _79680_97305) {
    i32*   cont_97318;
    i32* p_cont_97318;
    i32   for_body_97331;
    i32 p_for_body_97331;
    i32   for_body_97347;
    i32 p_for_body_97347;
    aie::vector<i32, 8>   cont_97356;
    aie::vector<i32, 8> p_cont_97356;
    aie::vector<i32, 8>   cont_97857;
    aie::vector<i32, 8> p_cont_97857;
    aie::vector<i32, 8>   cont_97860;
    aie::vector<i32, 8> p_cont_97860;
    aie::vector<i32, 8>   cont_97863;
    aie::vector<i32, 8> p_cont_97863;
    aie::vector<i32, 8>   cont_97871;
    aie::vector<i32, 8> p_cont_97871;
    aie::vector<i32, 8>   cont_97874;
    aie::vector<i32, 8> p_cont_97874;
    aie::vector<i32, 8>   cont_97877;
    aie::vector<i32, 8> p_cont_97877;
    i32   for_body_97888;
    i32 p_for_body_97888;
    aie::vector<i32, 8>   cont_97891;
    aie::vector<i32, 8> p_cont_97891;
    aie::vector<i32, 8>   cont_97894;
    aie::vector<i32, 8> p_cont_97894;
    aie::vector<i32, 8>   cont_97897;
    aie::vector<i32, 8> p_cont_97897;
    aie::vector<i32, 8>   cont_97909;
    aie::vector<i32, 8> p_cont_97909;
    aie::vector<i32, 8>   cont_97917;
    aie::vector<i32, 8> p_cont_97917;
    aie::vector<i32, 8>   cont_97920;
    aie::vector<i32, 8> p_cont_97920;
    aie::vector<i32, 8>   cont_97923;
    aie::vector<i32, 8> p_cont_97923;
    aie::vector<i32, 8>   cont_97928;
    aie::vector<i32, 8> p_cont_97928;
    aie::accum<u64, 8>   cont_97931;
    aie::accum<u64, 8> p_cont_97931;
    aie::vector<i32, 8>   cont_97947;
    aie::vector<i32, 8> p_cont_97947;
    aie::vector<i32, 8>   cont_97955;
    aie::vector<i32, 8> p_cont_97955;
    aie::accum<u64, 8>   cont_97963;
    aie::accum<u64, 8> p_cont_97963;
    aie::vector<i32, 8>   cont_97975;
    aie::vector<i32, 8> p_cont_97975;
    aie::vector<i32, 8>   cont_97984;
    aie::vector<i32, 8> p_cont_97984;
    aie::accum<u64, 8>   cont_97995;
    aie::accum<u64, 8> p_cont_97995;
    aie::vector<i32, 8>   cont_97999;
    aie::vector<i32, 8> p_cont_97999;
    aie::vector<i32, 8>   cont_97671;
    aie::vector<i32, 8> p_cont_97671;
    aie::vector<i32, 8>   cont_97674;
    aie::vector<i32, 8> p_cont_97674;
    aie::vector<i32, 8>   cont_97677;
    aie::vector<i32, 8> p_cont_97677;
    aie::vector<i32, 8>   cont_97685;
    aie::vector<i32, 8> p_cont_97685;
    aie::vector<i32, 8>   cont_97688;
    aie::vector<i32, 8> p_cont_97688;
    aie::vector<i32, 8>   cont_97691;
    aie::vector<i32, 8> p_cont_97691;
    i32   for_body_97702;
    i32 p_for_body_97702;
    aie::vector<i32, 8>   cont_97705;
    aie::vector<i32, 8> p_cont_97705;
    aie::vector<i32, 8>   cont_97708;
    aie::vector<i32, 8> p_cont_97708;
    aie::vector<i32, 8>   cont_97711;
    aie::vector<i32, 8> p_cont_97711;
    aie::vector<i32, 8>   cont_97720;
    aie::vector<i32, 8> p_cont_97720;
    aie::vector<i32, 8>   cont_97728;
    aie::vector<i32, 8> p_cont_97728;
    aie::vector<i32, 8>   cont_97731;
    aie::vector<i32, 8> p_cont_97731;
    aie::vector<i32, 8>   cont_97734;
    aie::vector<i32, 8> p_cont_97734;
    aie::vector<i32, 8>   cont_97739;
    aie::vector<i32, 8> p_cont_97739;
    aie::accum<u64, 8>   cont_97742;
    aie::accum<u64, 8> p_cont_97742;
    aie::vector<i32, 8>   cont_97753;
    aie::vector<i32, 8> p_cont_97753;
    aie::vector<i32, 8>   cont_97761;
    aie::vector<i32, 8> p_cont_97761;
    aie::accum<u64, 8>   cont_97769;
    aie::accum<u64, 8> p_cont_97769;
    aie::vector<i32, 8>   cont_97779;
    aie::vector<i32, 8> p_cont_97779;
    aie::vector<i32, 8>   cont_97788;
    aie::vector<i32, 8> p_cont_97788;
    aie::accum<u64, 8>   cont_97799;
    aie::accum<u64, 8> p_cont_97799;
    aie::vector<i32, 8>   cont_97803;
    aie::vector<i32, 8> p_cont_97803;
    aie::vector<i32, 8>   cont_97413;
    aie::vector<i32, 8> p_cont_97413;
    aie::vector<i32, 8>   cont_97416;
    aie::vector<i32, 8> p_cont_97416;
    aie::vector<i32, 8>   cont_97419;
    aie::vector<i32, 8> p_cont_97419;
    aie::vector<i32, 8>   cont_97427;
    aie::vector<i32, 8> p_cont_97427;
    aie::vector<i32, 8>   cont_97430;
    aie::vector<i32, 8> p_cont_97430;
    aie::vector<i32, 8>   cont_97433;
    aie::vector<i32, 8> p_cont_97433;
    i32   for_body_97444;
    i32 p_for_body_97444;
    aie::vector<i32, 8>   cont_97455;
    aie::vector<i32, 8> p_cont_97455;
    aie::vector<i32, 8>   cont_97462;
    aie::vector<i32, 8> p_cont_97462;
    aie::vector<i32, 8>   cont_97467;
    aie::vector<i32, 8> p_cont_97467;
    aie::vector<i32, 8>   cont_97475;
    aie::vector<i32, 8> p_cont_97475;
    aie::vector<i32, 8>   cont_97487;
    aie::vector<i32, 8> p_cont_97487;
    aie::vector<i32, 8>   cont_97490;
    aie::vector<i32, 8> p_cont_97490;
    aie::vector<i32, 8>   cont_97500;
    aie::vector<i32, 8> p_cont_97500;
    aie::vector<i32, 8>   cont_97512;
    aie::vector<i32, 8> p_cont_97512;
    aie::accum<u64, 8>   cont_97526;
    aie::accum<u64, 8> p_cont_97526;
    aie::vector<i32, 8>   cont_97537;
    aie::vector<i32, 8> p_cont_97537;
    aie::vector<i32, 8>   cont_97545;
    aie::vector<i32, 8> p_cont_97545;
    aie::accum<u64, 8>   cont_97565;
    aie::accum<u64, 8> p_cont_97565;
    aie::vector<i32, 8>   cont_97574;
    aie::vector<i32, 8> p_cont_97574;
    aie::vector<i32, 8>   cont_97583;
    aie::vector<i32, 8> p_cont_97583;
    aie::accum<u64, 8>   cont_97594;
    aie::accum<u64, 8> p_cont_97594;
    aie::vector<i32, 8>   cont_97604;
    aie::vector<i32, 8> p_cont_97604;
    static i32 cont_97309_reserved[3072];
    i32 _97341;
    i32 _97369;
    i32 _97364;
    i32 lbuf_seg_97366;
    i32 _97367;
    i32 lbuff_idx_97370;
    i32* _97371;
    i32 _97379;
    i32 cur_lbuf_cnt_97380;
    bool _97381;
    bool _97650;
    i32 _97388;
    i32 _97391;
    i32 _97392;
    i32 line0_idx_97841_slot;
    i32* line0_idx_97841 = &line0_idx_97841_slot;
    i32 line1_idx_97846_slot;
    i32* line1_idx_97846 = &line1_idx_97846_slot;
    i32 line2_idx_97851_slot;
    i32* line2_idx_97851 = &line2_idx_97851_slot;
    aie::vector<i32, 8> data_slice2_97867_slot;
    aie::vector<i32, 8>* data_slice2_97867 = &data_slice2_97867_slot;
    i32* _97452;
    i32* _97459;
    i32* _97464;
    i32 _97898;
    i32 _97903;
    i32 _97900;
    i32 _97901;
    i32 _97902;
    i32 _97904;
    i32* _97905;
    i32* _97906;
    i32 _97910;
    i32 _97912;
    i32 _97913;
    aie::accum<u64, 8> acc_97933_slot;
    aie::accum<u64, 8>* acc_97933 = &acc_97933_slot;
    i32 _97935;
    i32 _97941;
    i32 _97938;
    i32 _97939;
    i32 _97940;
    i32 _97942;
    i32* _97943;
    i32* _97944;
    i32 _97948;
    i32 _97950;
    i32 _97951;
    aie::accum<u64, 8> _97958;
    aie::accum<u64, 8> _97960;
    i32 _97965;
    i32 _97969;
    i32 _97967;
    i32 _97968;
    i32 _97970;
    i32* _97971;
    i32* _97972;
    i32 _97977;
    i32 _97979;
    i32 _97980;
    aie::accum<u64, 8> _97987;
    aie::vector<i32, 8> _97989;
    aie::accum<u64, 8> _97991;
    aie::vector<i32, 8> _97992;
    i32 line0_idx_97655_slot;
    i32* line0_idx_97655 = &line0_idx_97655_slot;
    i32 line1_idx_97660_slot;
    i32* line1_idx_97660 = &line1_idx_97660_slot;
    i32 line2_idx_97665_slot;
    i32* line2_idx_97665 = &line2_idx_97665_slot;
    aie::vector<i32, 8> data_slice2_97681_slot;
    aie::vector<i32, 8>* data_slice2_97681 = &data_slice2_97681_slot;
    i32 _97712;
    i32 _97714;
    i32 _97715;
    i32* _97716;
    i32* _97717;
    i32 _97721;
    i32 _97723;
    i32 _97724;
    aie::accum<u64, 8> acc_97744_slot;
    aie::accum<u64, 8>* acc_97744 = &acc_97744_slot;
    i32 _97746;
    i32 _97748;
    i32* _97749;
    i32* _97750;
    i32 _97754;
    i32 _97756;
    i32 _97757;
    aie::accum<u64, 8> _97764;
    aie::accum<u64, 8> _97766;
    i32 _97771;
    i32 _97773;
    i32 _97774;
    i32* _97775;
    i32* _97776;
    i32 _97781;
    i32 _97783;
    i32 _97784;
    aie::accum<u64, 8> _97791;
    aie::vector<i32, 8> _97793;
    aie::accum<u64, 8> _97795;
    aie::vector<i32, 8> _97796;
    i32 line0_idx_97397_slot;
    i32* line0_idx_97397 = &line0_idx_97397_slot;
    i32 line1_idx_97402_slot;
    i32* line1_idx_97402 = &line1_idx_97402_slot;
    i32 line2_idx_97407_slot;
    i32* line2_idx_97407 = &line2_idx_97407_slot;
    aie::vector<i32, 8> data_slice2_97423_slot;
    aie::vector<i32, 8>* data_slice2_97423 = &data_slice2_97423_slot;
    i32 _97468;
    i32 _97470;
    i32* _97471;
    i32* _97472;
    i32 _97480;
    i32 _97482;
    i32 _97483;
    aie::accum<u64, 8> acc_97528_slot;
    aie::accum<u64, 8>* acc_97528 = &acc_97528_slot;
    i32 _97530;
    i32 _97532;
    i32* _97533;
    i32* _97534;
    i32 _97538;
    i32 _97540;
    i32 _97541;
    aie::accum<u64, 8> _97560;
    aie::accum<u64, 8> _97562;
    i32 _97567;
    i32 _97569;
    i32* _97570;
    i32* _97571;
    i32 _97576;
    i32 _97578;
    i32 _97579;
    aie::accum<u64, 8> _97586;
    aie::vector<i32, 8> _97588;
    aie::accum<u64, 8> _97590;
    aie::vector<i32, 8> _97591;
    {
        _97452 = (&(&g_laplace_coeffs_row0_97451)->e[0]);
        _97459 = (&(&g_laplace_coeffs_row1_97458)->e[0]);
        _97464 = (&(&g_laplace_coeffs_row2_97463)->e[0]);
        set_sat();
        goto cont_97309;
    }
cont_97309: {
        p_cont_97318 = cont_97309_reserved;
        goto cont_97316;
    }
cont_97316: {
        cont_97318 = p_cont_97318;
        int i97319;
        for (i97319 = 0; i97319 < 1022; i97319++)
        chess_prepare_for_pipelining {
            p_for_body_97331 = i97319;
            goto for_body_97329;
            pipeline_continue_97617: continue;
        }
        goto _79680_98043;
    }
for_body_97329: {
        for_body_97331 = p_for_body_97331;
        _97341 = *&g_lbuf_cnt_97340;
        int i97332;
        for (i97332 = 0; i97332 < 128; i97332++)
        chess_prepare_for_pipelining {
            p_for_body_97347 = i97332;
            goto for_body_97345;
            pipeline_continue_97374: continue;
        }
        goto for_break_97377;
    }
for_body_97345: {
        for_body_97347 = p_for_body_97347;
        cont_97356 = window_readincr_v<8>(_79680_97305);
        p_cont_97356 = cont_97356;
        goto cont_97354;
    }
cont_97354: {
        cont_97356 = p_cont_97356;
        _97369 = (8 * for_body_97347);
        _97364 = (_97341);
        lbuf_seg_97366 = (_97364 % 3);
        _97367 = (1024 * lbuf_seg_97366);
        lbuff_idx_97370 = (_97367 + _97369);
        _97371 = (&(cont_97318)[lbuff_idx_97370]);
        aie::store_v(_97371, cont_97356);
        goto continue_wrapper_97372;
    }
continue_wrapper_97372: {
        goto pipeline_continue_97374;
    }
for_break_97377: {
        _97379 = *&g_lbuf_cnt_97340;
        cur_lbuf_cnt_97380 = (_97379);
        _97381 = (cur_lbuf_cnt_97380 == 0);
        _97388 = *&g_lbuf_cnt_97340;
        _97391 = (_97388);
        _97392 = (1 + _97391);
        (*&g_lbuf_cnt_97340 = _97392);
        if (_97381) goto branch_true_97382; else goto branch_false_97649;
    }
branch_false_97649: {
        _97650 = (cur_lbuf_cnt_97380 == 1);
        if (_97650) goto branch_true_97651; else goto branch_false_97837;
    }
branch_false_97837: {
        (*line0_idx_97841 = 0);
        (*line1_idx_97846 = 0);
        (*line2_idx_97851 = 0);
        cont_97857 = aie::zeros<i32, 8>();
        p_cont_97857 = cont_97857;
        goto cont_97855;
    }
cont_97855: {
        cont_97857 = p_cont_97857;
        cont_97860 = aie::zeros<i32, 8>();
        p_cont_97860 = cont_97860;
        goto cont_97858;
    }
cont_97858: {
        cont_97860 = p_cont_97860;
        cont_97863 = aie::zeros<i32, 8>();
        p_cont_97863 = cont_97863;
        goto cont_97861;
    }
cont_97861: {
        cont_97863 = p_cont_97863;
        (*data_slice2_97867 = cont_97863);
        cont_97871 = aie::zeros<i32, 8>();
        p_cont_97871 = cont_97871;
        goto cont_97869;
    }
cont_97869: {
        cont_97871 = p_cont_97871;
        cont_97874 = aie::zeros<i32, 8>();
        p_cont_97874 = cont_97874;
        goto cont_97872;
    }
cont_97872: {
        cont_97874 = p_cont_97874;
        cont_97877 = aie::zeros<i32, 8>();
        p_cont_97877 = cont_97877;
        goto cont_97875;
    }
cont_97875: {
        cont_97877 = p_cont_97877;
        int i97878;
        for (i97878 = 0; i97878 < 128; i97878++)
        chess_prepare_for_pipelining {
            p_for_body_97888 = i97878;
            goto for_body_97886;
            pipeline_continue_98002: continue;
        }
        goto continue_wrapper_97615;
    }
for_body_97886: {
        for_body_97888 = p_for_body_97888;
        cont_97891 = aie::load_v<8>(_97452);
        p_cont_97891 = cont_97891;
        goto cont_97889;
    }
cont_97889: {
        cont_97891 = p_cont_97891;
        cont_97894 = aie::load_v<8>(_97459);
        p_cont_97894 = cont_97894;
        goto cont_97892;
    }
cont_97892: {
        cont_97894 = p_cont_97894;
        cont_97897 = aie::load_v<8>(_97464);
        p_cont_97897 = cont_97897;
        goto cont_97895;
    }
cont_97895: {
        cont_97897 = p_cont_97897;
        _97898 = *line0_idx_97841;
        _97903 = (_97898);
        _97900 = (1 + cur_lbuf_cnt_97380);
        _97901 = (_97900 % 3);
        _97902 = (1024 * _97901);
        _97904 = (_97902 + _97903);
        _97905 = (&(cont_97318)[_97904]);
        memcpy(&_97906, &_97905, sizeof(_97906));
        cont_97909 = aie::load_v<8>(_97906);
        p_cont_97909 = cont_97909;
        goto cont_97907;
    }
cont_97907: {
        cont_97909 = p_cont_97909;
        _97910 = *line0_idx_97841;
        _97912 = (_97910);
        _97913 = (8 + _97912);
        (*line0_idx_97841 = _97913);
        cont_97917 =  (cont_97909);
        p_cont_97917 = cont_97917;
        goto cont_97915;
    }
cont_97915: {
        cont_97917 = p_cont_97917;
        cont_97920 =  (cont_97871);
        p_cont_97920 = cont_97920;
        goto cont_97918;
    }
cont_97918: {
        cont_97920 = p_cont_97920;
        cont_97923 = aie::shuffle_up_fill(cont_97917, cont_97920, 1);
        p_cont_97923 = cont_97923;
        goto cont_97921;
    }
cont_97921: {
        cont_97923 = p_cont_97923;
        cont_97871.insert(0, cont_97923);
        goto cont_97924;
    }
cont_97924: {
        cont_97928 =  (cont_97923);
        p_cont_97928 = cont_97928;
        goto cont_97926;
    }
cont_97926: {
        cont_97928 = p_cont_97928;
        cont_97931 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_97891, 0, cont_97928, 0);
        p_cont_97931 = cont_97931;
        goto cont_97929;
    }
cont_97929: {
        cont_97931 = p_cont_97931;
        (*acc_97933 = cont_97931);
        _97935 = *line1_idx_97846;
        _97941 = (_97935);
        _97938 = (2 + cur_lbuf_cnt_97380);
        _97939 = (_97938 % 3);
        _97940 = (1024 * _97939);
        _97942 = (_97940 + _97941);
        _97943 = (&(cont_97318)[_97942]);
        memcpy(&_97944, &_97943, sizeof(_97944));
        cont_97947 = aie::load_v<8>(_97944);
        p_cont_97947 = cont_97947;
        goto cont_97945;
    }
cont_97945: {
        cont_97947 = p_cont_97947;
        _97948 = *line1_idx_97846;
        _97950 = (_97948);
        _97951 = (8 + _97950);
        (*line1_idx_97846 = _97951);
        cont_97955 = aie::shuffle_up_fill(cont_97947, cont_97874, 1);
        p_cont_97955 = cont_97955;
        goto cont_97953;
    }
cont_97953: {
        cont_97955 = p_cont_97955;
        cont_97874.insert(0, cont_97955);
        goto cont_97956;
    }
cont_97956: {
        _97958 = *acc_97933;
        _97960 = (_97958);
        cont_97963 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97960, cont_97894, 0, cont_97955, 0);
        p_cont_97963 = cont_97963;
        goto cont_97961;
    }
cont_97961: {
        cont_97963 = p_cont_97963;
        (*acc_97933 = cont_97963);
        _97965 = *line2_idx_97851;
        _97969 = (_97965);
        _97967 = (cur_lbuf_cnt_97380 % 3);
        _97968 = (1024 * _97967);
        _97970 = (_97968 + _97969);
        _97971 = (&(cont_97318)[_97970]);
        memcpy(&_97972, &_97971, sizeof(_97972));
        cont_97975 = aie::load_v<8>(_97972);
        p_cont_97975 = cont_97975;
        goto cont_97973;
    }
cont_97973: {
        cont_97975 = p_cont_97975;
        (*data_slice2_97867 = cont_97975);
        _97977 = *line2_idx_97851;
        _97979 = (_97977);
        _97980 = (8 + _97979);
        (*line2_idx_97851 = _97980);
        cont_97984 = aie::shuffle_up_fill(cont_97975, cont_97877, 1);
        p_cont_97984 = cont_97984;
        goto cont_97982;
    }
cont_97982: {
        cont_97984 = p_cont_97984;
        cont_97877.insert(0, cont_97984);
        goto cont_97985;
    }
cont_97985: {
        _97987 = *acc_97933;
        _97989 = *data_slice2_97867;
        _97991 = (_97987);
        _97992 = (_97989);
        cont_97995 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97991, cont_97897, 0, _97992, 0);
        p_cont_97995 = cont_97995;
        goto cont_97993;
    }
cont_97993: {
        cont_97995 = p_cont_97995;
        (*acc_97933 = cont_97995);
        cont_97999 = srs(cont_97995, 0);
        p_cont_97999 = cont_97999;
        goto cont_97997;
    }
cont_97997: {
        cont_97999 = p_cont_97999;
        window_writeincr(_79680_97304, cont_97999);
        goto continue_wrapper_98000;
    }
continue_wrapper_98000: {
        goto pipeline_continue_98002;
    }
branch_true_97651: {
        (*line0_idx_97655 = 0);
        (*line1_idx_97660 = 0);
        (*line2_idx_97665 = 0);
        cont_97671 = aie::zeros<i32, 8>();
        p_cont_97671 = cont_97671;
        goto cont_97669;
    }
cont_97669: {
        cont_97671 = p_cont_97671;
        cont_97674 = aie::zeros<i32, 8>();
        p_cont_97674 = cont_97674;
        goto cont_97672;
    }
cont_97672: {
        cont_97674 = p_cont_97674;
        cont_97677 = aie::zeros<i32, 8>();
        p_cont_97677 = cont_97677;
        goto cont_97675;
    }
cont_97675: {
        cont_97677 = p_cont_97677;
        (*data_slice2_97681 = cont_97677);
        cont_97685 = aie::zeros<i32, 8>();
        p_cont_97685 = cont_97685;
        goto cont_97683;
    }
cont_97683: {
        cont_97685 = p_cont_97685;
        cont_97688 = aie::zeros<i32, 8>();
        p_cont_97688 = cont_97688;
        goto cont_97686;
    }
cont_97686: {
        cont_97688 = p_cont_97688;
        cont_97691 = aie::zeros<i32, 8>();
        p_cont_97691 = cont_97691;
        goto cont_97689;
    }
cont_97689: {
        cont_97691 = p_cont_97691;
        int i97692;
        for (i97692 = 0; i97692 < 128; i97692++)
        chess_prepare_for_pipelining {
            p_for_body_97702 = i97692;
            goto for_body_97700;
            pipeline_continue_97806: continue;
        }
        goto continue_wrapper_97615;
    }
for_body_97700: {
        for_body_97702 = p_for_body_97702;
        cont_97705 = aie::load_v<8>(_97452);
        p_cont_97705 = cont_97705;
        goto cont_97703;
    }
cont_97703: {
        cont_97705 = p_cont_97705;
        cont_97708 = aie::load_v<8>(_97459);
        p_cont_97708 = cont_97708;
        goto cont_97706;
    }
cont_97706: {
        cont_97708 = p_cont_97708;
        cont_97711 = aie::load_v<8>(_97464);
        p_cont_97711 = cont_97711;
        goto cont_97709;
    }
cont_97709: {
        cont_97711 = p_cont_97711;
        _97712 = *line0_idx_97655;
        _97714 = (_97712);
        _97715 = (1024 + _97714);
        _97716 = (&(cont_97318)[_97715]);
        memcpy(&_97717, &_97716, sizeof(_97717));
        cont_97720 = aie::load_v<8>(_97717);
        p_cont_97720 = cont_97720;
        goto cont_97718;
    }
cont_97718: {
        cont_97720 = p_cont_97720;
        _97721 = *line0_idx_97655;
        _97723 = (_97721);
        _97724 = (8 + _97723);
        (*line0_idx_97655 = _97724);
        cont_97728 =  (cont_97720);
        p_cont_97728 = cont_97728;
        goto cont_97726;
    }
cont_97726: {
        cont_97728 = p_cont_97728;
        cont_97731 =  (cont_97685);
        p_cont_97731 = cont_97731;
        goto cont_97729;
    }
cont_97729: {
        cont_97731 = p_cont_97731;
        cont_97734 = aie::shuffle_up_fill(cont_97728, cont_97731, 1);
        p_cont_97734 = cont_97734;
        goto cont_97732;
    }
cont_97732: {
        cont_97734 = p_cont_97734;
        cont_97685.insert(0, cont_97734);
        goto cont_97735;
    }
cont_97735: {
        cont_97739 =  (cont_97734);
        p_cont_97739 = cont_97739;
        goto cont_97737;
    }
cont_97737: {
        cont_97739 = p_cont_97739;
        cont_97742 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_97705, 0, cont_97739, 0);
        p_cont_97742 = cont_97742;
        goto cont_97740;
    }
cont_97740: {
        cont_97742 = p_cont_97742;
        (*acc_97744 = cont_97742);
        _97746 = *line1_idx_97660;
        _97748 = (_97746);
        _97749 = (&(cont_97318)[_97748]);
        memcpy(&_97750, &_97749, sizeof(_97750));
        cont_97753 = aie::load_v<8>(_97750);
        p_cont_97753 = cont_97753;
        goto cont_97751;
    }
cont_97751: {
        cont_97753 = p_cont_97753;
        _97754 = *line1_idx_97660;
        _97756 = (_97754);
        _97757 = (8 + _97756);
        (*line1_idx_97660 = _97757);
        cont_97761 = aie::shuffle_up_fill(cont_97753, cont_97688, 1);
        p_cont_97761 = cont_97761;
        goto cont_97759;
    }
cont_97759: {
        cont_97761 = p_cont_97761;
        cont_97688.insert(0, cont_97761);
        goto cont_97762;
    }
cont_97762: {
        _97764 = *acc_97744;
        _97766 = (_97764);
        cont_97769 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97766, cont_97708, 0, cont_97761, 0);
        p_cont_97769 = cont_97769;
        goto cont_97767;
    }
cont_97767: {
        cont_97769 = p_cont_97769;
        (*acc_97744 = cont_97769);
        _97771 = *line2_idx_97665;
        _97773 = (_97771);
        _97774 = (1024 + _97773);
        _97775 = (&(cont_97318)[_97774]);
        memcpy(&_97776, &_97775, sizeof(_97776));
        cont_97779 = aie::load_v<8>(_97776);
        p_cont_97779 = cont_97779;
        goto cont_97777;
    }
cont_97777: {
        cont_97779 = p_cont_97779;
        (*data_slice2_97681 = cont_97779);
        _97781 = *line2_idx_97665;
        _97783 = (_97781);
        _97784 = (8 + _97783);
        (*line2_idx_97665 = _97784);
        cont_97788 = aie::shuffle_up_fill(cont_97779, cont_97691, 1);
        p_cont_97788 = cont_97788;
        goto cont_97786;
    }
cont_97786: {
        cont_97788 = p_cont_97788;
        cont_97691.insert(0, cont_97788);
        goto cont_97789;
    }
cont_97789: {
        _97791 = *acc_97744;
        _97793 = *data_slice2_97681;
        _97795 = (_97791);
        _97796 = (_97793);
        cont_97799 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97795, cont_97711, 0, _97796, 0);
        p_cont_97799 = cont_97799;
        goto cont_97797;
    }
cont_97797: {
        cont_97799 = p_cont_97799;
        (*acc_97744 = cont_97799);
        cont_97803 = srs(cont_97799, 0);
        p_cont_97803 = cont_97803;
        goto cont_97801;
    }
cont_97801: {
        cont_97803 = p_cont_97803;
        window_writeincr(_79680_97304, cont_97803);
        goto continue_wrapper_97804;
    }
continue_wrapper_97804: {
        goto pipeline_continue_97806;
    }
branch_true_97382: {
        (*line0_idx_97397 = 0);
        (*line1_idx_97402 = 0);
        (*line2_idx_97407 = 0);
        cont_97413 = aie::zeros<i32, 8>();
        p_cont_97413 = cont_97413;
        goto cont_97411;
    }
cont_97411: {
        cont_97413 = p_cont_97413;
        cont_97416 = aie::zeros<i32, 8>();
        p_cont_97416 = cont_97416;
        goto cont_97414;
    }
cont_97414: {
        cont_97416 = p_cont_97416;
        cont_97419 = aie::zeros<i32, 8>();
        p_cont_97419 = cont_97419;
        goto cont_97417;
    }
cont_97417: {
        cont_97419 = p_cont_97419;
        (*data_slice2_97423 = cont_97419);
        cont_97427 = aie::zeros<i32, 8>();
        p_cont_97427 = cont_97427;
        goto cont_97425;
    }
cont_97425: {
        cont_97427 = p_cont_97427;
        cont_97430 = aie::zeros<i32, 8>();
        p_cont_97430 = cont_97430;
        goto cont_97428;
    }
cont_97428: {
        cont_97430 = p_cont_97430;
        cont_97433 = aie::zeros<i32, 8>();
        p_cont_97433 = cont_97433;
        goto cont_97431;
    }
cont_97431: {
        cont_97433 = p_cont_97433;
        int i97434;
        for (i97434 = 0; i97434 < 128; i97434++)
        chess_prepare_for_pipelining {
            p_for_body_97444 = i97434;
            goto for_body_97442;
            pipeline_continue_97612: continue;
        }
        goto continue_wrapper_97615;
    }
for_body_97442: {
        for_body_97444 = p_for_body_97444;
        cont_97455 = aie::load_v<8>(_97452);
        p_cont_97455 = cont_97455;
        goto cont_97453;
    }
cont_97453: {
        cont_97455 = p_cont_97455;
        cont_97462 = aie::load_v<8>(_97459);
        p_cont_97462 = cont_97462;
        goto cont_97460;
    }
cont_97460: {
        cont_97462 = p_cont_97462;
        cont_97467 = aie::load_v<8>(_97464);
        p_cont_97467 = cont_97467;
        goto cont_97465;
    }
cont_97465: {
        cont_97467 = p_cont_97467;
        _97468 = *line0_idx_97397;
        _97470 = (_97468);
        _97471 = (&(cont_97318)[_97470]);
        memcpy(&_97472, &_97471, sizeof(_97472));
        cont_97475 = aie::load_v<8>(_97472);
        p_cont_97475 = cont_97475;
        goto cont_97473;
    }
cont_97473: {
        cont_97475 = p_cont_97475;
        _97480 = *line0_idx_97397;
        _97482 = (_97480);
        _97483 = (8 + _97482);
        (*line0_idx_97397 = _97483);
        cont_97487 =  (cont_97475);
        p_cont_97487 = cont_97487;
        goto cont_97485;
    }
cont_97485: {
        cont_97487 = p_cont_97487;
        cont_97490 =  (cont_97427);
        p_cont_97490 = cont_97490;
        goto cont_97488;
    }
cont_97488: {
        cont_97490 = p_cont_97490;
        cont_97500 = aie::shuffle_up_fill(cont_97487, cont_97490, 1);
        p_cont_97500 = cont_97500;
        goto cont_97498;
    }
cont_97498: {
        cont_97500 = p_cont_97500;
        cont_97427.insert(0, cont_97500);
        goto cont_97508;
    }
cont_97508: {
        cont_97512 =  (cont_97500);
        p_cont_97512 = cont_97512;
        goto cont_97510;
    }
cont_97510: {
        cont_97512 = p_cont_97512;
        cont_97526 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_97455, 0, cont_97512, 0);
        p_cont_97526 = cont_97526;
        goto cont_97524;
    }
cont_97524: {
        cont_97526 = p_cont_97526;
        (*acc_97528 = cont_97526);
        _97530 = *line1_idx_97402;
        _97532 = (_97530);
        _97533 = (&(cont_97318)[_97532]);
        memcpy(&_97534, &_97533, sizeof(_97534));
        cont_97537 = aie::load_v<8>(_97534);
        p_cont_97537 = cont_97537;
        goto cont_97535;
    }
cont_97535: {
        cont_97537 = p_cont_97537;
        _97538 = *line1_idx_97402;
        _97540 = (_97538);
        _97541 = (8 + _97540);
        (*line1_idx_97402 = _97541);
        cont_97545 = aie::shuffle_up_fill(cont_97537, cont_97430, 1);
        p_cont_97545 = cont_97545;
        goto cont_97543;
    }
cont_97543: {
        cont_97545 = p_cont_97545;
        cont_97430.insert(0, cont_97545);
        goto cont_97546;
    }
cont_97546: {
        _97560 = *acc_97528;
        _97562 = (_97560);
        cont_97565 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97562, cont_97462, 0, cont_97545, 0);
        p_cont_97565 = cont_97565;
        goto cont_97563;
    }
cont_97563: {
        cont_97565 = p_cont_97565;
        (*acc_97528 = cont_97565);
        _97567 = *line2_idx_97407;
        _97569 = (_97567);
        _97570 = (&(cont_97318)[_97569]);
        memcpy(&_97571, &_97570, sizeof(_97571));
        cont_97574 = aie::load_v<8>(_97571);
        p_cont_97574 = cont_97574;
        goto cont_97572;
    }
cont_97572: {
        cont_97574 = p_cont_97574;
        (*data_slice2_97423 = cont_97574);
        _97576 = *line2_idx_97407;
        _97578 = (_97576);
        _97579 = (8 + _97578);
        (*line2_idx_97407 = _97579);
        cont_97583 = aie::shuffle_up_fill(cont_97574, cont_97433, 1);
        p_cont_97583 = cont_97583;
        goto cont_97581;
    }
cont_97581: {
        cont_97583 = p_cont_97583;
        cont_97433.insert(0, cont_97583);
        goto cont_97584;
    }
cont_97584: {
        _97586 = *acc_97528;
        _97588 = *data_slice2_97423;
        _97590 = (_97586);
        _97591 = (_97588);
        cont_97594 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97590, cont_97467, 0, _97591, 0);
        p_cont_97594 = cont_97594;
        goto cont_97592;
    }
cont_97592: {
        cont_97594 = p_cont_97594;
        (*acc_97528 = cont_97594);
        cont_97604 = srs(cont_97594, 0);
        p_cont_97604 = cont_97604;
        goto cont_97602;
    }
cont_97602: {
        cont_97604 = p_cont_97604;
        window_writeincr(_79680_97304, cont_97604);
        goto continue_wrapper_97610;
    }
continue_wrapper_97610: {
        goto pipeline_continue_97612;
    }
continue_wrapper_97615: {
        goto pipeline_continue_97617;
    }
_79680_98043: {
        return;
    }
}


    
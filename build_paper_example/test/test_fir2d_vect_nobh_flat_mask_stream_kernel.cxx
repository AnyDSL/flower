
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

void _79446(output_stream<channel8_i32_30>* __restrict, input_stream<channel8_i32_30>* __restrict);
i32 g_lbuf_cnt_96998  = 0;
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row0_97109  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row1_97116  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row2_97121  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });

void _79446(output_stream<channel8_i32_30>* __restrict _79446_96967, input_stream<channel8_i32_30>* __restrict _79446_96968) {
    i32*   cont_96976;
    i32* p_cont_96976;
    i32   for_body_96989;
    i32 p_for_body_96989;
    i32   for_body_97005;
    i32 p_for_body_97005;
    aie::vector<i32, 8>   cont_97014;
    aie::vector<i32, 8> p_cont_97014;
    aie::vector<i32, 8>   cont_97515;
    aie::vector<i32, 8> p_cont_97515;
    aie::vector<i32, 8>   cont_97518;
    aie::vector<i32, 8> p_cont_97518;
    aie::vector<i32, 8>   cont_97521;
    aie::vector<i32, 8> p_cont_97521;
    aie::vector<i32, 8>   cont_97529;
    aie::vector<i32, 8> p_cont_97529;
    aie::vector<i32, 8>   cont_97532;
    aie::vector<i32, 8> p_cont_97532;
    aie::vector<i32, 8>   cont_97535;
    aie::vector<i32, 8> p_cont_97535;
    i32   for_body_97546;
    i32 p_for_body_97546;
    aie::vector<i32, 8>   cont_97549;
    aie::vector<i32, 8> p_cont_97549;
    aie::vector<i32, 8>   cont_97552;
    aie::vector<i32, 8> p_cont_97552;
    aie::vector<i32, 8>   cont_97555;
    aie::vector<i32, 8> p_cont_97555;
    aie::vector<i32, 8>   cont_97567;
    aie::vector<i32, 8> p_cont_97567;
    aie::vector<i32, 8>   cont_97575;
    aie::vector<i32, 8> p_cont_97575;
    aie::vector<i32, 8>   cont_97578;
    aie::vector<i32, 8> p_cont_97578;
    aie::vector<i32, 8>   cont_97581;
    aie::vector<i32, 8> p_cont_97581;
    aie::vector<i32, 8>   cont_97586;
    aie::vector<i32, 8> p_cont_97586;
    aie::accum<u64, 8>   cont_97589;
    aie::accum<u64, 8> p_cont_97589;
    aie::vector<i32, 8>   cont_97605;
    aie::vector<i32, 8> p_cont_97605;
    aie::vector<i32, 8>   cont_97613;
    aie::vector<i32, 8> p_cont_97613;
    aie::accum<u64, 8>   cont_97621;
    aie::accum<u64, 8> p_cont_97621;
    aie::vector<i32, 8>   cont_97633;
    aie::vector<i32, 8> p_cont_97633;
    aie::vector<i32, 8>   cont_97642;
    aie::vector<i32, 8> p_cont_97642;
    aie::accum<u64, 8>   cont_97653;
    aie::accum<u64, 8> p_cont_97653;
    aie::vector<i32, 8>   cont_97657;
    aie::vector<i32, 8> p_cont_97657;
    aie::vector<i32, 8>   cont_97329;
    aie::vector<i32, 8> p_cont_97329;
    aie::vector<i32, 8>   cont_97332;
    aie::vector<i32, 8> p_cont_97332;
    aie::vector<i32, 8>   cont_97335;
    aie::vector<i32, 8> p_cont_97335;
    aie::vector<i32, 8>   cont_97343;
    aie::vector<i32, 8> p_cont_97343;
    aie::vector<i32, 8>   cont_97346;
    aie::vector<i32, 8> p_cont_97346;
    aie::vector<i32, 8>   cont_97349;
    aie::vector<i32, 8> p_cont_97349;
    i32   for_body_97360;
    i32 p_for_body_97360;
    aie::vector<i32, 8>   cont_97363;
    aie::vector<i32, 8> p_cont_97363;
    aie::vector<i32, 8>   cont_97366;
    aie::vector<i32, 8> p_cont_97366;
    aie::vector<i32, 8>   cont_97369;
    aie::vector<i32, 8> p_cont_97369;
    aie::vector<i32, 8>   cont_97378;
    aie::vector<i32, 8> p_cont_97378;
    aie::vector<i32, 8>   cont_97386;
    aie::vector<i32, 8> p_cont_97386;
    aie::vector<i32, 8>   cont_97389;
    aie::vector<i32, 8> p_cont_97389;
    aie::vector<i32, 8>   cont_97392;
    aie::vector<i32, 8> p_cont_97392;
    aie::vector<i32, 8>   cont_97397;
    aie::vector<i32, 8> p_cont_97397;
    aie::accum<u64, 8>   cont_97400;
    aie::accum<u64, 8> p_cont_97400;
    aie::vector<i32, 8>   cont_97411;
    aie::vector<i32, 8> p_cont_97411;
    aie::vector<i32, 8>   cont_97419;
    aie::vector<i32, 8> p_cont_97419;
    aie::accum<u64, 8>   cont_97427;
    aie::accum<u64, 8> p_cont_97427;
    aie::vector<i32, 8>   cont_97437;
    aie::vector<i32, 8> p_cont_97437;
    aie::vector<i32, 8>   cont_97446;
    aie::vector<i32, 8> p_cont_97446;
    aie::accum<u64, 8>   cont_97457;
    aie::accum<u64, 8> p_cont_97457;
    aie::vector<i32, 8>   cont_97461;
    aie::vector<i32, 8> p_cont_97461;
    aie::vector<i32, 8>   cont_97071;
    aie::vector<i32, 8> p_cont_97071;
    aie::vector<i32, 8>   cont_97074;
    aie::vector<i32, 8> p_cont_97074;
    aie::vector<i32, 8>   cont_97077;
    aie::vector<i32, 8> p_cont_97077;
    aie::vector<i32, 8>   cont_97085;
    aie::vector<i32, 8> p_cont_97085;
    aie::vector<i32, 8>   cont_97088;
    aie::vector<i32, 8> p_cont_97088;
    aie::vector<i32, 8>   cont_97091;
    aie::vector<i32, 8> p_cont_97091;
    i32   for_body_97102;
    i32 p_for_body_97102;
    aie::vector<i32, 8>   cont_97113;
    aie::vector<i32, 8> p_cont_97113;
    aie::vector<i32, 8>   cont_97120;
    aie::vector<i32, 8> p_cont_97120;
    aie::vector<i32, 8>   cont_97125;
    aie::vector<i32, 8> p_cont_97125;
    aie::vector<i32, 8>   cont_97133;
    aie::vector<i32, 8> p_cont_97133;
    aie::vector<i32, 8>   cont_97145;
    aie::vector<i32, 8> p_cont_97145;
    aie::vector<i32, 8>   cont_97148;
    aie::vector<i32, 8> p_cont_97148;
    aie::vector<i32, 8>   cont_97158;
    aie::vector<i32, 8> p_cont_97158;
    aie::vector<i32, 8>   cont_97170;
    aie::vector<i32, 8> p_cont_97170;
    aie::accum<u64, 8>   cont_97184;
    aie::accum<u64, 8> p_cont_97184;
    aie::vector<i32, 8>   cont_97195;
    aie::vector<i32, 8> p_cont_97195;
    aie::vector<i32, 8>   cont_97203;
    aie::vector<i32, 8> p_cont_97203;
    aie::accum<u64, 8>   cont_97223;
    aie::accum<u64, 8> p_cont_97223;
    aie::vector<i32, 8>   cont_97232;
    aie::vector<i32, 8> p_cont_97232;
    aie::vector<i32, 8>   cont_97241;
    aie::vector<i32, 8> p_cont_97241;
    aie::accum<u64, 8>   cont_97252;
    aie::accum<u64, 8> p_cont_97252;
    aie::vector<i32, 8>   cont_97262;
    aie::vector<i32, 8> p_cont_97262;
    static i32 _79446_96964_reserved[3072];
    i32 _96999;
    i32 _97027;
    i32 _97022;
    i32 lbuf_seg_97024;
    i32 _97025;
    i32 lbuff_idx_97028;
    i32* _97029;
    i32 _97037;
    i32 cur_lbuf_cnt_97038;
    bool _97039;
    bool _97308;
    i32 _97046;
    i32 _97049;
    i32 _97050;
    i32 line0_idx_97499_slot;
    i32* line0_idx_97499 = &line0_idx_97499_slot;
    i32 line1_idx_97504_slot;
    i32* line1_idx_97504 = &line1_idx_97504_slot;
    i32 line2_idx_97509_slot;
    i32* line2_idx_97509 = &line2_idx_97509_slot;
    aie::vector<i32, 8> data_slice2_97525_slot;
    aie::vector<i32, 8>* data_slice2_97525 = &data_slice2_97525_slot;
    i32* _97110;
    i32* _97117;
    i32* _97122;
    i32 _97556;
    i32 _97561;
    i32 _97558;
    i32 _97559;
    i32 _97560;
    i32 _97562;
    i32* _97563;
    i32* _97564;
    i32 _97568;
    i32 _97570;
    i32 _97571;
    aie::accum<u64, 8> acc_97591_slot;
    aie::accum<u64, 8>* acc_97591 = &acc_97591_slot;
    i32 _97593;
    i32 _97599;
    i32 _97596;
    i32 _97597;
    i32 _97598;
    i32 _97600;
    i32* _97601;
    i32* _97602;
    i32 _97606;
    i32 _97608;
    i32 _97609;
    aie::accum<u64, 8> _97616;
    aie::accum<u64, 8> _97618;
    i32 _97623;
    i32 _97627;
    i32 _97625;
    i32 _97626;
    i32 _97628;
    i32* _97629;
    i32* _97630;
    i32 _97635;
    i32 _97637;
    i32 _97638;
    aie::accum<u64, 8> _97645;
    aie::vector<i32, 8> _97647;
    aie::accum<u64, 8> _97649;
    aie::vector<i32, 8> _97650;
    i32 line0_idx_97313_slot;
    i32* line0_idx_97313 = &line0_idx_97313_slot;
    i32 line1_idx_97318_slot;
    i32* line1_idx_97318 = &line1_idx_97318_slot;
    i32 line2_idx_97323_slot;
    i32* line2_idx_97323 = &line2_idx_97323_slot;
    aie::vector<i32, 8> data_slice2_97339_slot;
    aie::vector<i32, 8>* data_slice2_97339 = &data_slice2_97339_slot;
    i32 _97370;
    i32 _97372;
    i32 _97373;
    i32* _97374;
    i32* _97375;
    i32 _97379;
    i32 _97381;
    i32 _97382;
    aie::accum<u64, 8> acc_97402_slot;
    aie::accum<u64, 8>* acc_97402 = &acc_97402_slot;
    i32 _97404;
    i32 _97406;
    i32* _97407;
    i32* _97408;
    i32 _97412;
    i32 _97414;
    i32 _97415;
    aie::accum<u64, 8> _97422;
    aie::accum<u64, 8> _97424;
    i32 _97429;
    i32 _97431;
    i32 _97432;
    i32* _97433;
    i32* _97434;
    i32 _97439;
    i32 _97441;
    i32 _97442;
    aie::accum<u64, 8> _97449;
    aie::vector<i32, 8> _97451;
    aie::accum<u64, 8> _97453;
    aie::vector<i32, 8> _97454;
    i32 line0_idx_97055_slot;
    i32* line0_idx_97055 = &line0_idx_97055_slot;
    i32 line1_idx_97060_slot;
    i32* line1_idx_97060 = &line1_idx_97060_slot;
    i32 line2_idx_97065_slot;
    i32* line2_idx_97065 = &line2_idx_97065_slot;
    aie::vector<i32, 8> data_slice2_97081_slot;
    aie::vector<i32, 8>* data_slice2_97081 = &data_slice2_97081_slot;
    i32 _97126;
    i32 _97128;
    i32* _97129;
    i32* _97130;
    i32 _97138;
    i32 _97140;
    i32 _97141;
    aie::accum<u64, 8> acc_97186_slot;
    aie::accum<u64, 8>* acc_97186 = &acc_97186_slot;
    i32 _97188;
    i32 _97190;
    i32* _97191;
    i32* _97192;
    i32 _97196;
    i32 _97198;
    i32 _97199;
    aie::accum<u64, 8> _97218;
    aie::accum<u64, 8> _97220;
    i32 _97225;
    i32 _97227;
    i32* _97228;
    i32* _97229;
    i32 _97234;
    i32 _97236;
    i32 _97237;
    aie::accum<u64, 8> _97244;
    aie::vector<i32, 8> _97246;
    aie::accum<u64, 8> _97248;
    aie::vector<i32, 8> _97249;
    {
        _97110 = (&(&g_laplace_coeffs_row0_97109)->e[0]);
        _97117 = (&(&g_laplace_coeffs_row1_97116)->e[0]);
        _97122 = (&(&g_laplace_coeffs_row2_97121)->e[0]);
        p_cont_96976 = _79446_96964_reserved;
        goto cont_96974;
    }
cont_96974: {
        cont_96976 = p_cont_96976;
        int i96977;
        for (i96977 = 0; i96977 < 1022; i96977++)
        chess_prepare_for_pipelining {
            p_for_body_96989 = i96977;
            goto for_body_96987;
            pipeline_continue_97275: continue;
        }
        goto _79446_97704;
    }
for_body_96987: {
        for_body_96989 = p_for_body_96989;
        _96999 = *&g_lbuf_cnt_96998;
        int i96990;
        for (i96990 = 0; i96990 < 128; i96990++)
        chess_prepare_for_pipelining {
            p_for_body_97005 = i96990;
            goto for_body_97003;
            pipeline_continue_97032: continue;
        }
        goto for_break_97035;
    }
for_body_97003: {
        for_body_97005 = p_for_body_97005;
        cont_97014 = readincr_v<8>(_79446_96968);
        p_cont_97014 = cont_97014;
        goto cont_97012;
    }
cont_97012: {
        cont_97014 = p_cont_97014;
        _97027 = (8 * for_body_97005);
        _97022 = (_96999);
        lbuf_seg_97024 = (_97022 % 3);
        _97025 = (1024 * lbuf_seg_97024);
        lbuff_idx_97028 = (_97025 + _97027);
        _97029 = (&(cont_96976)[lbuff_idx_97028]);
        aie::store_v(_97029, cont_97014);
        goto continue_wrapper_97030;
    }
continue_wrapper_97030: {
        goto pipeline_continue_97032;
    }
for_break_97035: {
        _97037 = *&g_lbuf_cnt_96998;
        cur_lbuf_cnt_97038 = (_97037);
        _97039 = (cur_lbuf_cnt_97038 == 0);
        _97046 = *&g_lbuf_cnt_96998;
        _97049 = (_97046);
        _97050 = (1 + _97049);
        (*&g_lbuf_cnt_96998 = _97050);
        if (_97039) goto branch_true_97040; else goto branch_false_97307;
    }
branch_false_97307: {
        _97308 = (cur_lbuf_cnt_97038 == 1);
        if (_97308) goto branch_true_97309; else goto branch_false_97495;
    }
branch_false_97495: {
        (*line0_idx_97499 = 0);
        (*line1_idx_97504 = 0);
        (*line2_idx_97509 = 0);
        cont_97515 = aie::zeros<i32, 8>();
        p_cont_97515 = cont_97515;
        goto cont_97513;
    }
cont_97513: {
        cont_97515 = p_cont_97515;
        cont_97518 = aie::zeros<i32, 8>();
        p_cont_97518 = cont_97518;
        goto cont_97516;
    }
cont_97516: {
        cont_97518 = p_cont_97518;
        cont_97521 = aie::zeros<i32, 8>();
        p_cont_97521 = cont_97521;
        goto cont_97519;
    }
cont_97519: {
        cont_97521 = p_cont_97521;
        (*data_slice2_97525 = cont_97521);
        cont_97529 = aie::zeros<i32, 8>();
        p_cont_97529 = cont_97529;
        goto cont_97527;
    }
cont_97527: {
        cont_97529 = p_cont_97529;
        cont_97532 = aie::zeros<i32, 8>();
        p_cont_97532 = cont_97532;
        goto cont_97530;
    }
cont_97530: {
        cont_97532 = p_cont_97532;
        cont_97535 = aie::zeros<i32, 8>();
        p_cont_97535 = cont_97535;
        goto cont_97533;
    }
cont_97533: {
        cont_97535 = p_cont_97535;
        int i97536;
        for (i97536 = 0; i97536 < 128; i97536++)
        chess_prepare_for_pipelining {
            p_for_body_97546 = i97536;
            goto for_body_97544;
            pipeline_continue_97660: continue;
        }
        goto continue_wrapper_97273;
    }
for_body_97544: {
        for_body_97546 = p_for_body_97546;
        cont_97549 = aie::load_v<8>(_97110);
        p_cont_97549 = cont_97549;
        goto cont_97547;
    }
cont_97547: {
        cont_97549 = p_cont_97549;
        cont_97552 = aie::load_v<8>(_97117);
        p_cont_97552 = cont_97552;
        goto cont_97550;
    }
cont_97550: {
        cont_97552 = p_cont_97552;
        cont_97555 = aie::load_v<8>(_97122);
        p_cont_97555 = cont_97555;
        goto cont_97553;
    }
cont_97553: {
        cont_97555 = p_cont_97555;
        _97556 = *line0_idx_97499;
        _97561 = (_97556);
        _97558 = (1 + cur_lbuf_cnt_97038);
        _97559 = (_97558 % 3);
        _97560 = (1024 * _97559);
        _97562 = (_97560 + _97561);
        _97563 = (&(cont_96976)[_97562]);
        memcpy(&_97564, &_97563, sizeof(_97564));
        cont_97567 = aie::load_v<8>(_97564);
        p_cont_97567 = cont_97567;
        goto cont_97565;
    }
cont_97565: {
        cont_97567 = p_cont_97567;
        _97568 = *line0_idx_97499;
        _97570 = (_97568);
        _97571 = (8 + _97570);
        (*line0_idx_97499 = _97571);
        cont_97575 =  (cont_97567);
        p_cont_97575 = cont_97575;
        goto cont_97573;
    }
cont_97573: {
        cont_97575 = p_cont_97575;
        cont_97578 =  (cont_97529);
        p_cont_97578 = cont_97578;
        goto cont_97576;
    }
cont_97576: {
        cont_97578 = p_cont_97578;
        cont_97581 = aie::shuffle_up_fill(cont_97575, cont_97578, 1);
        p_cont_97581 = cont_97581;
        goto cont_97579;
    }
cont_97579: {
        cont_97581 = p_cont_97581;
        cont_97529.insert(0, cont_97581);
        goto cont_97582;
    }
cont_97582: {
        cont_97586 =  (cont_97581);
        p_cont_97586 = cont_97586;
        goto cont_97584;
    }
cont_97584: {
        cont_97586 = p_cont_97586;
        cont_97589 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_97549, 0, cont_97586, 0);
        p_cont_97589 = cont_97589;
        goto cont_97587;
    }
cont_97587: {
        cont_97589 = p_cont_97589;
        (*acc_97591 = cont_97589);
        _97593 = *line1_idx_97504;
        _97599 = (_97593);
        _97596 = (2 + cur_lbuf_cnt_97038);
        _97597 = (_97596 % 3);
        _97598 = (1024 * _97597);
        _97600 = (_97598 + _97599);
        _97601 = (&(cont_96976)[_97600]);
        memcpy(&_97602, &_97601, sizeof(_97602));
        cont_97605 = aie::load_v<8>(_97602);
        p_cont_97605 = cont_97605;
        goto cont_97603;
    }
cont_97603: {
        cont_97605 = p_cont_97605;
        _97606 = *line1_idx_97504;
        _97608 = (_97606);
        _97609 = (8 + _97608);
        (*line1_idx_97504 = _97609);
        cont_97613 = aie::shuffle_up_fill(cont_97605, cont_97532, 1);
        p_cont_97613 = cont_97613;
        goto cont_97611;
    }
cont_97611: {
        cont_97613 = p_cont_97613;
        cont_97532.insert(0, cont_97613);
        goto cont_97614;
    }
cont_97614: {
        _97616 = *acc_97591;
        _97618 = (_97616);
        cont_97621 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97618, cont_97552, 0, cont_97613, 0);
        p_cont_97621 = cont_97621;
        goto cont_97619;
    }
cont_97619: {
        cont_97621 = p_cont_97621;
        (*acc_97591 = cont_97621);
        _97623 = *line2_idx_97509;
        _97627 = (_97623);
        _97625 = (cur_lbuf_cnt_97038 % 3);
        _97626 = (1024 * _97625);
        _97628 = (_97626 + _97627);
        _97629 = (&(cont_96976)[_97628]);
        memcpy(&_97630, &_97629, sizeof(_97630));
        cont_97633 = aie::load_v<8>(_97630);
        p_cont_97633 = cont_97633;
        goto cont_97631;
    }
cont_97631: {
        cont_97633 = p_cont_97633;
        (*data_slice2_97525 = cont_97633);
        _97635 = *line2_idx_97509;
        _97637 = (_97635);
        _97638 = (8 + _97637);
        (*line2_idx_97509 = _97638);
        cont_97642 = aie::shuffle_up_fill(cont_97633, cont_97535, 1);
        p_cont_97642 = cont_97642;
        goto cont_97640;
    }
cont_97640: {
        cont_97642 = p_cont_97642;
        cont_97535.insert(0, cont_97642);
        goto cont_97643;
    }
cont_97643: {
        _97645 = *acc_97591;
        _97647 = *data_slice2_97525;
        _97649 = (_97645);
        _97650 = (_97647);
        cont_97653 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97649, cont_97555, 0, _97650, 0);
        p_cont_97653 = cont_97653;
        goto cont_97651;
    }
cont_97651: {
        cont_97653 = p_cont_97653;
        (*acc_97591 = cont_97653);
        cont_97657 = srs(cont_97653, 0);
        p_cont_97657 = cont_97657;
        goto cont_97655;
    }
cont_97655: {
        cont_97657 = p_cont_97657;
        writeincr(_79446_96967, cont_97657);
        goto continue_wrapper_97658;
    }
continue_wrapper_97658: {
        goto pipeline_continue_97660;
    }
branch_true_97309: {
        (*line0_idx_97313 = 0);
        (*line1_idx_97318 = 0);
        (*line2_idx_97323 = 0);
        cont_97329 = aie::zeros<i32, 8>();
        p_cont_97329 = cont_97329;
        goto cont_97327;
    }
cont_97327: {
        cont_97329 = p_cont_97329;
        cont_97332 = aie::zeros<i32, 8>();
        p_cont_97332 = cont_97332;
        goto cont_97330;
    }
cont_97330: {
        cont_97332 = p_cont_97332;
        cont_97335 = aie::zeros<i32, 8>();
        p_cont_97335 = cont_97335;
        goto cont_97333;
    }
cont_97333: {
        cont_97335 = p_cont_97335;
        (*data_slice2_97339 = cont_97335);
        cont_97343 = aie::zeros<i32, 8>();
        p_cont_97343 = cont_97343;
        goto cont_97341;
    }
cont_97341: {
        cont_97343 = p_cont_97343;
        cont_97346 = aie::zeros<i32, 8>();
        p_cont_97346 = cont_97346;
        goto cont_97344;
    }
cont_97344: {
        cont_97346 = p_cont_97346;
        cont_97349 = aie::zeros<i32, 8>();
        p_cont_97349 = cont_97349;
        goto cont_97347;
    }
cont_97347: {
        cont_97349 = p_cont_97349;
        int i97350;
        for (i97350 = 0; i97350 < 128; i97350++)
        chess_prepare_for_pipelining {
            p_for_body_97360 = i97350;
            goto for_body_97358;
            pipeline_continue_97464: continue;
        }
        goto continue_wrapper_97273;
    }
for_body_97358: {
        for_body_97360 = p_for_body_97360;
        cont_97363 = aie::load_v<8>(_97110);
        p_cont_97363 = cont_97363;
        goto cont_97361;
    }
cont_97361: {
        cont_97363 = p_cont_97363;
        cont_97366 = aie::load_v<8>(_97117);
        p_cont_97366 = cont_97366;
        goto cont_97364;
    }
cont_97364: {
        cont_97366 = p_cont_97366;
        cont_97369 = aie::load_v<8>(_97122);
        p_cont_97369 = cont_97369;
        goto cont_97367;
    }
cont_97367: {
        cont_97369 = p_cont_97369;
        _97370 = *line0_idx_97313;
        _97372 = (_97370);
        _97373 = (1024 + _97372);
        _97374 = (&(cont_96976)[_97373]);
        memcpy(&_97375, &_97374, sizeof(_97375));
        cont_97378 = aie::load_v<8>(_97375);
        p_cont_97378 = cont_97378;
        goto cont_97376;
    }
cont_97376: {
        cont_97378 = p_cont_97378;
        _97379 = *line0_idx_97313;
        _97381 = (_97379);
        _97382 = (8 + _97381);
        (*line0_idx_97313 = _97382);
        cont_97386 =  (cont_97378);
        p_cont_97386 = cont_97386;
        goto cont_97384;
    }
cont_97384: {
        cont_97386 = p_cont_97386;
        cont_97389 =  (cont_97343);
        p_cont_97389 = cont_97389;
        goto cont_97387;
    }
cont_97387: {
        cont_97389 = p_cont_97389;
        cont_97392 = aie::shuffle_up_fill(cont_97386, cont_97389, 1);
        p_cont_97392 = cont_97392;
        goto cont_97390;
    }
cont_97390: {
        cont_97392 = p_cont_97392;
        cont_97343.insert(0, cont_97392);
        goto cont_97393;
    }
cont_97393: {
        cont_97397 =  (cont_97392);
        p_cont_97397 = cont_97397;
        goto cont_97395;
    }
cont_97395: {
        cont_97397 = p_cont_97397;
        cont_97400 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_97363, 0, cont_97397, 0);
        p_cont_97400 = cont_97400;
        goto cont_97398;
    }
cont_97398: {
        cont_97400 = p_cont_97400;
        (*acc_97402 = cont_97400);
        _97404 = *line1_idx_97318;
        _97406 = (_97404);
        _97407 = (&(cont_96976)[_97406]);
        memcpy(&_97408, &_97407, sizeof(_97408));
        cont_97411 = aie::load_v<8>(_97408);
        p_cont_97411 = cont_97411;
        goto cont_97409;
    }
cont_97409: {
        cont_97411 = p_cont_97411;
        _97412 = *line1_idx_97318;
        _97414 = (_97412);
        _97415 = (8 + _97414);
        (*line1_idx_97318 = _97415);
        cont_97419 = aie::shuffle_up_fill(cont_97411, cont_97346, 1);
        p_cont_97419 = cont_97419;
        goto cont_97417;
    }
cont_97417: {
        cont_97419 = p_cont_97419;
        cont_97346.insert(0, cont_97419);
        goto cont_97420;
    }
cont_97420: {
        _97422 = *acc_97402;
        _97424 = (_97422);
        cont_97427 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97424, cont_97366, 0, cont_97419, 0);
        p_cont_97427 = cont_97427;
        goto cont_97425;
    }
cont_97425: {
        cont_97427 = p_cont_97427;
        (*acc_97402 = cont_97427);
        _97429 = *line2_idx_97323;
        _97431 = (_97429);
        _97432 = (1024 + _97431);
        _97433 = (&(cont_96976)[_97432]);
        memcpy(&_97434, &_97433, sizeof(_97434));
        cont_97437 = aie::load_v<8>(_97434);
        p_cont_97437 = cont_97437;
        goto cont_97435;
    }
cont_97435: {
        cont_97437 = p_cont_97437;
        (*data_slice2_97339 = cont_97437);
        _97439 = *line2_idx_97323;
        _97441 = (_97439);
        _97442 = (8 + _97441);
        (*line2_idx_97323 = _97442);
        cont_97446 = aie::shuffle_up_fill(cont_97437, cont_97349, 1);
        p_cont_97446 = cont_97446;
        goto cont_97444;
    }
cont_97444: {
        cont_97446 = p_cont_97446;
        cont_97349.insert(0, cont_97446);
        goto cont_97447;
    }
cont_97447: {
        _97449 = *acc_97402;
        _97451 = *data_slice2_97339;
        _97453 = (_97449);
        _97454 = (_97451);
        cont_97457 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97453, cont_97369, 0, _97454, 0);
        p_cont_97457 = cont_97457;
        goto cont_97455;
    }
cont_97455: {
        cont_97457 = p_cont_97457;
        (*acc_97402 = cont_97457);
        cont_97461 = srs(cont_97457, 0);
        p_cont_97461 = cont_97461;
        goto cont_97459;
    }
cont_97459: {
        cont_97461 = p_cont_97461;
        writeincr(_79446_96967, cont_97461);
        goto continue_wrapper_97462;
    }
continue_wrapper_97462: {
        goto pipeline_continue_97464;
    }
branch_true_97040: {
        (*line0_idx_97055 = 0);
        (*line1_idx_97060 = 0);
        (*line2_idx_97065 = 0);
        cont_97071 = aie::zeros<i32, 8>();
        p_cont_97071 = cont_97071;
        goto cont_97069;
    }
cont_97069: {
        cont_97071 = p_cont_97071;
        cont_97074 = aie::zeros<i32, 8>();
        p_cont_97074 = cont_97074;
        goto cont_97072;
    }
cont_97072: {
        cont_97074 = p_cont_97074;
        cont_97077 = aie::zeros<i32, 8>();
        p_cont_97077 = cont_97077;
        goto cont_97075;
    }
cont_97075: {
        cont_97077 = p_cont_97077;
        (*data_slice2_97081 = cont_97077);
        cont_97085 = aie::zeros<i32, 8>();
        p_cont_97085 = cont_97085;
        goto cont_97083;
    }
cont_97083: {
        cont_97085 = p_cont_97085;
        cont_97088 = aie::zeros<i32, 8>();
        p_cont_97088 = cont_97088;
        goto cont_97086;
    }
cont_97086: {
        cont_97088 = p_cont_97088;
        cont_97091 = aie::zeros<i32, 8>();
        p_cont_97091 = cont_97091;
        goto cont_97089;
    }
cont_97089: {
        cont_97091 = p_cont_97091;
        int i97092;
        for (i97092 = 0; i97092 < 128; i97092++)
        chess_prepare_for_pipelining {
            p_for_body_97102 = i97092;
            goto for_body_97100;
            pipeline_continue_97270: continue;
        }
        goto continue_wrapper_97273;
    }
for_body_97100: {
        for_body_97102 = p_for_body_97102;
        cont_97113 = aie::load_v<8>(_97110);
        p_cont_97113 = cont_97113;
        goto cont_97111;
    }
cont_97111: {
        cont_97113 = p_cont_97113;
        cont_97120 = aie::load_v<8>(_97117);
        p_cont_97120 = cont_97120;
        goto cont_97118;
    }
cont_97118: {
        cont_97120 = p_cont_97120;
        cont_97125 = aie::load_v<8>(_97122);
        p_cont_97125 = cont_97125;
        goto cont_97123;
    }
cont_97123: {
        cont_97125 = p_cont_97125;
        _97126 = *line0_idx_97055;
        _97128 = (_97126);
        _97129 = (&(cont_96976)[_97128]);
        memcpy(&_97130, &_97129, sizeof(_97130));
        cont_97133 = aie::load_v<8>(_97130);
        p_cont_97133 = cont_97133;
        goto cont_97131;
    }
cont_97131: {
        cont_97133 = p_cont_97133;
        _97138 = *line0_idx_97055;
        _97140 = (_97138);
        _97141 = (8 + _97140);
        (*line0_idx_97055 = _97141);
        cont_97145 =  (cont_97133);
        p_cont_97145 = cont_97145;
        goto cont_97143;
    }
cont_97143: {
        cont_97145 = p_cont_97145;
        cont_97148 =  (cont_97085);
        p_cont_97148 = cont_97148;
        goto cont_97146;
    }
cont_97146: {
        cont_97148 = p_cont_97148;
        cont_97158 = aie::shuffle_up_fill(cont_97145, cont_97148, 1);
        p_cont_97158 = cont_97158;
        goto cont_97156;
    }
cont_97156: {
        cont_97158 = p_cont_97158;
        cont_97085.insert(0, cont_97158);
        goto cont_97166;
    }
cont_97166: {
        cont_97170 =  (cont_97158);
        p_cont_97170 = cont_97170;
        goto cont_97168;
    }
cont_97168: {
        cont_97170 = p_cont_97170;
        cont_97184 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_97113, 0, cont_97170, 0);
        p_cont_97184 = cont_97184;
        goto cont_97182;
    }
cont_97182: {
        cont_97184 = p_cont_97184;
        (*acc_97186 = cont_97184);
        _97188 = *line1_idx_97060;
        _97190 = (_97188);
        _97191 = (&(cont_96976)[_97190]);
        memcpy(&_97192, &_97191, sizeof(_97192));
        cont_97195 = aie::load_v<8>(_97192);
        p_cont_97195 = cont_97195;
        goto cont_97193;
    }
cont_97193: {
        cont_97195 = p_cont_97195;
        _97196 = *line1_idx_97060;
        _97198 = (_97196);
        _97199 = (8 + _97198);
        (*line1_idx_97060 = _97199);
        cont_97203 = aie::shuffle_up_fill(cont_97195, cont_97088, 1);
        p_cont_97203 = cont_97203;
        goto cont_97201;
    }
cont_97201: {
        cont_97203 = p_cont_97203;
        cont_97088.insert(0, cont_97203);
        goto cont_97204;
    }
cont_97204: {
        _97218 = *acc_97186;
        _97220 = (_97218);
        cont_97223 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97220, cont_97120, 0, cont_97203, 0);
        p_cont_97223 = cont_97223;
        goto cont_97221;
    }
cont_97221: {
        cont_97223 = p_cont_97223;
        (*acc_97186 = cont_97223);
        _97225 = *line2_idx_97065;
        _97227 = (_97225);
        _97228 = (&(cont_96976)[_97227]);
        memcpy(&_97229, &_97228, sizeof(_97229));
        cont_97232 = aie::load_v<8>(_97229);
        p_cont_97232 = cont_97232;
        goto cont_97230;
    }
cont_97230: {
        cont_97232 = p_cont_97232;
        (*data_slice2_97081 = cont_97232);
        _97234 = *line2_idx_97065;
        _97236 = (_97234);
        _97237 = (8 + _97236);
        (*line2_idx_97065 = _97237);
        cont_97241 = aie::shuffle_up_fill(cont_97232, cont_97091, 1);
        p_cont_97241 = cont_97241;
        goto cont_97239;
    }
cont_97239: {
        cont_97241 = p_cont_97241;
        cont_97091.insert(0, cont_97241);
        goto cont_97242;
    }
cont_97242: {
        _97244 = *acc_97186;
        _97246 = *data_slice2_97081;
        _97248 = (_97244);
        _97249 = (_97246);
        cont_97252 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_97248, cont_97125, 0, _97249, 0);
        p_cont_97252 = cont_97252;
        goto cont_97250;
    }
cont_97250: {
        cont_97252 = p_cont_97252;
        (*acc_97186 = cont_97252);
        cont_97262 = srs(cont_97252, 0);
        p_cont_97262 = cont_97262;
        goto cont_97260;
    }
cont_97260: {
        cont_97262 = p_cont_97262;
        writeincr(_79446_96967, cont_97262);
        goto continue_wrapper_97268;
    }
continue_wrapper_97268: {
        goto pipeline_continue_97270;
    }
continue_wrapper_97273: {
        goto pipeline_continue_97275;
    }
_79446_97704: {
        return;
    }
}


    

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

void _125206(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _126155(input_stream<channel8_i32_30>* __restrict, input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _125254(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
i32 g_lbuf_cnt_149992  = 0;
alignas(aie::vector_decl_align) array_31 g_cont_150560  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_cont_150567  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });

void _125254(input_stream<channel8_i32_30>* __restrict _125254_149981, output_stream<channel8_i32_30>* __restrict _125254_149982) {
    i32   for_body_149998;
    i32 p_for_body_149998;
    aie::vector<i32, 8>   cont_150001;
    aie::vector<i32, 8> p_cont_150001;
    aie::vector<i32, 8>   cont_150516;
    aie::vector<i32, 8> p_cont_150516;
    aie::vector<i32, 8>   cont_150519;
    aie::vector<i32, 8> p_cont_150519;
    aie::vector<i32, 8>   cont_150522;
    aie::vector<i32, 8> p_cont_150522;
    aie::vector<i32, 8>   cont_150525;
    aie::vector<i32, 8> p_cont_150525;
    aie::vector<i32, 8>   cont_150533;
    aie::vector<i32, 8> p_cont_150533;
    aie::vector<i32, 8>   cont_150541;
    aie::vector<i32, 8> p_cont_150541;
    i32   for_body_150557;
    i32 p_for_body_150557;
    array_31*   cont_150560;
    array_31* p_cont_150560;
    aie::vector<i32, 8>   cont_150564;
    aie::vector<i32, 8> p_cont_150564;
    array_31*   cont_150567;
    array_31* p_cont_150567;
    aie::vector<i32, 8>   cont_150571;
    aie::vector<i32, 8> p_cont_150571;
    array_31*   cont_150574;
    array_31* p_cont_150574;
    aie::vector<i32, 8>   cont_150578;
    aie::vector<i32, 8> p_cont_150578;
    aie::vector<i32, 8>   cont_150590;
    aie::vector<i32, 8> p_cont_150590;
    aie::vector<i32, 8>   cont_150601;
    aie::vector<i32, 8> p_cont_150601;
    aie::vector<i32, 8>   cont_150604;
    aie::vector<i32, 8> p_cont_150604;
    aie::accum<u64, 8>   cont_150608;
    aie::accum<u64, 8> p_cont_150608;
    aie::vector<i32, 8>   cont_150624;
    aie::vector<i32, 8> p_cont_150624;
    aie::vector<i32, 8>   cont_150635;
    aie::vector<i32, 8> p_cont_150635;
    aie::accum<u64, 8>   cont_150642;
    aie::accum<u64, 8> p_cont_150642;
    aie::vector<i32, 8>   cont_150654;
    aie::vector<i32, 8> p_cont_150654;
    aie::vector<i32, 8>   cont_150665;
    aie::vector<i32, 8> p_cont_150665;
    aie::accum<u64, 8>   cont_150672;
    aie::accum<u64, 8> p_cont_150672;
    aie::vector<i32, 8>   cont_150676;
    aie::vector<i32, 8> p_cont_150676;
    aie::vector<i32, 8>   cont_150314;
    aie::vector<i32, 8> p_cont_150314;
    aie::vector<i32, 8>   cont_150317;
    aie::vector<i32, 8> p_cont_150317;
    aie::vector<i32, 8>   cont_150320;
    aie::vector<i32, 8> p_cont_150320;
    aie::vector<i32, 8>   cont_150323;
    aie::vector<i32, 8> p_cont_150323;
    aie::vector<i32, 8>   cont_150331;
    aie::vector<i32, 8> p_cont_150331;
    aie::vector<i32, 8>   cont_150339;
    aie::vector<i32, 8> p_cont_150339;
    i32   for_body_150355;
    i32 p_for_body_150355;
    array_31*   cont_150358;
    array_31* p_cont_150358;
    aie::vector<i32, 8>   cont_150362;
    aie::vector<i32, 8> p_cont_150362;
    array_31*   cont_150365;
    array_31* p_cont_150365;
    aie::vector<i32, 8>   cont_150369;
    aie::vector<i32, 8> p_cont_150369;
    array_31*   cont_150372;
    array_31* p_cont_150372;
    aie::vector<i32, 8>   cont_150376;
    aie::vector<i32, 8> p_cont_150376;
    aie::vector<i32, 8>   cont_150385;
    aie::vector<i32, 8> p_cont_150385;
    aie::vector<i32, 8>   cont_150396;
    aie::vector<i32, 8> p_cont_150396;
    aie::vector<i32, 8>   cont_150399;
    aie::vector<i32, 8> p_cont_150399;
    aie::accum<u64, 8>   cont_150403;
    aie::accum<u64, 8> p_cont_150403;
    aie::vector<i32, 8>   cont_150414;
    aie::vector<i32, 8> p_cont_150414;
    aie::vector<i32, 8>   cont_150425;
    aie::vector<i32, 8> p_cont_150425;
    aie::accum<u64, 8>   cont_150432;
    aie::accum<u64, 8> p_cont_150432;
    aie::vector<i32, 8>   cont_150442;
    aie::vector<i32, 8> p_cont_150442;
    aie::vector<i32, 8>   cont_150453;
    aie::vector<i32, 8> p_cont_150453;
    aie::accum<u64, 8>   cont_150460;
    aie::accum<u64, 8> p_cont_150460;
    aie::vector<i32, 8>   cont_150464;
    aie::vector<i32, 8> p_cont_150464;
    aie::vector<i32, 8>   cont_150059;
    aie::vector<i32, 8> p_cont_150059;
    aie::vector<i32, 8>   cont_150062;
    aie::vector<i32, 8> p_cont_150062;
    aie::vector<i32, 8>   cont_150065;
    aie::vector<i32, 8> p_cont_150065;
    aie::vector<i32, 8>   cont_150068;
    aie::vector<i32, 8> p_cont_150068;
    aie::vector<i32, 8>   cont_150076;
    aie::vector<i32, 8> p_cont_150076;
    aie::vector<i32, 8>   cont_150084;
    aie::vector<i32, 8> p_cont_150084;
    i32   for_body_150100;
    i32 p_for_body_150100;
    array_31*   cont_150108;
    array_31* p_cont_150108;
    aie::vector<i32, 8>   cont_150117;
    aie::vector<i32, 8> p_cont_150117;
    array_31*   cont_150122;
    array_31* p_cont_150122;
    aie::vector<i32, 8>   cont_150126;
    aie::vector<i32, 8> p_cont_150126;
    array_31*   cont_150129;
    array_31* p_cont_150129;
    aie::vector<i32, 8>   cont_150133;
    aie::vector<i32, 8> p_cont_150133;
    aie::vector<i32, 8>   cont_150141;
    aie::vector<i32, 8> p_cont_150141;
    aie::vector<i32, 8>   cont_150156;
    aie::vector<i32, 8> p_cont_150156;
    aie::vector<i32, 8>   cont_150166;
    aie::vector<i32, 8> p_cont_150166;
    aie::accum<u64, 8>   cont_150182;
    aie::accum<u64, 8> p_cont_150182;
    aie::vector<i32, 8>   cont_150193;
    aie::vector<i32, 8> p_cont_150193;
    aie::vector<i32, 8>   cont_150204;
    aie::vector<i32, 8> p_cont_150204;
    aie::accum<u64, 8>   cont_150223;
    aie::accum<u64, 8> p_cont_150223;
    aie::vector<i32, 8>   cont_150232;
    aie::vector<i32, 8> p_cont_150232;
    aie::vector<i32, 8>   cont_150243;
    aie::vector<i32, 8> p_cont_150243;
    aie::accum<u64, 8>   cont_150250;
    aie::accum<u64, 8> p_cont_150250;
    aie::vector<i32, 8>   cont_150260;
    aie::vector<i32, 8> p_cont_150260;
    i32 _149993;
    i32* _150007;
    i32 _150015;
    i32 _150010;
    i32 lbuf_seg_150012;
    i32 _150013;
    i32 lbuff_idx_150016;
    i32* _150017;
    i32 _150025;
    i32 cur_lbuf_cnt_150026;
    bool _150027;
    bool _150293;
    i32 _150034;
    i32 _150037;
    i32 _150038;
    i32 line0_idx_150500_slot;
    i32* line0_idx_150500 = &line0_idx_150500_slot;
    i32 line1_idx_150505_slot;
    i32* line1_idx_150505 = &line1_idx_150505_slot;
    i32 line2_idx_150510_slot;
    i32* line2_idx_150510 = &line2_idx_150510_slot;
    aie::vector<i32, 8> prev_slice0_150529_slot;
    aie::vector<i32, 8>* prev_slice0_150529 = &prev_slice0_150529_slot;
    aie::vector<i32, 8> prev_slice1_150537_slot;
    aie::vector<i32, 8>* prev_slice1_150537 = &prev_slice1_150537_slot;
    aie::vector<i32, 8> prev_slice2_150553_slot;
    aie::vector<i32, 8>* prev_slice2_150553 = &prev_slice2_150553_slot;
    i32* _150561;
    i32* _150568;
    i32* _150575;
    i32 _150579;
    i32 _150584;
    i32 _150581;
    i32 _150582;
    i32 _150583;
    i32 _150585;
    i32* _150586;
    i32* _150587;
    i32 _150591;
    i32 _150593;
    i32 _150594;
    aie::vector<i32, 8> _150596;
    aie::vector<i32, 8> _150598;
    aie::accum<u64, 8> acc_150610_slot;
    aie::accum<u64, 8>* acc_150610 = &acc_150610_slot;
    i32 _150612;
    i32 _150618;
    i32 _150615;
    i32 _150616;
    i32 _150617;
    i32 _150619;
    i32* _150620;
    i32* _150621;
    i32 _150625;
    i32 _150627;
    i32 _150628;
    aie::vector<i32, 8> _150630;
    aie::vector<i32, 8> _150632;
    aie::accum<u64, 8> _150637;
    aie::accum<u64, 8> _150639;
    i32 _150644;
    i32 _150648;
    i32 _150646;
    i32 _150647;
    i32 _150649;
    i32* _150650;
    i32* _150651;
    i32 _150655;
    i32 _150657;
    i32 _150658;
    aie::vector<i32, 8> _150660;
    aie::vector<i32, 8> _150662;
    aie::accum<u64, 8> _150667;
    aie::accum<u64, 8> _150669;
    i32 line0_idx_150298_slot;
    i32* line0_idx_150298 = &line0_idx_150298_slot;
    i32 line1_idx_150303_slot;
    i32* line1_idx_150303 = &line1_idx_150303_slot;
    i32 line2_idx_150308_slot;
    i32* line2_idx_150308 = &line2_idx_150308_slot;
    aie::vector<i32, 8> prev_slice0_150327_slot;
    aie::vector<i32, 8>* prev_slice0_150327 = &prev_slice0_150327_slot;
    aie::vector<i32, 8> prev_slice1_150335_slot;
    aie::vector<i32, 8>* prev_slice1_150335 = &prev_slice1_150335_slot;
    aie::vector<i32, 8> prev_slice2_150351_slot;
    aie::vector<i32, 8>* prev_slice2_150351 = &prev_slice2_150351_slot;
    i32* _150359;
    i32* _150366;
    i32* _150373;
    i32 _150377;
    i32 _150379;
    i32 _150380;
    i32* _150381;
    i32* _150382;
    i32 _150386;
    i32 _150388;
    i32 _150389;
    aie::vector<i32, 8> _150391;
    aie::vector<i32, 8> _150393;
    aie::accum<u64, 8> acc_150405_slot;
    aie::accum<u64, 8>* acc_150405 = &acc_150405_slot;
    i32 _150407;
    i32 _150409;
    i32* _150410;
    i32* _150411;
    i32 _150415;
    i32 _150417;
    i32 _150418;
    aie::vector<i32, 8> _150420;
    aie::vector<i32, 8> _150422;
    aie::accum<u64, 8> _150427;
    aie::accum<u64, 8> _150429;
    i32 _150434;
    i32 _150436;
    i32 _150437;
    i32* _150438;
    i32* _150439;
    i32 _150443;
    i32 _150445;
    i32 _150446;
    aie::vector<i32, 8> _150448;
    aie::vector<i32, 8> _150450;
    aie::accum<u64, 8> _150455;
    aie::accum<u64, 8> _150457;
    i32 line0_idx_150043_slot;
    i32* line0_idx_150043 = &line0_idx_150043_slot;
    i32 line1_idx_150048_slot;
    i32* line1_idx_150048 = &line1_idx_150048_slot;
    i32 line2_idx_150053_slot;
    i32* line2_idx_150053 = &line2_idx_150053_slot;
    aie::vector<i32, 8> prev_slice0_150072_slot;
    aie::vector<i32, 8>* prev_slice0_150072 = &prev_slice0_150072_slot;
    aie::vector<i32, 8> prev_slice1_150080_slot;
    aie::vector<i32, 8>* prev_slice1_150080 = &prev_slice1_150080_slot;
    aie::vector<i32, 8> prev_slice2_150096_slot;
    aie::vector<i32, 8>* prev_slice2_150096 = &prev_slice2_150096_slot;
    i32* _150114;
    i32* _150123;
    i32* _150130;
    i32 _150134;
    i32 _150136;
    i32* _150137;
    i32* _150138;
    i32 _150146;
    i32 _150148;
    i32 _150149;
    aie::vector<i32, 8> _150151;
    aie::vector<i32, 8> _150153;
    aie::accum<u64, 8> acc_150184_slot;
    aie::accum<u64, 8>* acc_150184 = &acc_150184_slot;
    i32 _150186;
    i32 _150188;
    i32* _150189;
    i32* _150190;
    i32 _150194;
    i32 _150196;
    i32 _150197;
    aie::vector<i32, 8> _150199;
    aie::vector<i32, 8> _150201;
    aie::accum<u64, 8> _150218;
    aie::accum<u64, 8> _150220;
    i32 _150225;
    i32 _150227;
    i32* _150228;
    i32* _150229;
    i32 _150233;
    i32 _150235;
    i32 _150236;
    aie::vector<i32, 8> _150238;
    aie::vector<i32, 8> _150240;
    aie::accum<u64, 8> _150245;
    aie::accum<u64, 8> _150247;
    {
        _149993 = *&g_lbuf_cnt_149992;
        _150007 = ((i32*) 0);
        int i149983;
        for (i149983 = 0; i149983 < 128; i149983++)
        chess_prepare_for_pipelining {
            p_for_body_149998 = i149983;
            goto for_body_149996;
            pipeline_continue_150020: continue;
        }
        goto for_break_150023;
    }
for_body_149996: {
        for_body_149998 = p_for_body_149998;
        cont_150001 = readincr_v<8>(_125254_149981);
        p_cont_150001 = cont_150001;
        goto cont_149999;
    }
cont_149999: {
        cont_150001 = p_cont_150001;
        _150015 = (8 * for_body_149998);
        _150010 = (_149993);
        lbuf_seg_150012 = (_150010 % 3);
        _150013 = (1024 * lbuf_seg_150012);
        lbuff_idx_150016 = (_150013 + _150015);
        _150017 = (&(_150007)[lbuff_idx_150016]);
        aie::store_v(_150017, cont_150001);
        goto continue_wrapper_150018;
    }
continue_wrapper_150018: {
        goto pipeline_continue_150020;
    }
for_break_150023: {
        _150025 = *&g_lbuf_cnt_149992;
        cur_lbuf_cnt_150026 = (_150025);
        _150027 = (cur_lbuf_cnt_150026 == 0);
        _150034 = *&g_lbuf_cnt_149992;
        _150037 = (_150034);
        _150038 = (1 + _150037);
        (*&g_lbuf_cnt_149992 = _150038);
        if (_150027) goto branch_true_150028; else goto branch_false_150292;
    }
branch_false_150292: {
        _150293 = (cur_lbuf_cnt_150026 == 1);
        if (_150293) goto branch_true_150294; else goto branch_false_150496;
    }
branch_false_150496: {
        (*line0_idx_150500 = 0);
        (*line1_idx_150505 = 0);
        (*line2_idx_150510 = 0);
        cont_150516 = aie::zeros<i32, 8>();
        p_cont_150516 = cont_150516;
        goto cont_150514;
    }
cont_150514: {
        cont_150516 = p_cont_150516;
        cont_150519 = aie::zeros<i32, 8>();
        p_cont_150519 = cont_150519;
        goto cont_150517;
    }
cont_150517: {
        cont_150519 = p_cont_150519;
        cont_150522 = aie::zeros<i32, 8>();
        p_cont_150522 = cont_150522;
        goto cont_150520;
    }
cont_150520: {
        cont_150522 = p_cont_150522;
        cont_150525 = aie::zeros<i32, 8>();
        p_cont_150525 = cont_150525;
        goto cont_150523;
    }
cont_150523: {
        cont_150525 = p_cont_150525;
        (*prev_slice0_150529 = cont_150525);
        cont_150533 = aie::zeros<i32, 8>();
        p_cont_150533 = cont_150533;
        goto cont_150531;
    }
cont_150531: {
        cont_150533 = p_cont_150533;
        (*prev_slice1_150537 = cont_150533);
        cont_150541 = aie::zeros<i32, 8>();
        p_cont_150541 = cont_150541;
        goto cont_150539;
    }
cont_150539: {
        cont_150541 = p_cont_150541;
        (*prev_slice2_150553 = cont_150541);
        int i150542;
        for (i150542 = 0; i150542 < 128; i150542++)
        chess_prepare_for_pipelining {
            p_for_body_150557 = i150542;
            goto for_body_150555;
            pipeline_continue_150679: continue;
        }
        goto _125254_150720;
    }
for_body_150555: {
        for_body_150557 = p_for_body_150557;
        p_cont_150560 = &g_cont_150560;
        goto cont_150558;
    }
cont_150558: {
        cont_150560 = p_cont_150560;
        _150561 = (&(cont_150560)->e[0]);
        cont_150564 = aie::load_v<8>(_150561);
        p_cont_150564 = cont_150564;
        goto cont_150562;
    }
cont_150562: {
        cont_150564 = p_cont_150564;
        p_cont_150567 = &g_cont_150567;
        goto cont_150565;
    }
cont_150565: {
        cont_150567 = p_cont_150567;
        _150568 = (&(cont_150567)->e[0]);
        cont_150571 = aie::load_v<8>(_150568);
        p_cont_150571 = cont_150571;
        goto cont_150569;
    }
cont_150569: {
        cont_150571 = p_cont_150571;
        p_cont_150574 = &g_cont_150560;
        goto cont_150572;
    }
cont_150572: {
        cont_150574 = p_cont_150574;
        _150575 = (&(cont_150574)->e[0]);
        cont_150578 = aie::load_v<8>(_150575);
        p_cont_150578 = cont_150578;
        goto cont_150576;
    }
cont_150576: {
        cont_150578 = p_cont_150578;
        _150579 = *line0_idx_150500;
        _150584 = (_150579);
        _150581 = (1 + cur_lbuf_cnt_150026);
        _150582 = (_150581 % 3);
        _150583 = (1024 * _150582);
        _150585 = (_150583 + _150584);
        _150586 = (&(_150007)[_150585]);
        memcpy(&_150587, &_150586, sizeof(_150587));
        cont_150590 = aie::load_v<8>(_150587);
        p_cont_150590 = cont_150590;
        goto cont_150588;
    }
cont_150588: {
        cont_150590 = p_cont_150590;
        _150591 = *line0_idx_150500;
        _150593 = (_150591);
        _150594 = (8 + _150593);
        (*line0_idx_150500 = _150594);
        _150596 = *prev_slice0_150529;
        _150598 = (_150596);
        cont_150601 =  (_150598);
        p_cont_150601 = cont_150601;
        goto cont_150599;
    }
cont_150599: {
        cont_150601 = p_cont_150601;
        cont_150604 = aie::shuffle_up_fill(cont_150590, cont_150601, 1);
        p_cont_150604 = cont_150604;
        goto cont_150602;
    }
cont_150602: {
        cont_150604 = p_cont_150604;
        (*prev_slice0_150529 = cont_150604);
        cont_150608 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_150564, 0, cont_150604, 0);
        p_cont_150608 = cont_150608;
        goto cont_150606;
    }
cont_150606: {
        cont_150608 = p_cont_150608;
        (*acc_150610 = cont_150608);
        _150612 = *line1_idx_150505;
        _150618 = (_150612);
        _150615 = (2 + cur_lbuf_cnt_150026);
        _150616 = (_150615 % 3);
        _150617 = (1024 * _150616);
        _150619 = (_150617 + _150618);
        _150620 = (&(_150007)[_150619]);
        memcpy(&_150621, &_150620, sizeof(_150621));
        cont_150624 = aie::load_v<8>(_150621);
        p_cont_150624 = cont_150624;
        goto cont_150622;
    }
cont_150622: {
        cont_150624 = p_cont_150624;
        _150625 = *line1_idx_150505;
        _150627 = (_150625);
        _150628 = (8 + _150627);
        (*line1_idx_150505 = _150628);
        _150630 = *prev_slice1_150537;
        _150632 = (_150630);
        cont_150635 = aie::shuffle_up_fill(cont_150624, _150632, 1);
        p_cont_150635 = cont_150635;
        goto cont_150633;
    }
cont_150633: {
        cont_150635 = p_cont_150635;
        (*prev_slice1_150537 = cont_150635);
        _150637 = *acc_150610;
        _150639 = (_150637);
        cont_150642 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_150639, cont_150571, 0, cont_150635, 0);
        p_cont_150642 = cont_150642;
        goto cont_150640;
    }
cont_150640: {
        cont_150642 = p_cont_150642;
        (*acc_150610 = cont_150642);
        _150644 = *line2_idx_150510;
        _150648 = (_150644);
        _150646 = (cur_lbuf_cnt_150026 % 3);
        _150647 = (1024 * _150646);
        _150649 = (_150647 + _150648);
        _150650 = (&(_150007)[_150649]);
        memcpy(&_150651, &_150650, sizeof(_150651));
        cont_150654 = aie::load_v<8>(_150651);
        p_cont_150654 = cont_150654;
        goto cont_150652;
    }
cont_150652: {
        cont_150654 = p_cont_150654;
        _150655 = *line2_idx_150510;
        _150657 = (_150655);
        _150658 = (8 + _150657);
        (*line2_idx_150510 = _150658);
        _150660 = *prev_slice2_150553;
        _150662 = (_150660);
        cont_150665 = aie::shuffle_up_fill(cont_150654, _150662, 1);
        p_cont_150665 = cont_150665;
        goto cont_150663;
    }
cont_150663: {
        cont_150665 = p_cont_150665;
        (*prev_slice2_150553 = cont_150665);
        _150667 = *acc_150610;
        _150669 = (_150667);
        cont_150672 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_150669, cont_150578, 0, cont_150665, 0);
        p_cont_150672 = cont_150672;
        goto cont_150670;
    }
cont_150670: {
        cont_150672 = p_cont_150672;
        (*acc_150610 = cont_150672);
        cont_150676 = srs(cont_150672, 1);
        p_cont_150676 = cont_150676;
        goto cont_150674;
    }
cont_150674: {
        cont_150676 = p_cont_150676;
        writeincr(_125254_149982, cont_150676);
        goto continue_wrapper_150677;
    }
continue_wrapper_150677: {
        goto pipeline_continue_150679;
    }
branch_true_150294: {
        (*line0_idx_150298 = 0);
        (*line1_idx_150303 = 0);
        (*line2_idx_150308 = 0);
        cont_150314 = aie::zeros<i32, 8>();
        p_cont_150314 = cont_150314;
        goto cont_150312;
    }
cont_150312: {
        cont_150314 = p_cont_150314;
        cont_150317 = aie::zeros<i32, 8>();
        p_cont_150317 = cont_150317;
        goto cont_150315;
    }
cont_150315: {
        cont_150317 = p_cont_150317;
        cont_150320 = aie::zeros<i32, 8>();
        p_cont_150320 = cont_150320;
        goto cont_150318;
    }
cont_150318: {
        cont_150320 = p_cont_150320;
        cont_150323 = aie::zeros<i32, 8>();
        p_cont_150323 = cont_150323;
        goto cont_150321;
    }
cont_150321: {
        cont_150323 = p_cont_150323;
        (*prev_slice0_150327 = cont_150323);
        cont_150331 = aie::zeros<i32, 8>();
        p_cont_150331 = cont_150331;
        goto cont_150329;
    }
cont_150329: {
        cont_150331 = p_cont_150331;
        (*prev_slice1_150335 = cont_150331);
        cont_150339 = aie::zeros<i32, 8>();
        p_cont_150339 = cont_150339;
        goto cont_150337;
    }
cont_150337: {
        cont_150339 = p_cont_150339;
        (*prev_slice2_150351 = cont_150339);
        int i150340;
        for (i150340 = 0; i150340 < 128; i150340++)
        chess_prepare_for_pipelining {
            p_for_body_150355 = i150340;
            goto for_body_150353;
            pipeline_continue_150467: continue;
        }
        goto _125254_150720;
    }
for_body_150353: {
        for_body_150355 = p_for_body_150355;
        p_cont_150358 = &g_cont_150560;
        goto cont_150356;
    }
cont_150356: {
        cont_150358 = p_cont_150358;
        _150359 = (&(cont_150358)->e[0]);
        cont_150362 = aie::load_v<8>(_150359);
        p_cont_150362 = cont_150362;
        goto cont_150360;
    }
cont_150360: {
        cont_150362 = p_cont_150362;
        p_cont_150365 = &g_cont_150567;
        goto cont_150363;
    }
cont_150363: {
        cont_150365 = p_cont_150365;
        _150366 = (&(cont_150365)->e[0]);
        cont_150369 = aie::load_v<8>(_150366);
        p_cont_150369 = cont_150369;
        goto cont_150367;
    }
cont_150367: {
        cont_150369 = p_cont_150369;
        p_cont_150372 = &g_cont_150560;
        goto cont_150370;
    }
cont_150370: {
        cont_150372 = p_cont_150372;
        _150373 = (&(cont_150372)->e[0]);
        cont_150376 = aie::load_v<8>(_150373);
        p_cont_150376 = cont_150376;
        goto cont_150374;
    }
cont_150374: {
        cont_150376 = p_cont_150376;
        _150377 = *line0_idx_150298;
        _150379 = (_150377);
        _150380 = (1024 + _150379);
        _150381 = (&(_150007)[_150380]);
        memcpy(&_150382, &_150381, sizeof(_150382));
        cont_150385 = aie::load_v<8>(_150382);
        p_cont_150385 = cont_150385;
        goto cont_150383;
    }
cont_150383: {
        cont_150385 = p_cont_150385;
        _150386 = *line0_idx_150298;
        _150388 = (_150386);
        _150389 = (8 + _150388);
        (*line0_idx_150298 = _150389);
        _150391 = *prev_slice0_150327;
        _150393 = (_150391);
        cont_150396 =  (_150393);
        p_cont_150396 = cont_150396;
        goto cont_150394;
    }
cont_150394: {
        cont_150396 = p_cont_150396;
        cont_150399 = aie::shuffle_up_fill(cont_150385, cont_150396, 1);
        p_cont_150399 = cont_150399;
        goto cont_150397;
    }
cont_150397: {
        cont_150399 = p_cont_150399;
        (*prev_slice0_150327 = cont_150399);
        cont_150403 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_150362, 0, cont_150399, 0);
        p_cont_150403 = cont_150403;
        goto cont_150401;
    }
cont_150401: {
        cont_150403 = p_cont_150403;
        (*acc_150405 = cont_150403);
        _150407 = *line1_idx_150303;
        _150409 = (_150407);
        _150410 = (&(_150007)[_150409]);
        memcpy(&_150411, &_150410, sizeof(_150411));
        cont_150414 = aie::load_v<8>(_150411);
        p_cont_150414 = cont_150414;
        goto cont_150412;
    }
cont_150412: {
        cont_150414 = p_cont_150414;
        _150415 = *line1_idx_150303;
        _150417 = (_150415);
        _150418 = (8 + _150417);
        (*line1_idx_150303 = _150418);
        _150420 = *prev_slice1_150335;
        _150422 = (_150420);
        cont_150425 = aie::shuffle_up_fill(cont_150414, _150422, 1);
        p_cont_150425 = cont_150425;
        goto cont_150423;
    }
cont_150423: {
        cont_150425 = p_cont_150425;
        (*prev_slice1_150335 = cont_150425);
        _150427 = *acc_150405;
        _150429 = (_150427);
        cont_150432 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_150429, cont_150369, 0, cont_150425, 0);
        p_cont_150432 = cont_150432;
        goto cont_150430;
    }
cont_150430: {
        cont_150432 = p_cont_150432;
        (*acc_150405 = cont_150432);
        _150434 = *line2_idx_150308;
        _150436 = (_150434);
        _150437 = (1024 + _150436);
        _150438 = (&(_150007)[_150437]);
        memcpy(&_150439, &_150438, sizeof(_150439));
        cont_150442 = aie::load_v<8>(_150439);
        p_cont_150442 = cont_150442;
        goto cont_150440;
    }
cont_150440: {
        cont_150442 = p_cont_150442;
        _150443 = *line2_idx_150308;
        _150445 = (_150443);
        _150446 = (8 + _150445);
        (*line2_idx_150308 = _150446);
        _150448 = *prev_slice2_150351;
        _150450 = (_150448);
        cont_150453 = aie::shuffle_up_fill(cont_150442, _150450, 1);
        p_cont_150453 = cont_150453;
        goto cont_150451;
    }
cont_150451: {
        cont_150453 = p_cont_150453;
        (*prev_slice2_150351 = cont_150453);
        _150455 = *acc_150405;
        _150457 = (_150455);
        cont_150460 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_150457, cont_150376, 0, cont_150453, 0);
        p_cont_150460 = cont_150460;
        goto cont_150458;
    }
cont_150458: {
        cont_150460 = p_cont_150460;
        (*acc_150405 = cont_150460);
        cont_150464 = srs(cont_150460, 1);
        p_cont_150464 = cont_150464;
        goto cont_150462;
    }
cont_150462: {
        cont_150464 = p_cont_150464;
        writeincr(_125254_149982, cont_150464);
        goto continue_wrapper_150465;
    }
continue_wrapper_150465: {
        goto pipeline_continue_150467;
    }
branch_true_150028: {
        (*line0_idx_150043 = 0);
        (*line1_idx_150048 = 0);
        (*line2_idx_150053 = 0);
        cont_150059 = aie::zeros<i32, 8>();
        p_cont_150059 = cont_150059;
        goto cont_150057;
    }
cont_150057: {
        cont_150059 = p_cont_150059;
        cont_150062 = aie::zeros<i32, 8>();
        p_cont_150062 = cont_150062;
        goto cont_150060;
    }
cont_150060: {
        cont_150062 = p_cont_150062;
        cont_150065 = aie::zeros<i32, 8>();
        p_cont_150065 = cont_150065;
        goto cont_150063;
    }
cont_150063: {
        cont_150065 = p_cont_150065;
        cont_150068 = aie::zeros<i32, 8>();
        p_cont_150068 = cont_150068;
        goto cont_150066;
    }
cont_150066: {
        cont_150068 = p_cont_150068;
        (*prev_slice0_150072 = cont_150068);
        cont_150076 = aie::zeros<i32, 8>();
        p_cont_150076 = cont_150076;
        goto cont_150074;
    }
cont_150074: {
        cont_150076 = p_cont_150076;
        (*prev_slice1_150080 = cont_150076);
        cont_150084 = aie::zeros<i32, 8>();
        p_cont_150084 = cont_150084;
        goto cont_150082;
    }
cont_150082: {
        cont_150084 = p_cont_150084;
        (*prev_slice2_150096 = cont_150084);
        int i150085;
        for (i150085 = 0; i150085 < 128; i150085++)
        chess_prepare_for_pipelining {
            p_for_body_150100 = i150085;
            goto for_body_150098;
            pipeline_continue_150263: continue;
        }
        goto _125254_150720;
    }
for_body_150098: {
        for_body_150100 = p_for_body_150100;
        p_cont_150108 = &g_cont_150560;
        goto cont_150106;
    }
cont_150106: {
        cont_150108 = p_cont_150108;
        _150114 = (&(cont_150108)->e[0]);
        cont_150117 = aie::load_v<8>(_150114);
        p_cont_150117 = cont_150117;
        goto cont_150115;
    }
cont_150115: {
        cont_150117 = p_cont_150117;
        p_cont_150122 = &g_cont_150567;
        goto cont_150120;
    }
cont_150120: {
        cont_150122 = p_cont_150122;
        _150123 = (&(cont_150122)->e[0]);
        cont_150126 = aie::load_v<8>(_150123);
        p_cont_150126 = cont_150126;
        goto cont_150124;
    }
cont_150124: {
        cont_150126 = p_cont_150126;
        p_cont_150129 = &g_cont_150560;
        goto cont_150127;
    }
cont_150127: {
        cont_150129 = p_cont_150129;
        _150130 = (&(cont_150129)->e[0]);
        cont_150133 = aie::load_v<8>(_150130);
        p_cont_150133 = cont_150133;
        goto cont_150131;
    }
cont_150131: {
        cont_150133 = p_cont_150133;
        _150134 = *line0_idx_150043;
        _150136 = (_150134);
        _150137 = (&(_150007)[_150136]);
        memcpy(&_150138, &_150137, sizeof(_150138));
        cont_150141 = aie::load_v<8>(_150138);
        p_cont_150141 = cont_150141;
        goto cont_150139;
    }
cont_150139: {
        cont_150141 = p_cont_150141;
        _150146 = *line0_idx_150043;
        _150148 = (_150146);
        _150149 = (8 + _150148);
        (*line0_idx_150043 = _150149);
        _150151 = *prev_slice0_150072;
        _150153 = (_150151);
        cont_150156 =  (_150153);
        p_cont_150156 = cont_150156;
        goto cont_150154;
    }
cont_150154: {
        cont_150156 = p_cont_150156;
        cont_150166 = aie::shuffle_up_fill(cont_150141, cont_150156, 1);
        p_cont_150166 = cont_150166;
        goto cont_150164;
    }
cont_150164: {
        cont_150166 = p_cont_150166;
        (*prev_slice0_150072 = cont_150166);
        cont_150182 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_150117, 0, cont_150166, 0);
        p_cont_150182 = cont_150182;
        goto cont_150180;
    }
cont_150180: {
        cont_150182 = p_cont_150182;
        (*acc_150184 = cont_150182);
        _150186 = *line1_idx_150048;
        _150188 = (_150186);
        _150189 = (&(_150007)[_150188]);
        memcpy(&_150190, &_150189, sizeof(_150190));
        cont_150193 = aie::load_v<8>(_150190);
        p_cont_150193 = cont_150193;
        goto cont_150191;
    }
cont_150191: {
        cont_150193 = p_cont_150193;
        _150194 = *line1_idx_150048;
        _150196 = (_150194);
        _150197 = (8 + _150196);
        (*line1_idx_150048 = _150197);
        _150199 = *prev_slice1_150080;
        _150201 = (_150199);
        cont_150204 = aie::shuffle_up_fill(cont_150193, _150201, 1);
        p_cont_150204 = cont_150204;
        goto cont_150202;
    }
cont_150202: {
        cont_150204 = p_cont_150204;
        (*prev_slice1_150080 = cont_150204);
        _150218 = *acc_150184;
        _150220 = (_150218);
        cont_150223 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_150220, cont_150126, 0, cont_150204, 0);
        p_cont_150223 = cont_150223;
        goto cont_150221;
    }
cont_150221: {
        cont_150223 = p_cont_150223;
        (*acc_150184 = cont_150223);
        _150225 = *line2_idx_150053;
        _150227 = (_150225);
        _150228 = (&(_150007)[_150227]);
        memcpy(&_150229, &_150228, sizeof(_150229));
        cont_150232 = aie::load_v<8>(_150229);
        p_cont_150232 = cont_150232;
        goto cont_150230;
    }
cont_150230: {
        cont_150232 = p_cont_150232;
        _150233 = *line2_idx_150053;
        _150235 = (_150233);
        _150236 = (8 + _150235);
        (*line2_idx_150053 = _150236);
        _150238 = *prev_slice2_150096;
        _150240 = (_150238);
        cont_150243 = aie::shuffle_up_fill(cont_150232, _150240, 1);
        p_cont_150243 = cont_150243;
        goto cont_150241;
    }
cont_150241: {
        cont_150243 = p_cont_150243;
        (*prev_slice2_150096 = cont_150243);
        _150245 = *acc_150184;
        _150247 = (_150245);
        cont_150250 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_150247, cont_150133, 0, cont_150243, 0);
        p_cont_150250 = cont_150250;
        goto cont_150248;
    }
cont_150248: {
        cont_150250 = p_cont_150250;
        (*acc_150184 = cont_150250);
        cont_150260 = srs(cont_150250, 1);
        p_cont_150260 = cont_150260;
        goto cont_150258;
    }
cont_150258: {
        cont_150260 = p_cont_150260;
        writeincr(_125254_149982, cont_150260);
        goto continue_wrapper_150261;
    }
continue_wrapper_150261: {
        goto pipeline_continue_150263;
    }
_125254_150720: {
        return;
    }
}

void _125206(input_stream<channel8_i32_30>* __restrict _125206_149883, output_stream<channel8_i32_30>* __restrict _125206_149884, output_stream<channel8_i32_30>* __restrict _125206_149885) {
    aie::vector<i32, 8>   cont_149894;
    aie::vector<i32, 8> p_cont_149894;
    aie::vector<i32, 8>   cont_149903;
    aie::vector<i32, 8> p_cont_149903;
    aie::vector<i32, 8>   cont_149906;
    aie::vector<i32, 8> p_cont_149906;
    {
        cont_149894 = window_readincr_v<8>(_125206_149883);
        p_cont_149894 = cont_149894;
        goto cont_149892;
    }
cont_149892: {
        cont_149894 = p_cont_149894;
        cont_149903 = aie::downshift(cont_149894, 6);
        p_cont_149903 = cont_149903;
        goto cont_149901;
    }
cont_149901: {
        cont_149903 = p_cont_149903;
        cont_149906 = aie::downshift(cont_149894, 6);
        p_cont_149906 = cont_149906;
        goto cont_149904;
    }
cont_149904: {
        cont_149906 = p_cont_149906;
        writeincr(_125206_149884, cont_149903);
        goto cont_149912;
    }
cont_149912: {
        writeincr(_125206_149885, cont_149906);
        goto _125206_150729;
    }
_125206_150729: {
        return;
    }
}

void _126155(input_stream<channel8_i32_30>* __restrict _126155_149927, input_stream<channel8_i32_30>* __restrict _126155_149928, output_stream<channel8_i32_30>* __restrict _126155_149929) {
    i32*   cont_149942;
    i32* p_cont_149942;
    aie::vector<i32, 8>   cont_149950;
    aie::vector<i32, 8> p_cont_149950;
    aie::vector<i32, 8>   cont_149953;
    aie::vector<i32, 8> p_cont_149953;
    aie::vector<i32, 8>   cont_149956;
    aie::vector<i32, 8> p_cont_149956;
    aie::vector<i32, 8>   cont_149959;
    aie::vector<i32, 8> p_cont_149959;
    aie::vector<i32, 8>   cont_149967;
    aie::vector<i32, 8> p_cont_149967;
    i32 cont_149933_reserved[3072];
    {
        set_sat();
        goto cont_149933;
    }
cont_149933: {
        p_cont_149942 = cont_149933_reserved;
        goto cont_149940;
    }
cont_149940: {
        cont_149942 = p_cont_149942;
        cont_149950 = readincr_v<8>(_126155_149927);
        p_cont_149950 = cont_149950;
        goto cont_149948;
    }
cont_149948: {
        cont_149950 = p_cont_149950;
        cont_149953 = readincr_v<8>(_126155_149928);
        p_cont_149953 = cont_149953;
        goto cont_149951;
    }
cont_149951: {
        cont_149953 = p_cont_149953;
        cont_149956 = aie::downshift(cont_149950, 6);
        p_cont_149956 = cont_149956;
        goto cont_149954;
    }
cont_149954: {
        cont_149956 = p_cont_149956;
        cont_149959 = aie::downshift(cont_149953, 6);
        p_cont_149959 = cont_149959;
        goto cont_149957;
    }
cont_149957: {
        cont_149959 = p_cont_149959;
        cont_149967 = aie::add(cont_149956, cont_149959);
        p_cont_149967 = cont_149967;
        goto cont_149965;
    }
cont_149965: {
        cont_149967 = p_cont_149967;
        writeincr(_126155_149929, cont_149967);
        goto _126155_150733;
    }
_126155_150733: {
        return;
    }
}


    
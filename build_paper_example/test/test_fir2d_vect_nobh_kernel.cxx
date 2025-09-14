
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
typedef struct {
    i32 e[32];
} array_49;
typedef struct {
    i32 e[3];
} array_51;
typedef struct {
    array_51 e[3];
} array_52;

void _90442(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
i32 g_lbuf_cnt_110825  = 0;

void _90442(input_window<channel8_i32_30>* __restrict _90442_110794, output_window<channel8_i32_30>* __restrict _90442_110795) {
    i32*   cont_110808;
    i32* p_cont_110808;
    i32   loop_110811;
    i32 p_loop_110811;
    i32   loop_110812;
    i32 p_loop_110812;
    i32   loop_110813;
    i32 p_loop_110813;
    i32   for_body_110832;
    i32 p_for_body_110832;
    aie::vector<i32, 8>   cont_110841;
    aie::vector<i32, 8> p_cont_110841;
    aie::vector<i32, 8>   cont_111487;
    aie::vector<i32, 8> p_cont_111487;
    aie::vector<i32, 8>   cont_111490;
    aie::vector<i32, 8> p_cont_111490;
    aie::vector<i32, 8>   cont_111493;
    aie::vector<i32, 8> p_cont_111493;
    aie::vector<i32, 8>   cont_111496;
    aie::vector<i32, 8> p_cont_111496;
    aie::vector<i32, 8>   cont_111504;
    aie::vector<i32, 8> p_cont_111504;
    aie::vector<i32, 8>   cont_111512;
    aie::vector<i32, 8> p_cont_111512;
    i32   loop_111515;
    i32 p_loop_111515;
    i32   loop_111516;
    i32 p_loop_111516;
    i32   loop_111517;
    i32 p_loop_111517;
    aie::vector<i32, 8>   cont_111551;
    aie::vector<i32, 8> p_cont_111551;
    aie::vector<i32, 8>   cont_111559;
    aie::vector<i32, 8> p_cont_111559;
    aie::vector<i32, 8>   cont_111567;
    aie::vector<i32, 8> p_cont_111567;
    i32   for_body_111583;
    i32 p_for_body_111583;
    aie::vector<i32, 8>   cont_111587;
    aie::vector<i32, 8> p_cont_111587;
    aie::vector<i32, 8>   cont_111592;
    aie::vector<i32, 8> p_cont_111592;
    aie::vector<i32, 8>   cont_111597;
    aie::vector<i32, 8> p_cont_111597;
    aie::vector<i32, 8>   cont_111610;
    aie::vector<i32, 8> p_cont_111610;
    aie::vector<i32, 8>   cont_111621;
    aie::vector<i32, 8> p_cont_111621;
    aie::vector<i32, 8>   cont_111624;
    aie::vector<i32, 8> p_cont_111624;
    aie::accum<u64, 8>   cont_111631;
    aie::accum<u64, 8> p_cont_111631;
    aie::vector<i32, 8>   cont_111647;
    aie::vector<i32, 8> p_cont_111647;
    aie::vector<i32, 8>   cont_111658;
    aie::vector<i32, 8> p_cont_111658;
    aie::accum<u64, 8>   cont_111668;
    aie::accum<u64, 8> p_cont_111668;
    aie::vector<i32, 8>   cont_111680;
    aie::vector<i32, 8> p_cont_111680;
    aie::vector<i32, 8>   cont_111691;
    aie::vector<i32, 8> p_cont_111691;
    aie::accum<u64, 8>   cont_111701;
    aie::accum<u64, 8> p_cont_111701;
    aie::vector<i32, 8>   cont_111705;
    aie::vector<i32, 8> p_cont_111705;
    i32   loop_111522;
    i32 p_loop_111522;
    i32   loop_111523;
    i32 p_loop_111523;
    i32   loop_111524;
    i32 p_loop_111524;
    aie::vector<i32, 8>   cont_111223;
    aie::vector<i32, 8> p_cont_111223;
    aie::vector<i32, 8>   cont_111226;
    aie::vector<i32, 8> p_cont_111226;
    aie::vector<i32, 8>   cont_111229;
    aie::vector<i32, 8> p_cont_111229;
    aie::vector<i32, 8>   cont_111232;
    aie::vector<i32, 8> p_cont_111232;
    aie::vector<i32, 8>   cont_111240;
    aie::vector<i32, 8> p_cont_111240;
    aie::vector<i32, 8>   cont_111248;
    aie::vector<i32, 8> p_cont_111248;
    i32   loop_111251;
    i32 p_loop_111251;
    i32   loop_111252;
    i32 p_loop_111252;
    i32   loop_111253;
    i32 p_loop_111253;
    aie::vector<i32, 8>   cont_111287;
    aie::vector<i32, 8> p_cont_111287;
    aie::vector<i32, 8>   cont_111295;
    aie::vector<i32, 8> p_cont_111295;
    aie::vector<i32, 8>   cont_111303;
    aie::vector<i32, 8> p_cont_111303;
    i32   for_body_111319;
    i32 p_for_body_111319;
    aie::vector<i32, 8>   cont_111323;
    aie::vector<i32, 8> p_cont_111323;
    aie::vector<i32, 8>   cont_111328;
    aie::vector<i32, 8> p_cont_111328;
    aie::vector<i32, 8>   cont_111333;
    aie::vector<i32, 8> p_cont_111333;
    aie::vector<i32, 8>   cont_111343;
    aie::vector<i32, 8> p_cont_111343;
    aie::vector<i32, 8>   cont_111354;
    aie::vector<i32, 8> p_cont_111354;
    aie::vector<i32, 8>   cont_111357;
    aie::vector<i32, 8> p_cont_111357;
    aie::accum<u64, 8>   cont_111364;
    aie::accum<u64, 8> p_cont_111364;
    aie::vector<i32, 8>   cont_111375;
    aie::vector<i32, 8> p_cont_111375;
    aie::vector<i32, 8>   cont_111386;
    aie::vector<i32, 8> p_cont_111386;
    aie::accum<u64, 8>   cont_111396;
    aie::accum<u64, 8> p_cont_111396;
    aie::vector<i32, 8>   cont_111406;
    aie::vector<i32, 8> p_cont_111406;
    aie::vector<i32, 8>   cont_111417;
    aie::vector<i32, 8> p_cont_111417;
    aie::accum<u64, 8>   cont_111427;
    aie::accum<u64, 8> p_cont_111427;
    aie::vector<i32, 8>   cont_111431;
    aie::vector<i32, 8> p_cont_111431;
    i32   loop_111258;
    i32 p_loop_111258;
    i32   loop_111259;
    i32 p_loop_111259;
    i32   loop_111260;
    i32 p_loop_111260;
    aie::vector<i32, 8>   cont_110898;
    aie::vector<i32, 8> p_cont_110898;
    aie::vector<i32, 8>   cont_110901;
    aie::vector<i32, 8> p_cont_110901;
    aie::vector<i32, 8>   cont_110904;
    aie::vector<i32, 8> p_cont_110904;
    aie::vector<i32, 8>   cont_110907;
    aie::vector<i32, 8> p_cont_110907;
    aie::vector<i32, 8>   cont_110915;
    aie::vector<i32, 8> p_cont_110915;
    aie::vector<i32, 8>   cont_110923;
    aie::vector<i32, 8> p_cont_110923;
    i32   loop_110926;
    i32 p_loop_110926;
    i32   loop_110927;
    i32 p_loop_110927;
    i32   loop_110928;
    i32 p_loop_110928;
    aie::vector<i32, 8>   cont_110966;
    aie::vector<i32, 8> p_cont_110966;
    aie::vector<i32, 8>   cont_110974;
    aie::vector<i32, 8> p_cont_110974;
    aie::vector<i32, 8>   cont_110982;
    aie::vector<i32, 8> p_cont_110982;
    i32   for_body_110998;
    i32 p_for_body_110998;
    aie::vector<i32, 8>   cont_111007;
    aie::vector<i32, 8> p_cont_111007;
    aie::vector<i32, 8>   cont_111012;
    aie::vector<i32, 8> p_cont_111012;
    aie::vector<i32, 8>   cont_111018;
    aie::vector<i32, 8> p_cont_111018;
    aie::vector<i32, 8>   cont_111027;
    aie::vector<i32, 8> p_cont_111027;
    aie::vector<i32, 8>   cont_111042;
    aie::vector<i32, 8> p_cont_111042;
    aie::vector<i32, 8>   cont_111052;
    aie::vector<i32, 8> p_cont_111052;
    aie::accum<u64, 8>   cont_111071;
    aie::accum<u64, 8> p_cont_111071;
    aie::vector<i32, 8>   cont_111082;
    aie::vector<i32, 8> p_cont_111082;
    aie::vector<i32, 8>   cont_111093;
    aie::vector<i32, 8> p_cont_111093;
    aie::accum<u64, 8>   cont_111115;
    aie::accum<u64, 8> p_cont_111115;
    aie::vector<i32, 8>   cont_111124;
    aie::vector<i32, 8> p_cont_111124;
    aie::vector<i32, 8>   cont_111135;
    aie::vector<i32, 8> p_cont_111135;
    aie::accum<u64, 8>   cont_111145;
    aie::accum<u64, 8> p_cont_111145;
    aie::vector<i32, 8>   cont_111155;
    aie::vector<i32, 8> p_cont_111155;
    i32   loop_110933;
    i32 p_loop_110933;
    i32   loop_110934;
    i32 p_loop_110934;
    i32   loop_110935;
    i32 p_loop_110935;
    i32 cont_110799_reserved[3072];
    bool _110814;
    i32 _110826;
    i32 _110854;
    i32 _110849;
    i32 lbuf_seg_110851;
    i32 _110852;
    i32 lbuff_idx_110855;
    i32* _110856;
    i32 _110864;
    i32 cur_lbuf_cnt_110865;
    bool _110866;
    bool _111202;
    i32 _110873;
    i32 _110876;
    i32 _110877;
    i32 line0_idx_111471_slot;
    i32* line0_idx_111471 = &line0_idx_111471_slot;
    i32 line1_idx_111476_slot;
    i32* line1_idx_111476 = &line1_idx_111476_slot;
    i32 line2_idx_111481_slot;
    i32* line2_idx_111481 = &line2_idx_111481_slot;
    aie::vector<i32, 8> prev_slice0_111500_slot;
    aie::vector<i32, 8>* prev_slice0_111500 = &prev_slice0_111500_slot;
    aie::vector<i32, 8> prev_slice1_111508_slot;
    aie::vector<i32, 8>* prev_slice1_111508 = &prev_slice1_111508_slot;
    aie::vector<i32, 8> prev_slice2_111530_slot;
    aie::vector<i32, 8>* prev_slice2_111530 = &prev_slice2_111530_slot;
    array_49 _111192;
    array_49 value_111534_slot;
    array_49* value_111534 = &value_111534_slot;
    bool _111518;
    aie::vector<i32, 8> coeffs_padded_row0_111555_slot;
    aie::vector<i32, 8>* coeffs_padded_row0_111555 = &coeffs_padded_row0_111555_slot;
    aie::vector<i32, 8> coeffs_padded_row1_111563_slot;
    aie::vector<i32, 8>* coeffs_padded_row1_111563 = &coeffs_padded_row1_111563_slot;
    aie::vector<i32, 8> coeffs_padded_row2_111579_slot;
    aie::vector<i32, 8>* coeffs_padded_row2_111579 = &coeffs_padded_row2_111579_slot;
    i32* _111584;
    i32* _111589;
    i32* _111594;
    i32 _111599;
    i32 _111604;
    i32 _111601;
    i32 _111602;
    i32 _111603;
    i32 _111605;
    i32* _111606;
    i32* _111607;
    i32 _111611;
    i32 _111613;
    i32 _111614;
    aie::vector<i32, 8> _111616;
    aie::vector<i32, 8> _111618;
    aie::vector<i32, 8> _111626;
    aie::vector<i32, 8> _111628;
    aie::accum<u64, 8> acc_111633_slot;
    aie::accum<u64, 8>* acc_111633 = &acc_111633_slot;
    i32 _111635;
    i32 _111641;
    i32 _111638;
    i32 _111639;
    i32 _111640;
    i32 _111642;
    i32* _111643;
    i32* _111644;
    i32 _111648;
    i32 _111650;
    i32 _111651;
    aie::vector<i32, 8> _111653;
    aie::vector<i32, 8> _111655;
    aie::accum<u64, 8> _111660;
    aie::vector<i32, 8> _111662;
    aie::accum<u64, 8> _111664;
    aie::vector<i32, 8> _111665;
    i32 _111670;
    i32 _111674;
    i32 _111672;
    i32 _111673;
    i32 _111675;
    i32* _111676;
    i32* _111677;
    i32 _111681;
    i32 _111683;
    i32 _111684;
    aie::vector<i32, 8> _111686;
    aie::vector<i32, 8> _111688;
    aie::accum<u64, 8> _111693;
    aie::vector<i32, 8> _111695;
    aie::accum<u64, 8> _111697;
    aie::vector<i32, 8> _111698;
    bool _111525;
    i32 _111544;
    array_52 _110952;
    array_51 _110949;
    array_51 _110951;
    array_51 _111538;
    i32 _111539;
    i32 _111535;
    i32 idx_111536;
    i32* _111537;
    i32 _111541;
    i32 line0_idx_111207_slot;
    i32* line0_idx_111207 = &line0_idx_111207_slot;
    i32 line1_idx_111212_slot;
    i32* line1_idx_111212 = &line1_idx_111212_slot;
    i32 line2_idx_111217_slot;
    i32* line2_idx_111217 = &line2_idx_111217_slot;
    aie::vector<i32, 8> prev_slice0_111236_slot;
    aie::vector<i32, 8>* prev_slice0_111236 = &prev_slice0_111236_slot;
    aie::vector<i32, 8> prev_slice1_111244_slot;
    aie::vector<i32, 8>* prev_slice1_111244 = &prev_slice1_111244_slot;
    aie::vector<i32, 8> prev_slice2_111266_slot;
    aie::vector<i32, 8>* prev_slice2_111266 = &prev_slice2_111266_slot;
    array_49 value_111270_slot;
    array_49* value_111270 = &value_111270_slot;
    bool _111254;
    aie::vector<i32, 8> coeffs_padded_row0_111291_slot;
    aie::vector<i32, 8>* coeffs_padded_row0_111291 = &coeffs_padded_row0_111291_slot;
    aie::vector<i32, 8> coeffs_padded_row1_111299_slot;
    aie::vector<i32, 8>* coeffs_padded_row1_111299 = &coeffs_padded_row1_111299_slot;
    aie::vector<i32, 8> coeffs_padded_row2_111315_slot;
    aie::vector<i32, 8>* coeffs_padded_row2_111315 = &coeffs_padded_row2_111315_slot;
    i32* _111320;
    i32* _111325;
    i32* _111330;
    i32 _111335;
    i32 _111337;
    i32 _111338;
    i32* _111339;
    i32* _111340;
    i32 _111344;
    i32 _111346;
    i32 _111347;
    aie::vector<i32, 8> _111349;
    aie::vector<i32, 8> _111351;
    aie::vector<i32, 8> _111359;
    aie::vector<i32, 8> _111361;
    aie::accum<u64, 8> acc_111366_slot;
    aie::accum<u64, 8>* acc_111366 = &acc_111366_slot;
    i32 _111368;
    i32 _111370;
    i32* _111371;
    i32* _111372;
    i32 _111376;
    i32 _111378;
    i32 _111379;
    aie::vector<i32, 8> _111381;
    aie::vector<i32, 8> _111383;
    aie::accum<u64, 8> _111388;
    aie::vector<i32, 8> _111390;
    aie::accum<u64, 8> _111392;
    aie::vector<i32, 8> _111393;
    i32 _111398;
    i32 _111400;
    i32 _111401;
    i32* _111402;
    i32* _111403;
    i32 _111407;
    i32 _111409;
    i32 _111410;
    aie::vector<i32, 8> _111412;
    aie::vector<i32, 8> _111414;
    aie::accum<u64, 8> _111419;
    aie::vector<i32, 8> _111421;
    aie::accum<u64, 8> _111423;
    aie::vector<i32, 8> _111424;
    bool _111261;
    i32 _111280;
    array_51 _111274;
    i32 _111275;
    i32 _111271;
    i32 idx_111272;
    i32* _111273;
    i32 _111277;
    i32 line0_idx_110882_slot;
    i32* line0_idx_110882 = &line0_idx_110882_slot;
    i32 line1_idx_110887_slot;
    i32* line1_idx_110887 = &line1_idx_110887_slot;
    i32 line2_idx_110892_slot;
    i32* line2_idx_110892 = &line2_idx_110892_slot;
    aie::vector<i32, 8> prev_slice0_110911_slot;
    aie::vector<i32, 8>* prev_slice0_110911 = &prev_slice0_110911_slot;
    aie::vector<i32, 8> prev_slice1_110919_slot;
    aie::vector<i32, 8>* prev_slice1_110919 = &prev_slice1_110919_slot;
    aie::vector<i32, 8> prev_slice2_110941_slot;
    aie::vector<i32, 8>* prev_slice2_110941 = &prev_slice2_110941_slot;
    array_49 value_110945_slot;
    array_49* value_110945 = &value_110945_slot;
    bool _110929;
    aie::vector<i32, 8> coeffs_padded_row0_110970_slot;
    aie::vector<i32, 8>* coeffs_padded_row0_110970 = &coeffs_padded_row0_110970_slot;
    aie::vector<i32, 8> coeffs_padded_row1_110978_slot;
    aie::vector<i32, 8>* coeffs_padded_row1_110978 = &coeffs_padded_row1_110978_slot;
    aie::vector<i32, 8> coeffs_padded_row2_110994_slot;
    aie::vector<i32, 8>* coeffs_padded_row2_110994 = &coeffs_padded_row2_110994_slot;
    i32* _111004;
    i32* _111009;
    i32* _111015;
    i32 _111020;
    i32 _111022;
    i32* _111023;
    i32* _111024;
    i32 _111032;
    i32 _111034;
    i32 _111035;
    aie::vector<i32, 8> _111037;
    aie::vector<i32, 8> _111039;
    aie::vector<i32, 8> _111065;
    aie::vector<i32, 8> _111067;
    aie::accum<u64, 8> acc_111073_slot;
    aie::accum<u64, 8>* acc_111073 = &acc_111073_slot;
    i32 _111075;
    i32 _111077;
    i32* _111078;
    i32* _111079;
    i32 _111083;
    i32 _111085;
    i32 _111086;
    aie::vector<i32, 8> _111088;
    aie::vector<i32, 8> _111090;
    aie::accum<u64, 8> _111107;
    aie::vector<i32, 8> _111109;
    aie::accum<u64, 8> _111111;
    aie::vector<i32, 8> _111112;
    i32 _111117;
    i32 _111119;
    i32* _111120;
    i32* _111121;
    i32 _111125;
    i32 _111127;
    i32 _111128;
    aie::vector<i32, 8> _111130;
    aie::vector<i32, 8> _111132;
    aie::accum<u64, 8> _111137;
    aie::vector<i32, 8> _111139;
    aie::accum<u64, 8> _111141;
    aie::vector<i32, 8> _111142;
    i32 _111168;
    bool _110936;
    i32 _110959;
    array_51 _110953;
    i32 _110954;
    i32 _110946;
    i32 idx_110947;
    i32* _110948;
    i32 _110956;
    {
        _111192.e[0ULL] = 0;
        _111192.e[1ULL] = 0;
        _111192.e[2ULL] = 0;
        _111192.e[3ULL] = 0;
        _111192.e[4ULL] = 0;
        _111192.e[5ULL] = 0;
        _111192.e[6ULL] = 0;
        _111192.e[7ULL] = 0;
        _111192.e[8ULL] = 0;
        _111192.e[9ULL] = 0;
        _111192.e[10ULL] = 0;
        _111192.e[11ULL] = 0;
        _111192.e[12ULL] = 0;
        _111192.e[13ULL] = 0;
        _111192.e[14ULL] = 0;
        _111192.e[15ULL] = 0;
        _111192.e[16ULL] = 0;
        _111192.e[17ULL] = 0;
        _111192.e[18ULL] = 0;
        _111192.e[19ULL] = 0;
        _111192.e[20ULL] = 0;
        _111192.e[21ULL] = 0;
        _111192.e[22ULL] = 0;
        _111192.e[23ULL] = 0;
        _111192.e[24ULL] = 0;
        _111192.e[25ULL] = 0;
        _111192.e[26ULL] = 0;
        _111192.e[27ULL] = 0;
        _111192.e[28ULL] = 0;
        _111192.e[29ULL] = 0;
        _111192.e[30ULL] = 0;
        _111192.e[31ULL] = 0;
        _110949.e[0ULL] = 0;
        _110949.e[1ULL] = 1;
        _110949.e[2ULL] = 0;
        _110952.e[0ULL] = _110949;
        _110951.e[0ULL] = 1;
        _110951.e[1ULL] = -4;
        _110951.e[2ULL] = 1;
        _110952.e[1ULL] = _110951;
        _110952.e[2ULL] = _110949;
        set_sat();
        goto cont_110799;
    }
cont_110799: {
        p_cont_110808 = cont_110799_reserved;
        goto cont_110806;
    }
cont_110806: {
        cont_110808 = p_cont_110808;
        p_loop_110811 = 0;
        p_loop_110812 = 1022;
        p_loop_110813 = 1;
        goto loop_110809;
    }
loop_110809: {
        loop_110811 = p_loop_110811;
        loop_110812 = p_loop_110812;
        loop_110813 = p_loop_110813;
        _110814 = (loop_110811 < loop_110812);
        if (_110814) goto branch_true_110815; else goto branch_false_111747;
    }
branch_false_111747: {
        return;
    }
branch_true_110815: {
        _110826 = *&g_lbuf_cnt_110825;
        int i110816;
        for (i110816 = 0; i110816 < 128; i110816++)
        chess_prepare_for_pipelining {
            p_for_body_110832 = i110816;
            goto for_body_110830;
            pipeline_continue_110859: continue;
        }
        goto for_break_110862;
    }
for_body_110830: {
        for_body_110832 = p_for_body_110832;
        cont_110841 = window_readincr_v<8>(_90442_110794);
        p_cont_110841 = cont_110841;
        goto cont_110839;
    }
cont_110839: {
        cont_110841 = p_cont_110841;
        _110854 = (8 * for_body_110832);
        _110849 = (_110826);
        lbuf_seg_110851 = (_110849 % 3);
        _110852 = (1024 * lbuf_seg_110851);
        lbuff_idx_110855 = (_110852 + _110854);
        _110856 = (&(cont_110808)[lbuff_idx_110855]);
        aie::store_v(_110856, cont_110841);
        goto continue_wrapper_110857;
    }
continue_wrapper_110857: {
        goto pipeline_continue_110859;
    }
for_break_110862: {
        _110864 = *&g_lbuf_cnt_110825;
        cur_lbuf_cnt_110865 = (_110864);
        _110866 = (cur_lbuf_cnt_110865 == 0);
        _110873 = *&g_lbuf_cnt_110825;
        _110876 = (_110873);
        _110877 = (1 + _110876);
        (*&g_lbuf_cnt_110825 = _110877);
        if (_110866) goto branch_true_110867; else goto branch_false_111201;
    }
branch_false_111201: {
        _111202 = (cur_lbuf_cnt_110865 == 1);
        if (_111202) goto branch_true_111203; else goto branch_false_111467;
    }
branch_false_111467: {
        (*line0_idx_111471 = 0);
        (*line1_idx_111476 = 0);
        (*line2_idx_111481 = 0);
        cont_111487 = aie::zeros<i32, 8>();
        p_cont_111487 = cont_111487;
        goto cont_111485;
    }
cont_111485: {
        cont_111487 = p_cont_111487;
        cont_111490 = aie::zeros<i32, 8>();
        p_cont_111490 = cont_111490;
        goto cont_111488;
    }
cont_111488: {
        cont_111490 = p_cont_111490;
        cont_111493 = aie::zeros<i32, 8>();
        p_cont_111493 = cont_111493;
        goto cont_111491;
    }
cont_111491: {
        cont_111493 = p_cont_111493;
        cont_111496 = aie::zeros<i32, 8>();
        p_cont_111496 = cont_111496;
        goto cont_111494;
    }
cont_111494: {
        cont_111496 = p_cont_111496;
        (*prev_slice0_111500 = cont_111496);
        cont_111504 = aie::zeros<i32, 8>();
        p_cont_111504 = cont_111504;
        goto cont_111502;
    }
cont_111502: {
        cont_111504 = p_cont_111504;
        (*prev_slice1_111508 = cont_111504);
        cont_111512 = aie::zeros<i32, 8>();
        p_cont_111512 = cont_111512;
        goto cont_111510;
    }
cont_111510: {
        cont_111512 = p_cont_111512;
        (*prev_slice2_111530 = cont_111512);
        (*value_111534 = _111192);
        p_loop_111515 = 0;
        p_loop_111516 = 3;
        p_loop_111517 = 1;
        goto loop_111513;
    }
loop_111513: {
        loop_111515 = p_loop_111515;
        loop_111516 = p_loop_111516;
        loop_111517 = p_loop_111517;
        _111518 = (loop_111515 < loop_111516);
        if (_111518) goto branch_true_111519; else goto branch_false_111548;
    }
branch_false_111548: {
        cont_111551 = aie::zeros<i32, 8>();
        p_cont_111551 = cont_111551;
        goto cont_111549;
    }
cont_111549: {
        cont_111551 = p_cont_111551;
        (*coeffs_padded_row0_111555 = cont_111551);
        cont_111559 = aie::zeros<i32, 8>();
        p_cont_111559 = cont_111559;
        goto cont_111557;
    }
cont_111557: {
        cont_111559 = p_cont_111559;
        (*coeffs_padded_row1_111563 = cont_111559);
        cont_111567 = aie::zeros<i32, 8>();
        p_cont_111567 = cont_111567;
        goto cont_111565;
    }
cont_111565: {
        cont_111567 = p_cont_111567;
        (*coeffs_padded_row2_111579 = cont_111567);
        int i111568;
        for (i111568 = 0; i111568 < 128; i111568++)
        chess_prepare_for_pipelining {
            p_for_body_111583 = i111568;
            goto for_body_111581;
            pipeline_continue_111708: continue;
        }
        goto cont_111166;
    }
for_body_111581: {
        for_body_111583 = p_for_body_111583;
        _111584 = (&(value_111534)->e[0]);
        cont_111587 = aie::load_v<8>(_111584);
        p_cont_111587 = cont_111587;
        goto cont_111585;
    }
cont_111585: {
        cont_111587 = p_cont_111587;
        (*coeffs_padded_row0_111555 = cont_111587);
        _111589 = (&(value_111534)->e[8]);
        cont_111592 = aie::load_v<8>(_111589);
        p_cont_111592 = cont_111592;
        goto cont_111590;
    }
cont_111590: {
        cont_111592 = p_cont_111592;
        (*coeffs_padded_row1_111563 = cont_111592);
        _111594 = (&(value_111534)->e[16]);
        cont_111597 = aie::load_v<8>(_111594);
        p_cont_111597 = cont_111597;
        goto cont_111595;
    }
cont_111595: {
        cont_111597 = p_cont_111597;
        (*coeffs_padded_row2_111579 = cont_111597);
        _111599 = *line0_idx_111471;
        _111604 = (_111599);
        _111601 = (1 + cur_lbuf_cnt_110865);
        _111602 = (_111601 % 3);
        _111603 = (1024 * _111602);
        _111605 = (_111603 + _111604);
        _111606 = (&(cont_110808)[_111605]);
        memcpy(&_111607, &_111606, sizeof(_111607));
        cont_111610 = aie::load_v<8>(_111607);
        p_cont_111610 = cont_111610;
        goto cont_111608;
    }
cont_111608: {
        cont_111610 = p_cont_111610;
        _111611 = *line0_idx_111471;
        _111613 = (_111611);
        _111614 = (8 + _111613);
        (*line0_idx_111471 = _111614);
        _111616 = *prev_slice0_111500;
        _111618 = (_111616);
        cont_111621 =  (_111618);
        p_cont_111621 = cont_111621;
        goto cont_111619;
    }
cont_111619: {
        cont_111621 = p_cont_111621;
        cont_111624 = aie::shuffle_up_fill(cont_111610, cont_111621, 1);
        p_cont_111624 = cont_111624;
        goto cont_111622;
    }
cont_111622: {
        cont_111624 = p_cont_111624;
        (*prev_slice0_111500 = cont_111624);
        _111626 = *coeffs_padded_row0_111555;
        _111628 = (_111626);
        cont_111631 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(_111628, 0, cont_111624, 0);
        p_cont_111631 = cont_111631;
        goto cont_111629;
    }
cont_111629: {
        cont_111631 = p_cont_111631;
        (*acc_111633 = cont_111631);
        _111635 = *line1_idx_111476;
        _111641 = (_111635);
        _111638 = (2 + cur_lbuf_cnt_110865);
        _111639 = (_111638 % 3);
        _111640 = (1024 * _111639);
        _111642 = (_111640 + _111641);
        _111643 = (&(cont_110808)[_111642]);
        memcpy(&_111644, &_111643, sizeof(_111644));
        cont_111647 = aie::load_v<8>(_111644);
        p_cont_111647 = cont_111647;
        goto cont_111645;
    }
cont_111645: {
        cont_111647 = p_cont_111647;
        _111648 = *line1_idx_111476;
        _111650 = (_111648);
        _111651 = (8 + _111650);
        (*line1_idx_111476 = _111651);
        _111653 = *prev_slice1_111508;
        _111655 = (_111653);
        cont_111658 = aie::shuffle_up_fill(cont_111647, _111655, 1);
        p_cont_111658 = cont_111658;
        goto cont_111656;
    }
cont_111656: {
        cont_111658 = p_cont_111658;
        (*prev_slice1_111508 = cont_111658);
        _111660 = *acc_111633;
        _111662 = *coeffs_padded_row1_111563;
        _111664 = (_111660);
        _111665 = (_111662);
        cont_111668 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_111664, _111665, 0, cont_111658, 0);
        p_cont_111668 = cont_111668;
        goto cont_111666;
    }
cont_111666: {
        cont_111668 = p_cont_111668;
        (*acc_111633 = cont_111668);
        _111670 = *line2_idx_111481;
        _111674 = (_111670);
        _111672 = (cur_lbuf_cnt_110865 % 3);
        _111673 = (1024 * _111672);
        _111675 = (_111673 + _111674);
        _111676 = (&(cont_110808)[_111675]);
        memcpy(&_111677, &_111676, sizeof(_111677));
        cont_111680 = aie::load_v<8>(_111677);
        p_cont_111680 = cont_111680;
        goto cont_111678;
    }
cont_111678: {
        cont_111680 = p_cont_111680;
        _111681 = *line2_idx_111481;
        _111683 = (_111681);
        _111684 = (8 + _111683);
        (*line2_idx_111481 = _111684);
        _111686 = *prev_slice2_111530;
        _111688 = (_111686);
        cont_111691 = aie::shuffle_up_fill(cont_111680, _111688, 1);
        p_cont_111691 = cont_111691;
        goto cont_111689;
    }
cont_111689: {
        cont_111691 = p_cont_111691;
        (*prev_slice2_111530 = cont_111691);
        _111693 = *acc_111633;
        _111695 = *coeffs_padded_row2_111579;
        _111697 = (_111693);
        _111698 = (_111695);
        cont_111701 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_111697, _111698, 0, cont_111691, 0);
        p_cont_111701 = cont_111701;
        goto cont_111699;
    }
cont_111699: {
        cont_111701 = p_cont_111701;
        (*acc_111633 = cont_111701);
        cont_111705 = srs(cont_111701, 1);
        p_cont_111705 = cont_111705;
        goto cont_111703;
    }
cont_111703: {
        cont_111705 = p_cont_111705;
        window_writeincr(_90442_110795, cont_111705);
        goto continue_wrapper_111706;
    }
continue_wrapper_111706: {
        goto pipeline_continue_111708;
    }
branch_true_111519: {
        _111535 = (8 * loop_111515);
        p_loop_111522 = 0;
        p_loop_111523 = 3;
        p_loop_111524 = 1;
        goto loop_111520;
    }
loop_111520: {
        loop_111522 = p_loop_111522;
        loop_111523 = p_loop_111523;
        loop_111524 = p_loop_111524;
        _111525 = (loop_111522 < loop_111523);
        if (_111525) goto branch_true_111526; else goto branch_false_111543;
    }
branch_false_111543: {
        _111544 = (loop_111515 + loop_111517);
        p_loop_111515 = _111544;
        p_loop_111516 = loop_111516;
        p_loop_111517 = loop_111517;
        goto loop_111513;
    }
branch_true_111526: {
        _111538 = (_110952.e[loop_111522]);
        _111539 = (_111538.e[loop_111515]);
        idx_111536 = (_111535 + loop_111522);
        _111537 = (&(value_111534)->e[idx_111536]);
        (*_111537 = _111539);
        _111541 = (loop_111522 + loop_111524);
        p_loop_111522 = _111541;
        p_loop_111523 = loop_111523;
        p_loop_111524 = loop_111524;
        goto loop_111520;
    }
branch_true_111203: {
        (*line0_idx_111207 = 0);
        (*line1_idx_111212 = 0);
        (*line2_idx_111217 = 0);
        cont_111223 = aie::zeros<i32, 8>();
        p_cont_111223 = cont_111223;
        goto cont_111221;
    }
cont_111221: {
        cont_111223 = p_cont_111223;
        cont_111226 = aie::zeros<i32, 8>();
        p_cont_111226 = cont_111226;
        goto cont_111224;
    }
cont_111224: {
        cont_111226 = p_cont_111226;
        cont_111229 = aie::zeros<i32, 8>();
        p_cont_111229 = cont_111229;
        goto cont_111227;
    }
cont_111227: {
        cont_111229 = p_cont_111229;
        cont_111232 = aie::zeros<i32, 8>();
        p_cont_111232 = cont_111232;
        goto cont_111230;
    }
cont_111230: {
        cont_111232 = p_cont_111232;
        (*prev_slice0_111236 = cont_111232);
        cont_111240 = aie::zeros<i32, 8>();
        p_cont_111240 = cont_111240;
        goto cont_111238;
    }
cont_111238: {
        cont_111240 = p_cont_111240;
        (*prev_slice1_111244 = cont_111240);
        cont_111248 = aie::zeros<i32, 8>();
        p_cont_111248 = cont_111248;
        goto cont_111246;
    }
cont_111246: {
        cont_111248 = p_cont_111248;
        (*prev_slice2_111266 = cont_111248);
        (*value_111270 = _111192);
        p_loop_111251 = 0;
        p_loop_111252 = 3;
        p_loop_111253 = 1;
        goto loop_111249;
    }
loop_111249: {
        loop_111251 = p_loop_111251;
        loop_111252 = p_loop_111252;
        loop_111253 = p_loop_111253;
        _111254 = (loop_111251 < loop_111252);
        if (_111254) goto branch_true_111255; else goto branch_false_111284;
    }
branch_false_111284: {
        cont_111287 = aie::zeros<i32, 8>();
        p_cont_111287 = cont_111287;
        goto cont_111285;
    }
cont_111285: {
        cont_111287 = p_cont_111287;
        (*coeffs_padded_row0_111291 = cont_111287);
        cont_111295 = aie::zeros<i32, 8>();
        p_cont_111295 = cont_111295;
        goto cont_111293;
    }
cont_111293: {
        cont_111295 = p_cont_111295;
        (*coeffs_padded_row1_111299 = cont_111295);
        cont_111303 = aie::zeros<i32, 8>();
        p_cont_111303 = cont_111303;
        goto cont_111301;
    }
cont_111301: {
        cont_111303 = p_cont_111303;
        (*coeffs_padded_row2_111315 = cont_111303);
        int i111304;
        for (i111304 = 0; i111304 < 128; i111304++)
        chess_prepare_for_pipelining {
            p_for_body_111319 = i111304;
            goto for_body_111317;
            pipeline_continue_111434: continue;
        }
        goto cont_111166;
    }
for_body_111317: {
        for_body_111319 = p_for_body_111319;
        _111320 = (&(value_111270)->e[0]);
        cont_111323 = aie::load_v<8>(_111320);
        p_cont_111323 = cont_111323;
        goto cont_111321;
    }
cont_111321: {
        cont_111323 = p_cont_111323;
        (*coeffs_padded_row0_111291 = cont_111323);
        _111325 = (&(value_111270)->e[8]);
        cont_111328 = aie::load_v<8>(_111325);
        p_cont_111328 = cont_111328;
        goto cont_111326;
    }
cont_111326: {
        cont_111328 = p_cont_111328;
        (*coeffs_padded_row1_111299 = cont_111328);
        _111330 = (&(value_111270)->e[16]);
        cont_111333 = aie::load_v<8>(_111330);
        p_cont_111333 = cont_111333;
        goto cont_111331;
    }
cont_111331: {
        cont_111333 = p_cont_111333;
        (*coeffs_padded_row2_111315 = cont_111333);
        _111335 = *line0_idx_111207;
        _111337 = (_111335);
        _111338 = (1024 + _111337);
        _111339 = (&(cont_110808)[_111338]);
        memcpy(&_111340, &_111339, sizeof(_111340));
        cont_111343 = aie::load_v<8>(_111340);
        p_cont_111343 = cont_111343;
        goto cont_111341;
    }
cont_111341: {
        cont_111343 = p_cont_111343;
        _111344 = *line0_idx_111207;
        _111346 = (_111344);
        _111347 = (8 + _111346);
        (*line0_idx_111207 = _111347);
        _111349 = *prev_slice0_111236;
        _111351 = (_111349);
        cont_111354 =  (_111351);
        p_cont_111354 = cont_111354;
        goto cont_111352;
    }
cont_111352: {
        cont_111354 = p_cont_111354;
        cont_111357 = aie::shuffle_up_fill(cont_111343, cont_111354, 1);
        p_cont_111357 = cont_111357;
        goto cont_111355;
    }
cont_111355: {
        cont_111357 = p_cont_111357;
        (*prev_slice0_111236 = cont_111357);
        _111359 = *coeffs_padded_row0_111291;
        _111361 = (_111359);
        cont_111364 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(_111361, 0, cont_111357, 0);
        p_cont_111364 = cont_111364;
        goto cont_111362;
    }
cont_111362: {
        cont_111364 = p_cont_111364;
        (*acc_111366 = cont_111364);
        _111368 = *line1_idx_111212;
        _111370 = (_111368);
        _111371 = (&(cont_110808)[_111370]);
        memcpy(&_111372, &_111371, sizeof(_111372));
        cont_111375 = aie::load_v<8>(_111372);
        p_cont_111375 = cont_111375;
        goto cont_111373;
    }
cont_111373: {
        cont_111375 = p_cont_111375;
        _111376 = *line1_idx_111212;
        _111378 = (_111376);
        _111379 = (8 + _111378);
        (*line1_idx_111212 = _111379);
        _111381 = *prev_slice1_111244;
        _111383 = (_111381);
        cont_111386 = aie::shuffle_up_fill(cont_111375, _111383, 1);
        p_cont_111386 = cont_111386;
        goto cont_111384;
    }
cont_111384: {
        cont_111386 = p_cont_111386;
        (*prev_slice1_111244 = cont_111386);
        _111388 = *acc_111366;
        _111390 = *coeffs_padded_row1_111299;
        _111392 = (_111388);
        _111393 = (_111390);
        cont_111396 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_111392, _111393, 0, cont_111386, 0);
        p_cont_111396 = cont_111396;
        goto cont_111394;
    }
cont_111394: {
        cont_111396 = p_cont_111396;
        (*acc_111366 = cont_111396);
        _111398 = *line2_idx_111217;
        _111400 = (_111398);
        _111401 = (1024 + _111400);
        _111402 = (&(cont_110808)[_111401]);
        memcpy(&_111403, &_111402, sizeof(_111403));
        cont_111406 = aie::load_v<8>(_111403);
        p_cont_111406 = cont_111406;
        goto cont_111404;
    }
cont_111404: {
        cont_111406 = p_cont_111406;
        _111407 = *line2_idx_111217;
        _111409 = (_111407);
        _111410 = (8 + _111409);
        (*line2_idx_111217 = _111410);
        _111412 = *prev_slice2_111266;
        _111414 = (_111412);
        cont_111417 = aie::shuffle_up_fill(cont_111406, _111414, 1);
        p_cont_111417 = cont_111417;
        goto cont_111415;
    }
cont_111415: {
        cont_111417 = p_cont_111417;
        (*prev_slice2_111266 = cont_111417);
        _111419 = *acc_111366;
        _111421 = *coeffs_padded_row2_111315;
        _111423 = (_111419);
        _111424 = (_111421);
        cont_111427 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_111423, _111424, 0, cont_111417, 0);
        p_cont_111427 = cont_111427;
        goto cont_111425;
    }
cont_111425: {
        cont_111427 = p_cont_111427;
        (*acc_111366 = cont_111427);
        cont_111431 = srs(cont_111427, 1);
        p_cont_111431 = cont_111431;
        goto cont_111429;
    }
cont_111429: {
        cont_111431 = p_cont_111431;
        window_writeincr(_90442_110795, cont_111431);
        goto continue_wrapper_111432;
    }
continue_wrapper_111432: {
        goto pipeline_continue_111434;
    }
branch_true_111255: {
        _111271 = (8 * loop_111251);
        p_loop_111258 = 0;
        p_loop_111259 = 3;
        p_loop_111260 = 1;
        goto loop_111256;
    }
loop_111256: {
        loop_111258 = p_loop_111258;
        loop_111259 = p_loop_111259;
        loop_111260 = p_loop_111260;
        _111261 = (loop_111258 < loop_111259);
        if (_111261) goto branch_true_111262; else goto branch_false_111279;
    }
branch_false_111279: {
        _111280 = (loop_111251 + loop_111253);
        p_loop_111251 = _111280;
        p_loop_111252 = loop_111252;
        p_loop_111253 = loop_111253;
        goto loop_111249;
    }
branch_true_111262: {
        _111274 = (_110952.e[loop_111258]);
        _111275 = (_111274.e[loop_111251]);
        idx_111272 = (_111271 + loop_111258);
        _111273 = (&(value_111270)->e[idx_111272]);
        (*_111273 = _111275);
        _111277 = (loop_111258 + loop_111260);
        p_loop_111258 = _111277;
        p_loop_111259 = loop_111259;
        p_loop_111260 = loop_111260;
        goto loop_111256;
    }
branch_true_110867: {
        (*line0_idx_110882 = 0);
        (*line1_idx_110887 = 0);
        (*line2_idx_110892 = 0);
        cont_110898 = aie::zeros<i32, 8>();
        p_cont_110898 = cont_110898;
        goto cont_110896;
    }
cont_110896: {
        cont_110898 = p_cont_110898;
        cont_110901 = aie::zeros<i32, 8>();
        p_cont_110901 = cont_110901;
        goto cont_110899;
    }
cont_110899: {
        cont_110901 = p_cont_110901;
        cont_110904 = aie::zeros<i32, 8>();
        p_cont_110904 = cont_110904;
        goto cont_110902;
    }
cont_110902: {
        cont_110904 = p_cont_110904;
        cont_110907 = aie::zeros<i32, 8>();
        p_cont_110907 = cont_110907;
        goto cont_110905;
    }
cont_110905: {
        cont_110907 = p_cont_110907;
        (*prev_slice0_110911 = cont_110907);
        cont_110915 = aie::zeros<i32, 8>();
        p_cont_110915 = cont_110915;
        goto cont_110913;
    }
cont_110913: {
        cont_110915 = p_cont_110915;
        (*prev_slice1_110919 = cont_110915);
        cont_110923 = aie::zeros<i32, 8>();
        p_cont_110923 = cont_110923;
        goto cont_110921;
    }
cont_110921: {
        cont_110923 = p_cont_110923;
        (*prev_slice2_110941 = cont_110923);
        (*value_110945 = _111192);
        p_loop_110926 = 0;
        p_loop_110927 = 3;
        p_loop_110928 = 1;
        goto loop_110924;
    }
loop_110924: {
        loop_110926 = p_loop_110926;
        loop_110927 = p_loop_110927;
        loop_110928 = p_loop_110928;
        _110929 = (loop_110926 < loop_110927);
        if (_110929) goto branch_true_110930; else goto branch_false_110963;
    }
branch_false_110963: {
        cont_110966 = aie::zeros<i32, 8>();
        p_cont_110966 = cont_110966;
        goto cont_110964;
    }
cont_110964: {
        cont_110966 = p_cont_110966;
        (*coeffs_padded_row0_110970 = cont_110966);
        cont_110974 = aie::zeros<i32, 8>();
        p_cont_110974 = cont_110974;
        goto cont_110972;
    }
cont_110972: {
        cont_110974 = p_cont_110974;
        (*coeffs_padded_row1_110978 = cont_110974);
        cont_110982 = aie::zeros<i32, 8>();
        p_cont_110982 = cont_110982;
        goto cont_110980;
    }
cont_110980: {
        cont_110982 = p_cont_110982;
        (*coeffs_padded_row2_110994 = cont_110982);
        int i110983;
        for (i110983 = 0; i110983 < 128; i110983++)
        chess_prepare_for_pipelining {
            p_for_body_110998 = i110983;
            goto for_body_110996;
            pipeline_continue_111163: continue;
        }
        goto cont_111166;
    }
for_body_110996: {
        for_body_110998 = p_for_body_110998;
        _111004 = (&(value_110945)->e[0]);
        cont_111007 = aie::load_v<8>(_111004);
        p_cont_111007 = cont_111007;
        goto cont_111005;
    }
cont_111005: {
        cont_111007 = p_cont_111007;
        (*coeffs_padded_row0_110970 = cont_111007);
        _111009 = (&(value_110945)->e[8]);
        cont_111012 = aie::load_v<8>(_111009);
        p_cont_111012 = cont_111012;
        goto cont_111010;
    }
cont_111010: {
        cont_111012 = p_cont_111012;
        (*coeffs_padded_row1_110978 = cont_111012);
        _111015 = (&(value_110945)->e[16]);
        cont_111018 = aie::load_v<8>(_111015);
        p_cont_111018 = cont_111018;
        goto cont_111016;
    }
cont_111016: {
        cont_111018 = p_cont_111018;
        (*coeffs_padded_row2_110994 = cont_111018);
        _111020 = *line0_idx_110882;
        _111022 = (_111020);
        _111023 = (&(cont_110808)[_111022]);
        memcpy(&_111024, &_111023, sizeof(_111024));
        cont_111027 = aie::load_v<8>(_111024);
        p_cont_111027 = cont_111027;
        goto cont_111025;
    }
cont_111025: {
        cont_111027 = p_cont_111027;
        _111032 = *line0_idx_110882;
        _111034 = (_111032);
        _111035 = (8 + _111034);
        (*line0_idx_110882 = _111035);
        _111037 = *prev_slice0_110911;
        _111039 = (_111037);
        cont_111042 =  (_111039);
        p_cont_111042 = cont_111042;
        goto cont_111040;
    }
cont_111040: {
        cont_111042 = p_cont_111042;
        cont_111052 = aie::shuffle_up_fill(cont_111027, cont_111042, 1);
        p_cont_111052 = cont_111052;
        goto cont_111050;
    }
cont_111050: {
        cont_111052 = p_cont_111052;
        (*prev_slice0_110911 = cont_111052);
        _111065 = *coeffs_padded_row0_110970;
        _111067 = (_111065);
        cont_111071 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(_111067, 0, cont_111052, 0);
        p_cont_111071 = cont_111071;
        goto cont_111069;
    }
cont_111069: {
        cont_111071 = p_cont_111071;
        (*acc_111073 = cont_111071);
        _111075 = *line1_idx_110887;
        _111077 = (_111075);
        _111078 = (&(cont_110808)[_111077]);
        memcpy(&_111079, &_111078, sizeof(_111079));
        cont_111082 = aie::load_v<8>(_111079);
        p_cont_111082 = cont_111082;
        goto cont_111080;
    }
cont_111080: {
        cont_111082 = p_cont_111082;
        _111083 = *line1_idx_110887;
        _111085 = (_111083);
        _111086 = (8 + _111085);
        (*line1_idx_110887 = _111086);
        _111088 = *prev_slice1_110919;
        _111090 = (_111088);
        cont_111093 = aie::shuffle_up_fill(cont_111082, _111090, 1);
        p_cont_111093 = cont_111093;
        goto cont_111091;
    }
cont_111091: {
        cont_111093 = p_cont_111093;
        (*prev_slice1_110919 = cont_111093);
        _111107 = *acc_111073;
        _111109 = *coeffs_padded_row1_110978;
        _111111 = (_111107);
        _111112 = (_111109);
        cont_111115 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_111111, _111112, 0, cont_111093, 0);
        p_cont_111115 = cont_111115;
        goto cont_111113;
    }
cont_111113: {
        cont_111115 = p_cont_111115;
        (*acc_111073 = cont_111115);
        _111117 = *line2_idx_110892;
        _111119 = (_111117);
        _111120 = (&(cont_110808)[_111119]);
        memcpy(&_111121, &_111120, sizeof(_111121));
        cont_111124 = aie::load_v<8>(_111121);
        p_cont_111124 = cont_111124;
        goto cont_111122;
    }
cont_111122: {
        cont_111124 = p_cont_111124;
        _111125 = *line2_idx_110892;
        _111127 = (_111125);
        _111128 = (8 + _111127);
        (*line2_idx_110892 = _111128);
        _111130 = *prev_slice2_110941;
        _111132 = (_111130);
        cont_111135 = aie::shuffle_up_fill(cont_111124, _111132, 1);
        p_cont_111135 = cont_111135;
        goto cont_111133;
    }
cont_111133: {
        cont_111135 = p_cont_111135;
        (*prev_slice2_110941 = cont_111135);
        _111137 = *acc_111073;
        _111139 = *coeffs_padded_row2_110994;
        _111141 = (_111137);
        _111142 = (_111139);
        cont_111145 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_111141, _111142, 0, cont_111135, 0);
        p_cont_111145 = cont_111145;
        goto cont_111143;
    }
cont_111143: {
        cont_111145 = p_cont_111145;
        (*acc_111073 = cont_111145);
        cont_111155 = srs(cont_111145, 1);
        p_cont_111155 = cont_111155;
        goto cont_111153;
    }
cont_111153: {
        cont_111155 = p_cont_111155;
        window_writeincr(_90442_110795, cont_111155);
        goto continue_wrapper_111161;
    }
continue_wrapper_111161: {
        goto pipeline_continue_111163;
    }
cont_111166: {
        _111168 = (loop_110811 + loop_110813);
        p_loop_110811 = _111168;
        p_loop_110812 = loop_110812;
        p_loop_110813 = loop_110813;
        goto loop_110809;
    }
branch_true_110930: {
        _110946 = (8 * loop_110926);
        p_loop_110933 = 0;
        p_loop_110934 = 3;
        p_loop_110935 = 1;
        goto loop_110931;
    }
loop_110931: {
        loop_110933 = p_loop_110933;
        loop_110934 = p_loop_110934;
        loop_110935 = p_loop_110935;
        _110936 = (loop_110933 < loop_110934);
        if (_110936) goto branch_true_110937; else goto branch_false_110958;
    }
branch_false_110958: {
        _110959 = (loop_110926 + loop_110928);
        p_loop_110926 = _110959;
        p_loop_110927 = loop_110927;
        p_loop_110928 = loop_110928;
        goto loop_110924;
    }
branch_true_110937: {
        _110953 = (_110952.e[loop_110933]);
        _110954 = (_110953.e[loop_110926]);
        idx_110947 = (_110946 + loop_110933);
        _110948 = (&(value_110945)->e[idx_110947]);
        (*_110948 = _110954);
        _110956 = (loop_110933 + loop_110935);
        p_loop_110933 = _110956;
        p_loop_110934 = loop_110934;
        p_loop_110935 = loop_110935;
        goto loop_110931;
    }
}


    
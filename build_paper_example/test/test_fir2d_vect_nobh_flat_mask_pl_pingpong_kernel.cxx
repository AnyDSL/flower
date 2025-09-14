
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

void _86755(output_window<channel8_i32_30>* __restrict, input_window<channel8_i32_30>* __restrict);
i32 g_lbuf_cnt_106311  = 0;
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row0_106422  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row1_106429  = (array_31 { { 1, -4, 1, 0, 0, 0, 0, 0 } });
alignas(aie::vector_decl_align) array_31 g_laplace_coeffs_row2_106434  = (array_31 { { 0, 1, 0, 0, 0, 0, 0, 0 } });

void _86755(output_window<channel8_i32_30>* __restrict _86755_106275, input_window<channel8_i32_30>* __restrict _86755_106276) {
    i32*   cont_106289;
    i32* p_cont_106289;
    i32   for_body_106302;
    i32 p_for_body_106302;
    i32   for_body_106318;
    i32 p_for_body_106318;
    aie::vector<i32, 8>   cont_106327;
    aie::vector<i32, 8> p_cont_106327;
    aie::vector<i32, 8>   cont_106828;
    aie::vector<i32, 8> p_cont_106828;
    aie::vector<i32, 8>   cont_106831;
    aie::vector<i32, 8> p_cont_106831;
    aie::vector<i32, 8>   cont_106834;
    aie::vector<i32, 8> p_cont_106834;
    aie::vector<i32, 8>   cont_106842;
    aie::vector<i32, 8> p_cont_106842;
    aie::vector<i32, 8>   cont_106845;
    aie::vector<i32, 8> p_cont_106845;
    aie::vector<i32, 8>   cont_106848;
    aie::vector<i32, 8> p_cont_106848;
    i32   for_body_106859;
    i32 p_for_body_106859;
    aie::vector<i32, 8>   cont_106862;
    aie::vector<i32, 8> p_cont_106862;
    aie::vector<i32, 8>   cont_106865;
    aie::vector<i32, 8> p_cont_106865;
    aie::vector<i32, 8>   cont_106868;
    aie::vector<i32, 8> p_cont_106868;
    aie::vector<i32, 8>   cont_106880;
    aie::vector<i32, 8> p_cont_106880;
    aie::vector<i32, 8>   cont_106888;
    aie::vector<i32, 8> p_cont_106888;
    aie::vector<i32, 8>   cont_106891;
    aie::vector<i32, 8> p_cont_106891;
    aie::vector<i32, 8>   cont_106894;
    aie::vector<i32, 8> p_cont_106894;
    aie::vector<i32, 8>   cont_106899;
    aie::vector<i32, 8> p_cont_106899;
    aie::accum<u64, 8>   cont_106902;
    aie::accum<u64, 8> p_cont_106902;
    aie::vector<i32, 8>   cont_106918;
    aie::vector<i32, 8> p_cont_106918;
    aie::vector<i32, 8>   cont_106926;
    aie::vector<i32, 8> p_cont_106926;
    aie::accum<u64, 8>   cont_106934;
    aie::accum<u64, 8> p_cont_106934;
    aie::vector<i32, 8>   cont_106946;
    aie::vector<i32, 8> p_cont_106946;
    aie::vector<i32, 8>   cont_106955;
    aie::vector<i32, 8> p_cont_106955;
    aie::accum<u64, 8>   cont_106966;
    aie::accum<u64, 8> p_cont_106966;
    aie::vector<i32, 8>   cont_106970;
    aie::vector<i32, 8> p_cont_106970;
    aie::vector<i32, 8>   cont_106642;
    aie::vector<i32, 8> p_cont_106642;
    aie::vector<i32, 8>   cont_106645;
    aie::vector<i32, 8> p_cont_106645;
    aie::vector<i32, 8>   cont_106648;
    aie::vector<i32, 8> p_cont_106648;
    aie::vector<i32, 8>   cont_106656;
    aie::vector<i32, 8> p_cont_106656;
    aie::vector<i32, 8>   cont_106659;
    aie::vector<i32, 8> p_cont_106659;
    aie::vector<i32, 8>   cont_106662;
    aie::vector<i32, 8> p_cont_106662;
    i32   for_body_106673;
    i32 p_for_body_106673;
    aie::vector<i32, 8>   cont_106676;
    aie::vector<i32, 8> p_cont_106676;
    aie::vector<i32, 8>   cont_106679;
    aie::vector<i32, 8> p_cont_106679;
    aie::vector<i32, 8>   cont_106682;
    aie::vector<i32, 8> p_cont_106682;
    aie::vector<i32, 8>   cont_106691;
    aie::vector<i32, 8> p_cont_106691;
    aie::vector<i32, 8>   cont_106699;
    aie::vector<i32, 8> p_cont_106699;
    aie::vector<i32, 8>   cont_106702;
    aie::vector<i32, 8> p_cont_106702;
    aie::vector<i32, 8>   cont_106705;
    aie::vector<i32, 8> p_cont_106705;
    aie::vector<i32, 8>   cont_106710;
    aie::vector<i32, 8> p_cont_106710;
    aie::accum<u64, 8>   cont_106713;
    aie::accum<u64, 8> p_cont_106713;
    aie::vector<i32, 8>   cont_106724;
    aie::vector<i32, 8> p_cont_106724;
    aie::vector<i32, 8>   cont_106732;
    aie::vector<i32, 8> p_cont_106732;
    aie::accum<u64, 8>   cont_106740;
    aie::accum<u64, 8> p_cont_106740;
    aie::vector<i32, 8>   cont_106750;
    aie::vector<i32, 8> p_cont_106750;
    aie::vector<i32, 8>   cont_106759;
    aie::vector<i32, 8> p_cont_106759;
    aie::accum<u64, 8>   cont_106770;
    aie::accum<u64, 8> p_cont_106770;
    aie::vector<i32, 8>   cont_106774;
    aie::vector<i32, 8> p_cont_106774;
    aie::vector<i32, 8>   cont_106384;
    aie::vector<i32, 8> p_cont_106384;
    aie::vector<i32, 8>   cont_106387;
    aie::vector<i32, 8> p_cont_106387;
    aie::vector<i32, 8>   cont_106390;
    aie::vector<i32, 8> p_cont_106390;
    aie::vector<i32, 8>   cont_106398;
    aie::vector<i32, 8> p_cont_106398;
    aie::vector<i32, 8>   cont_106401;
    aie::vector<i32, 8> p_cont_106401;
    aie::vector<i32, 8>   cont_106404;
    aie::vector<i32, 8> p_cont_106404;
    i32   for_body_106415;
    i32 p_for_body_106415;
    aie::vector<i32, 8>   cont_106426;
    aie::vector<i32, 8> p_cont_106426;
    aie::vector<i32, 8>   cont_106433;
    aie::vector<i32, 8> p_cont_106433;
    aie::vector<i32, 8>   cont_106438;
    aie::vector<i32, 8> p_cont_106438;
    aie::vector<i32, 8>   cont_106446;
    aie::vector<i32, 8> p_cont_106446;
    aie::vector<i32, 8>   cont_106458;
    aie::vector<i32, 8> p_cont_106458;
    aie::vector<i32, 8>   cont_106461;
    aie::vector<i32, 8> p_cont_106461;
    aie::vector<i32, 8>   cont_106471;
    aie::vector<i32, 8> p_cont_106471;
    aie::vector<i32, 8>   cont_106483;
    aie::vector<i32, 8> p_cont_106483;
    aie::accum<u64, 8>   cont_106497;
    aie::accum<u64, 8> p_cont_106497;
    aie::vector<i32, 8>   cont_106508;
    aie::vector<i32, 8> p_cont_106508;
    aie::vector<i32, 8>   cont_106516;
    aie::vector<i32, 8> p_cont_106516;
    aie::accum<u64, 8>   cont_106536;
    aie::accum<u64, 8> p_cont_106536;
    aie::vector<i32, 8>   cont_106545;
    aie::vector<i32, 8> p_cont_106545;
    aie::vector<i32, 8>   cont_106554;
    aie::vector<i32, 8> p_cont_106554;
    aie::accum<u64, 8>   cont_106565;
    aie::accum<u64, 8> p_cont_106565;
    aie::vector<i32, 8>   cont_106575;
    aie::vector<i32, 8> p_cont_106575;
    static i32 cont_106280_reserved[3072];
    i32 _106312;
    i32 _106340;
    i32 _106335;
    i32 lbuf_seg_106337;
    i32 _106338;
    i32 lbuff_idx_106341;
    i32* _106342;
    i32 _106350;
    i32 cur_lbuf_cnt_106351;
    bool _106352;
    bool _106621;
    i32 _106359;
    i32 _106362;
    i32 _106363;
    i32 line0_idx_106812_slot;
    i32* line0_idx_106812 = &line0_idx_106812_slot;
    i32 line1_idx_106817_slot;
    i32* line1_idx_106817 = &line1_idx_106817_slot;
    i32 line2_idx_106822_slot;
    i32* line2_idx_106822 = &line2_idx_106822_slot;
    aie::vector<i32, 8> data_slice2_106838_slot;
    aie::vector<i32, 8>* data_slice2_106838 = &data_slice2_106838_slot;
    i32* _106423;
    i32* _106430;
    i32* _106435;
    i32 _106869;
    i32 _106874;
    i32 _106871;
    i32 _106872;
    i32 _106873;
    i32 _106875;
    i32* _106876;
    i32* _106877;
    i32 _106881;
    i32 _106883;
    i32 _106884;
    aie::accum<u64, 8> acc_106904_slot;
    aie::accum<u64, 8>* acc_106904 = &acc_106904_slot;
    i32 _106906;
    i32 _106912;
    i32 _106909;
    i32 _106910;
    i32 _106911;
    i32 _106913;
    i32* _106914;
    i32* _106915;
    i32 _106919;
    i32 _106921;
    i32 _106922;
    aie::accum<u64, 8> _106929;
    aie::accum<u64, 8> _106931;
    i32 _106936;
    i32 _106940;
    i32 _106938;
    i32 _106939;
    i32 _106941;
    i32* _106942;
    i32* _106943;
    i32 _106948;
    i32 _106950;
    i32 _106951;
    aie::accum<u64, 8> _106958;
    aie::vector<i32, 8> _106960;
    aie::accum<u64, 8> _106962;
    aie::vector<i32, 8> _106963;
    i32 line0_idx_106626_slot;
    i32* line0_idx_106626 = &line0_idx_106626_slot;
    i32 line1_idx_106631_slot;
    i32* line1_idx_106631 = &line1_idx_106631_slot;
    i32 line2_idx_106636_slot;
    i32* line2_idx_106636 = &line2_idx_106636_slot;
    aie::vector<i32, 8> data_slice2_106652_slot;
    aie::vector<i32, 8>* data_slice2_106652 = &data_slice2_106652_slot;
    i32 _106683;
    i32 _106685;
    i32 _106686;
    i32* _106687;
    i32* _106688;
    i32 _106692;
    i32 _106694;
    i32 _106695;
    aie::accum<u64, 8> acc_106715_slot;
    aie::accum<u64, 8>* acc_106715 = &acc_106715_slot;
    i32 _106717;
    i32 _106719;
    i32* _106720;
    i32* _106721;
    i32 _106725;
    i32 _106727;
    i32 _106728;
    aie::accum<u64, 8> _106735;
    aie::accum<u64, 8> _106737;
    i32 _106742;
    i32 _106744;
    i32 _106745;
    i32* _106746;
    i32* _106747;
    i32 _106752;
    i32 _106754;
    i32 _106755;
    aie::accum<u64, 8> _106762;
    aie::vector<i32, 8> _106764;
    aie::accum<u64, 8> _106766;
    aie::vector<i32, 8> _106767;
    i32 line0_idx_106368_slot;
    i32* line0_idx_106368 = &line0_idx_106368_slot;
    i32 line1_idx_106373_slot;
    i32* line1_idx_106373 = &line1_idx_106373_slot;
    i32 line2_idx_106378_slot;
    i32* line2_idx_106378 = &line2_idx_106378_slot;
    aie::vector<i32, 8> data_slice2_106394_slot;
    aie::vector<i32, 8>* data_slice2_106394 = &data_slice2_106394_slot;
    i32 _106439;
    i32 _106441;
    i32* _106442;
    i32* _106443;
    i32 _106451;
    i32 _106453;
    i32 _106454;
    aie::accum<u64, 8> acc_106499_slot;
    aie::accum<u64, 8>* acc_106499 = &acc_106499_slot;
    i32 _106501;
    i32 _106503;
    i32* _106504;
    i32* _106505;
    i32 _106509;
    i32 _106511;
    i32 _106512;
    aie::accum<u64, 8> _106531;
    aie::accum<u64, 8> _106533;
    i32 _106538;
    i32 _106540;
    i32* _106541;
    i32* _106542;
    i32 _106547;
    i32 _106549;
    i32 _106550;
    aie::accum<u64, 8> _106557;
    aie::vector<i32, 8> _106559;
    aie::accum<u64, 8> _106561;
    aie::vector<i32, 8> _106562;
    {
        _106423 = (&(&g_laplace_coeffs_row0_106422)->e[0]);
        _106430 = (&(&g_laplace_coeffs_row1_106429)->e[0]);
        _106435 = (&(&g_laplace_coeffs_row2_106434)->e[0]);
        set_sat();
        goto cont_106280;
    }
cont_106280: {
        p_cont_106289 = cont_106280_reserved;
        goto cont_106287;
    }
cont_106287: {
        cont_106289 = p_cont_106289;
        int i106290;
        for (i106290 = 0; i106290 < 1022; i106290++)
        chess_prepare_for_pipelining {
            p_for_body_106302 = i106290;
            goto for_body_106300;
            pipeline_continue_106588: continue;
        }
        goto _86755_107019;
    }
for_body_106300: {
        for_body_106302 = p_for_body_106302;
        _106312 = *&g_lbuf_cnt_106311;
        int i106303;
        for (i106303 = 0; i106303 < 128; i106303++)
        chess_prepare_for_pipelining {
            p_for_body_106318 = i106303;
            goto for_body_106316;
            pipeline_continue_106345: continue;
        }
        goto for_break_106348;
    }
for_body_106316: {
        for_body_106318 = p_for_body_106318;
        cont_106327 = window_readincr_v<8>(_86755_106276);
        p_cont_106327 = cont_106327;
        goto cont_106325;
    }
cont_106325: {
        cont_106327 = p_cont_106327;
        _106340 = (8 * for_body_106318);
        _106335 = (_106312);
        lbuf_seg_106337 = (_106335 % 3);
        _106338 = (1024 * lbuf_seg_106337);
        lbuff_idx_106341 = (_106338 + _106340);
        _106342 = (&(cont_106289)[lbuff_idx_106341]);
        aie::store_v(_106342, cont_106327);
        goto continue_wrapper_106343;
    }
continue_wrapper_106343: {
        goto pipeline_continue_106345;
    }
for_break_106348: {
        _106350 = *&g_lbuf_cnt_106311;
        cur_lbuf_cnt_106351 = (_106350);
        _106352 = (cur_lbuf_cnt_106351 == 0);
        _106359 = *&g_lbuf_cnt_106311;
        _106362 = (_106359);
        _106363 = (1 + _106362);
        (*&g_lbuf_cnt_106311 = _106363);
        if (_106352) goto branch_true_106353; else goto branch_false_106620;
    }
branch_false_106620: {
        _106621 = (cur_lbuf_cnt_106351 == 1);
        if (_106621) goto branch_true_106622; else goto branch_false_106808;
    }
branch_false_106808: {
        (*line0_idx_106812 = 0);
        (*line1_idx_106817 = 0);
        (*line2_idx_106822 = 0);
        cont_106828 = aie::zeros<i32, 8>();
        p_cont_106828 = cont_106828;
        goto cont_106826;
    }
cont_106826: {
        cont_106828 = p_cont_106828;
        cont_106831 = aie::zeros<i32, 8>();
        p_cont_106831 = cont_106831;
        goto cont_106829;
    }
cont_106829: {
        cont_106831 = p_cont_106831;
        cont_106834 = aie::zeros<i32, 8>();
        p_cont_106834 = cont_106834;
        goto cont_106832;
    }
cont_106832: {
        cont_106834 = p_cont_106834;
        (*data_slice2_106838 = cont_106834);
        cont_106842 = aie::zeros<i32, 8>();
        p_cont_106842 = cont_106842;
        goto cont_106840;
    }
cont_106840: {
        cont_106842 = p_cont_106842;
        cont_106845 = aie::zeros<i32, 8>();
        p_cont_106845 = cont_106845;
        goto cont_106843;
    }
cont_106843: {
        cont_106845 = p_cont_106845;
        cont_106848 = aie::zeros<i32, 8>();
        p_cont_106848 = cont_106848;
        goto cont_106846;
    }
cont_106846: {
        cont_106848 = p_cont_106848;
        int i106849;
        for (i106849 = 0; i106849 < 128; i106849++)
        chess_prepare_for_pipelining {
            p_for_body_106859 = i106849;
            goto for_body_106857;
            pipeline_continue_106973: continue;
        }
        goto continue_wrapper_106586;
    }
for_body_106857: {
        for_body_106859 = p_for_body_106859;
        cont_106862 = aie::load_v<8>(_106423);
        p_cont_106862 = cont_106862;
        goto cont_106860;
    }
cont_106860: {
        cont_106862 = p_cont_106862;
        cont_106865 = aie::load_v<8>(_106430);
        p_cont_106865 = cont_106865;
        goto cont_106863;
    }
cont_106863: {
        cont_106865 = p_cont_106865;
        cont_106868 = aie::load_v<8>(_106435);
        p_cont_106868 = cont_106868;
        goto cont_106866;
    }
cont_106866: {
        cont_106868 = p_cont_106868;
        _106869 = *line0_idx_106812;
        _106874 = (_106869);
        _106871 = (1 + cur_lbuf_cnt_106351);
        _106872 = (_106871 % 3);
        _106873 = (1024 * _106872);
        _106875 = (_106873 + _106874);
        _106876 = (&(cont_106289)[_106875]);
        memcpy(&_106877, &_106876, sizeof(_106877));
        cont_106880 = aie::load_v<8>(_106877);
        p_cont_106880 = cont_106880;
        goto cont_106878;
    }
cont_106878: {
        cont_106880 = p_cont_106880;
        _106881 = *line0_idx_106812;
        _106883 = (_106881);
        _106884 = (8 + _106883);
        (*line0_idx_106812 = _106884);
        cont_106888 =  (cont_106880);
        p_cont_106888 = cont_106888;
        goto cont_106886;
    }
cont_106886: {
        cont_106888 = p_cont_106888;
        cont_106891 =  (cont_106842);
        p_cont_106891 = cont_106891;
        goto cont_106889;
    }
cont_106889: {
        cont_106891 = p_cont_106891;
        cont_106894 = aie::shuffle_up_fill(cont_106888, cont_106891, 1);
        p_cont_106894 = cont_106894;
        goto cont_106892;
    }
cont_106892: {
        cont_106894 = p_cont_106894;
        cont_106842.insert(0, cont_106894);
        goto cont_106895;
    }
cont_106895: {
        cont_106899 =  (cont_106894);
        p_cont_106899 = cont_106899;
        goto cont_106897;
    }
cont_106897: {
        cont_106899 = p_cont_106899;
        cont_106902 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_106862, 0, cont_106899, 0);
        p_cont_106902 = cont_106902;
        goto cont_106900;
    }
cont_106900: {
        cont_106902 = p_cont_106902;
        (*acc_106904 = cont_106902);
        _106906 = *line1_idx_106817;
        _106912 = (_106906);
        _106909 = (2 + cur_lbuf_cnt_106351);
        _106910 = (_106909 % 3);
        _106911 = (1024 * _106910);
        _106913 = (_106911 + _106912);
        _106914 = (&(cont_106289)[_106913]);
        memcpy(&_106915, &_106914, sizeof(_106915));
        cont_106918 = aie::load_v<8>(_106915);
        p_cont_106918 = cont_106918;
        goto cont_106916;
    }
cont_106916: {
        cont_106918 = p_cont_106918;
        _106919 = *line1_idx_106817;
        _106921 = (_106919);
        _106922 = (8 + _106921);
        (*line1_idx_106817 = _106922);
        cont_106926 = aie::shuffle_up_fill(cont_106918, cont_106845, 1);
        p_cont_106926 = cont_106926;
        goto cont_106924;
    }
cont_106924: {
        cont_106926 = p_cont_106926;
        cont_106845.insert(0, cont_106926);
        goto cont_106927;
    }
cont_106927: {
        _106929 = *acc_106904;
        _106931 = (_106929);
        cont_106934 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_106931, cont_106865, 0, cont_106926, 0);
        p_cont_106934 = cont_106934;
        goto cont_106932;
    }
cont_106932: {
        cont_106934 = p_cont_106934;
        (*acc_106904 = cont_106934);
        _106936 = *line2_idx_106822;
        _106940 = (_106936);
        _106938 = (cur_lbuf_cnt_106351 % 3);
        _106939 = (1024 * _106938);
        _106941 = (_106939 + _106940);
        _106942 = (&(cont_106289)[_106941]);
        memcpy(&_106943, &_106942, sizeof(_106943));
        cont_106946 = aie::load_v<8>(_106943);
        p_cont_106946 = cont_106946;
        goto cont_106944;
    }
cont_106944: {
        cont_106946 = p_cont_106946;
        (*data_slice2_106838 = cont_106946);
        _106948 = *line2_idx_106822;
        _106950 = (_106948);
        _106951 = (8 + _106950);
        (*line2_idx_106822 = _106951);
        cont_106955 = aie::shuffle_up_fill(cont_106946, cont_106848, 1);
        p_cont_106955 = cont_106955;
        goto cont_106953;
    }
cont_106953: {
        cont_106955 = p_cont_106955;
        cont_106848.insert(0, cont_106955);
        goto cont_106956;
    }
cont_106956: {
        _106958 = *acc_106904;
        _106960 = *data_slice2_106838;
        _106962 = (_106958);
        _106963 = (_106960);
        cont_106966 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_106962, cont_106868, 0, _106963, 0);
        p_cont_106966 = cont_106966;
        goto cont_106964;
    }
cont_106964: {
        cont_106966 = p_cont_106966;
        (*acc_106904 = cont_106966);
        cont_106970 = srs(cont_106966, 0);
        p_cont_106970 = cont_106970;
        goto cont_106968;
    }
cont_106968: {
        cont_106970 = p_cont_106970;
        window_writeincr(_86755_106275, cont_106970);
        goto continue_wrapper_106971;
    }
continue_wrapper_106971: {
        goto pipeline_continue_106973;
    }
branch_true_106622: {
        (*line0_idx_106626 = 0);
        (*line1_idx_106631 = 0);
        (*line2_idx_106636 = 0);
        cont_106642 = aie::zeros<i32, 8>();
        p_cont_106642 = cont_106642;
        goto cont_106640;
    }
cont_106640: {
        cont_106642 = p_cont_106642;
        cont_106645 = aie::zeros<i32, 8>();
        p_cont_106645 = cont_106645;
        goto cont_106643;
    }
cont_106643: {
        cont_106645 = p_cont_106645;
        cont_106648 = aie::zeros<i32, 8>();
        p_cont_106648 = cont_106648;
        goto cont_106646;
    }
cont_106646: {
        cont_106648 = p_cont_106648;
        (*data_slice2_106652 = cont_106648);
        cont_106656 = aie::zeros<i32, 8>();
        p_cont_106656 = cont_106656;
        goto cont_106654;
    }
cont_106654: {
        cont_106656 = p_cont_106656;
        cont_106659 = aie::zeros<i32, 8>();
        p_cont_106659 = cont_106659;
        goto cont_106657;
    }
cont_106657: {
        cont_106659 = p_cont_106659;
        cont_106662 = aie::zeros<i32, 8>();
        p_cont_106662 = cont_106662;
        goto cont_106660;
    }
cont_106660: {
        cont_106662 = p_cont_106662;
        int i106663;
        for (i106663 = 0; i106663 < 128; i106663++)
        chess_prepare_for_pipelining {
            p_for_body_106673 = i106663;
            goto for_body_106671;
            pipeline_continue_106777: continue;
        }
        goto continue_wrapper_106586;
    }
for_body_106671: {
        for_body_106673 = p_for_body_106673;
        cont_106676 = aie::load_v<8>(_106423);
        p_cont_106676 = cont_106676;
        goto cont_106674;
    }
cont_106674: {
        cont_106676 = p_cont_106676;
        cont_106679 = aie::load_v<8>(_106430);
        p_cont_106679 = cont_106679;
        goto cont_106677;
    }
cont_106677: {
        cont_106679 = p_cont_106679;
        cont_106682 = aie::load_v<8>(_106435);
        p_cont_106682 = cont_106682;
        goto cont_106680;
    }
cont_106680: {
        cont_106682 = p_cont_106682;
        _106683 = *line0_idx_106626;
        _106685 = (_106683);
        _106686 = (1024 + _106685);
        _106687 = (&(cont_106289)[_106686]);
        memcpy(&_106688, &_106687, sizeof(_106688));
        cont_106691 = aie::load_v<8>(_106688);
        p_cont_106691 = cont_106691;
        goto cont_106689;
    }
cont_106689: {
        cont_106691 = p_cont_106691;
        _106692 = *line0_idx_106626;
        _106694 = (_106692);
        _106695 = (8 + _106694);
        (*line0_idx_106626 = _106695);
        cont_106699 =  (cont_106691);
        p_cont_106699 = cont_106699;
        goto cont_106697;
    }
cont_106697: {
        cont_106699 = p_cont_106699;
        cont_106702 =  (cont_106656);
        p_cont_106702 = cont_106702;
        goto cont_106700;
    }
cont_106700: {
        cont_106702 = p_cont_106702;
        cont_106705 = aie::shuffle_up_fill(cont_106699, cont_106702, 1);
        p_cont_106705 = cont_106705;
        goto cont_106703;
    }
cont_106703: {
        cont_106705 = p_cont_106705;
        cont_106656.insert(0, cont_106705);
        goto cont_106706;
    }
cont_106706: {
        cont_106710 =  (cont_106705);
        p_cont_106710 = cont_106710;
        goto cont_106708;
    }
cont_106708: {
        cont_106710 = p_cont_106710;
        cont_106713 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_106676, 0, cont_106710, 0);
        p_cont_106713 = cont_106713;
        goto cont_106711;
    }
cont_106711: {
        cont_106713 = p_cont_106713;
        (*acc_106715 = cont_106713);
        _106717 = *line1_idx_106631;
        _106719 = (_106717);
        _106720 = (&(cont_106289)[_106719]);
        memcpy(&_106721, &_106720, sizeof(_106721));
        cont_106724 = aie::load_v<8>(_106721);
        p_cont_106724 = cont_106724;
        goto cont_106722;
    }
cont_106722: {
        cont_106724 = p_cont_106724;
        _106725 = *line1_idx_106631;
        _106727 = (_106725);
        _106728 = (8 + _106727);
        (*line1_idx_106631 = _106728);
        cont_106732 = aie::shuffle_up_fill(cont_106724, cont_106659, 1);
        p_cont_106732 = cont_106732;
        goto cont_106730;
    }
cont_106730: {
        cont_106732 = p_cont_106732;
        cont_106659.insert(0, cont_106732);
        goto cont_106733;
    }
cont_106733: {
        _106735 = *acc_106715;
        _106737 = (_106735);
        cont_106740 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_106737, cont_106679, 0, cont_106732, 0);
        p_cont_106740 = cont_106740;
        goto cont_106738;
    }
cont_106738: {
        cont_106740 = p_cont_106740;
        (*acc_106715 = cont_106740);
        _106742 = *line2_idx_106636;
        _106744 = (_106742);
        _106745 = (1024 + _106744);
        _106746 = (&(cont_106289)[_106745]);
        memcpy(&_106747, &_106746, sizeof(_106747));
        cont_106750 = aie::load_v<8>(_106747);
        p_cont_106750 = cont_106750;
        goto cont_106748;
    }
cont_106748: {
        cont_106750 = p_cont_106750;
        (*data_slice2_106652 = cont_106750);
        _106752 = *line2_idx_106636;
        _106754 = (_106752);
        _106755 = (8 + _106754);
        (*line2_idx_106636 = _106755);
        cont_106759 = aie::shuffle_up_fill(cont_106750, cont_106662, 1);
        p_cont_106759 = cont_106759;
        goto cont_106757;
    }
cont_106757: {
        cont_106759 = p_cont_106759;
        cont_106662.insert(0, cont_106759);
        goto cont_106760;
    }
cont_106760: {
        _106762 = *acc_106715;
        _106764 = *data_slice2_106652;
        _106766 = (_106762);
        _106767 = (_106764);
        cont_106770 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_106766, cont_106682, 0, _106767, 0);
        p_cont_106770 = cont_106770;
        goto cont_106768;
    }
cont_106768: {
        cont_106770 = p_cont_106770;
        (*acc_106715 = cont_106770);
        cont_106774 = srs(cont_106770, 0);
        p_cont_106774 = cont_106774;
        goto cont_106772;
    }
cont_106772: {
        cont_106774 = p_cont_106774;
        window_writeincr(_86755_106275, cont_106774);
        goto continue_wrapper_106775;
    }
continue_wrapper_106775: {
        goto pipeline_continue_106777;
    }
branch_true_106353: {
        (*line0_idx_106368 = 0);
        (*line1_idx_106373 = 0);
        (*line2_idx_106378 = 0);
        cont_106384 = aie::zeros<i32, 8>();
        p_cont_106384 = cont_106384;
        goto cont_106382;
    }
cont_106382: {
        cont_106384 = p_cont_106384;
        cont_106387 = aie::zeros<i32, 8>();
        p_cont_106387 = cont_106387;
        goto cont_106385;
    }
cont_106385: {
        cont_106387 = p_cont_106387;
        cont_106390 = aie::zeros<i32, 8>();
        p_cont_106390 = cont_106390;
        goto cont_106388;
    }
cont_106388: {
        cont_106390 = p_cont_106390;
        (*data_slice2_106394 = cont_106390);
        cont_106398 = aie::zeros<i32, 8>();
        p_cont_106398 = cont_106398;
        goto cont_106396;
    }
cont_106396: {
        cont_106398 = p_cont_106398;
        cont_106401 = aie::zeros<i32, 8>();
        p_cont_106401 = cont_106401;
        goto cont_106399;
    }
cont_106399: {
        cont_106401 = p_cont_106401;
        cont_106404 = aie::zeros<i32, 8>();
        p_cont_106404 = cont_106404;
        goto cont_106402;
    }
cont_106402: {
        cont_106404 = p_cont_106404;
        int i106405;
        for (i106405 = 0; i106405 < 128; i106405++)
        chess_prepare_for_pipelining {
            p_for_body_106415 = i106405;
            goto for_body_106413;
            pipeline_continue_106583: continue;
        }
        goto continue_wrapper_106586;
    }
for_body_106413: {
        for_body_106415 = p_for_body_106415;
        cont_106426 = aie::load_v<8>(_106423);
        p_cont_106426 = cont_106426;
        goto cont_106424;
    }
cont_106424: {
        cont_106426 = p_cont_106426;
        cont_106433 = aie::load_v<8>(_106430);
        p_cont_106433 = cont_106433;
        goto cont_106431;
    }
cont_106431: {
        cont_106433 = p_cont_106433;
        cont_106438 = aie::load_v<8>(_106435);
        p_cont_106438 = cont_106438;
        goto cont_106436;
    }
cont_106436: {
        cont_106438 = p_cont_106438;
        _106439 = *line0_idx_106368;
        _106441 = (_106439);
        _106442 = (&(cont_106289)[_106441]);
        memcpy(&_106443, &_106442, sizeof(_106443));
        cont_106446 = aie::load_v<8>(_106443);
        p_cont_106446 = cont_106446;
        goto cont_106444;
    }
cont_106444: {
        cont_106446 = p_cont_106446;
        _106451 = *line0_idx_106368;
        _106453 = (_106451);
        _106454 = (8 + _106453);
        (*line0_idx_106368 = _106454);
        cont_106458 =  (cont_106446);
        p_cont_106458 = cont_106458;
        goto cont_106456;
    }
cont_106456: {
        cont_106458 = p_cont_106458;
        cont_106461 =  (cont_106398);
        p_cont_106461 = cont_106461;
        goto cont_106459;
    }
cont_106459: {
        cont_106461 = p_cont_106461;
        cont_106471 = aie::shuffle_up_fill(cont_106458, cont_106461, 1);
        p_cont_106471 = cont_106471;
        goto cont_106469;
    }
cont_106469: {
        cont_106471 = p_cont_106471;
        cont_106398.insert(0, cont_106471);
        goto cont_106479;
    }
cont_106479: {
        cont_106483 =  (cont_106471);
        p_cont_106483 = cont_106483;
        goto cont_106481;
    }
cont_106481: {
        cont_106483 = p_cont_106483;
        cont_106497 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_106426, 0, cont_106483, 0);
        p_cont_106497 = cont_106497;
        goto cont_106495;
    }
cont_106495: {
        cont_106497 = p_cont_106497;
        (*acc_106499 = cont_106497);
        _106501 = *line1_idx_106373;
        _106503 = (_106501);
        _106504 = (&(cont_106289)[_106503]);
        memcpy(&_106505, &_106504, sizeof(_106505));
        cont_106508 = aie::load_v<8>(_106505);
        p_cont_106508 = cont_106508;
        goto cont_106506;
    }
cont_106506: {
        cont_106508 = p_cont_106508;
        _106509 = *line1_idx_106373;
        _106511 = (_106509);
        _106512 = (8 + _106511);
        (*line1_idx_106373 = _106512);
        cont_106516 = aie::shuffle_up_fill(cont_106508, cont_106401, 1);
        p_cont_106516 = cont_106516;
        goto cont_106514;
    }
cont_106514: {
        cont_106516 = p_cont_106516;
        cont_106401.insert(0, cont_106516);
        goto cont_106517;
    }
cont_106517: {
        _106531 = *acc_106499;
        _106533 = (_106531);
        cont_106536 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_106533, cont_106433, 0, cont_106516, 0);
        p_cont_106536 = cont_106536;
        goto cont_106534;
    }
cont_106534: {
        cont_106536 = p_cont_106536;
        (*acc_106499 = cont_106536);
        _106538 = *line2_idx_106378;
        _106540 = (_106538);
        _106541 = (&(cont_106289)[_106540]);
        memcpy(&_106542, &_106541, sizeof(_106542));
        cont_106545 = aie::load_v<8>(_106542);
        p_cont_106545 = cont_106545;
        goto cont_106543;
    }
cont_106543: {
        cont_106545 = p_cont_106545;
        (*data_slice2_106394 = cont_106545);
        _106547 = *line2_idx_106378;
        _106549 = (_106547);
        _106550 = (8 + _106549);
        (*line2_idx_106378 = _106550);
        cont_106554 = aie::shuffle_up_fill(cont_106545, cont_106404, 1);
        p_cont_106554 = cont_106554;
        goto cont_106552;
    }
cont_106552: {
        cont_106554 = p_cont_106554;
        cont_106404.insert(0, cont_106554);
        goto cont_106555;
    }
cont_106555: {
        _106557 = *acc_106499;
        _106559 = *data_slice2_106394;
        _106561 = (_106557);
        _106562 = (_106559);
        cont_106565 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32, u64>::mac(_106561, cont_106438, 0, _106562, 0);
        p_cont_106565 = cont_106565;
        goto cont_106563;
    }
cont_106563: {
        cont_106565 = p_cont_106565;
        (*acc_106499 = cont_106565);
        cont_106575 = srs(cont_106565, 0);
        p_cont_106575 = cont_106575;
        goto cont_106573;
    }
cont_106573: {
        cont_106575 = p_cont_106575;
        window_writeincr(_86755_106275, cont_106575);
        goto continue_wrapper_106581;
    }
continue_wrapper_106581: {
        goto pipeline_continue_106583;
    }
continue_wrapper_106586: {
        goto pipeline_continue_106588;
    }
_86755_107019: {
        return;
    }
}


    
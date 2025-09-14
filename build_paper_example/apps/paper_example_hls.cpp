
#include <hls_stream.h>
#include <hls_math.h>

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

#ifndef __SYNTHESIS__
void hls_top(array_30[131072], array_30[131072], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
void _124986(array_30[131072], hls::stream<channel8_i32_33>*);
void _125050(hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
void _126012(hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
void _126209(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _125050(hls::stream<channel8_i32_33>* _125050_133907, hls::stream<channel8_i32_33>* _125050_133908) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_125050_133907 struct_level
#pragma HLS data_pack variable=_125050_133908 struct_level
i32   loop_133911;
    i32 p_loop_133911;
    i32   for_body_133924;
    i32 p_for_body_133924;
    array_30   cont_133927;
    array_30 p_cont_133927;
    i32   cont_133934;
    i32 p_cont_133934;
    i32   cont_133940;
    i32 p_cont_133940;
    i32   cont_133947;
    i32 p_cont_133947;
    i32   cont_133953;
    i32 p_cont_133953;
    i32   cont_133960;
    i32 p_cont_133960;
    i32   cont_133967;
    i32 p_cont_133967;
    i32   cont_133974;
    i32 p_cont_133974;
    bool _133912;
    i32 _133928;
    bool _133930;
    array_30 _134031;
    array_30 value_vec_133977_slot;
    array_30* value_vec_133977 = &value_vec_133977_slot;
    i32 _133935;
    bool _133936;
    i32* _134024;
    i32 _133942;
    bool _133943;
    i32* _134018;
    i32 _133948;
    bool _133949;
    i32* _134012;
    i32 _133955;
    bool _133956;
    i32* _134006;
    i32 _133962;
    bool _133963;
    i32* _134000;
    i32 _133969;
    bool _133970;
    i32* _133994;
    i32* _133978;
    array_30 _133980;
    array_30 _133982;
    i32 _133990;
    {
        _134031.e[0ULL] = 0;
        _134031.e[1ULL] = 0;
        _134031.e[2ULL] = 0;
        _134031.e[3ULL] = 0;
        _134031.e[4ULL] = 0;
        _134031.e[5ULL] = 0;
        _134031.e[6ULL] = 0;
        _134031.e[7ULL] = 0;
        p_loop_133911 = 0;
        goto loop_133909;
    }
loop_133909: {
        loop_133911 = p_loop_133911;
        _133912 = (loop_133911 < 1024);
        if (_133912) goto branch_true_133913; else goto branch_false_134039;
    }
branch_false_134039: {
        return void();
    }
branch_true_133913: {
        int i133914;
        for (i133914 = 0; i133914 < 128; i133914++) {
            #pragma HLS PIPELINE
            p_for_body_133924 = i133914;
            goto for_body_133922;
            pipeline_continue_133985: continue;
        }
        goto cont_133988;
    }
for_body_133922: {
        for_body_133924 = p_for_body_133924;
        *_125050_133907 >> cont_133927;
        p_cont_133927 = cont_133927;
        goto cont_133925;
    }
cont_133925: {
        cont_133927 = p_cont_133927;
        _133928 = (cont_133927.e[0]);
        _133930 = (_133928 < 3);
        (*value_vec_133977 = _134031);
        if (_133930) goto branch_true_133931; else goto branch_false_134034;
    }
branch_false_134034: {
        p_cont_133934 = 3;
        goto cont_133932;
    }
branch_true_133931: {
        p_cont_133934 = _133928;
        goto cont_133932;
    }
cont_133932: {
        cont_133934 = p_cont_133934;
        _133935 = (cont_133927.e[1]);
        _133936 = (_133935 < 3);
        _134024 = (&(value_vec_133977)->e[0]);
        (*_134024 = cont_133934);
        if (_133936) goto branch_true_133937; else goto branch_false_134027;
    }
branch_false_134027: {
        p_cont_133940 = 3;
        goto cont_133938;
    }
branch_true_133937: {
        p_cont_133940 = _133935;
        goto cont_133938;
    }
cont_133938: {
        cont_133940 = p_cont_133940;
        _133942 = (cont_133927.e[2]);
        _133943 = (_133942 < 3);
        _134018 = (&(value_vec_133977)->e[1]);
        (*_134018 = cont_133940);
        if (_133943) goto branch_true_133944; else goto branch_false_134021;
    }
branch_false_134021: {
        p_cont_133947 = 3;
        goto cont_133945;
    }
branch_true_133944: {
        p_cont_133947 = _133942;
        goto cont_133945;
    }
cont_133945: {
        cont_133947 = p_cont_133947;
        _133948 = (cont_133927.e[3]);
        _133949 = (_133948 < 3);
        _134012 = (&(value_vec_133977)->e[2]);
        (*_134012 = cont_133947);
        if (_133949) goto branch_true_133950; else goto branch_false_134015;
    }
branch_false_134015: {
        p_cont_133953 = 3;
        goto cont_133951;
    }
branch_true_133950: {
        p_cont_133953 = _133948;
        goto cont_133951;
    }
cont_133951: {
        cont_133953 = p_cont_133953;
        _133955 = (cont_133927.e[4]);
        _133956 = (_133955 < 3);
        _134006 = (&(value_vec_133977)->e[3]);
        (*_134006 = cont_133953);
        if (_133956) goto branch_true_133957; else goto branch_false_134009;
    }
branch_false_134009: {
        p_cont_133960 = 3;
        goto cont_133958;
    }
branch_true_133957: {
        p_cont_133960 = _133955;
        goto cont_133958;
    }
cont_133958: {
        cont_133960 = p_cont_133960;
        _133962 = (cont_133927.e[5]);
        _133963 = (_133962 < 3);
        _134000 = (&(value_vec_133977)->e[4]);
        (*_134000 = cont_133960);
        if (_133963) goto branch_true_133964; else goto branch_false_134003;
    }
branch_false_134003: {
        p_cont_133967 = 3;
        goto cont_133965;
    }
branch_true_133964: {
        p_cont_133967 = _133962;
        goto cont_133965;
    }
cont_133965: {
        cont_133967 = p_cont_133967;
        _133969 = (cont_133927.e[6]);
        _133970 = (_133969 < 3);
        _133994 = (&(value_vec_133977)->e[5]);
        (*_133994 = cont_133967);
        if (_133970) goto branch_true_133971; else goto branch_false_133997;
    }
branch_false_133997: {
        p_cont_133974 = 3;
        goto cont_133972;
    }
branch_true_133971: {
        p_cont_133974 = _133969;
        goto cont_133972;
    }
cont_133972: {
        cont_133974 = p_cont_133974;
        _133978 = (&(value_vec_133977)->e[6]);
        (*_133978 = cont_133974);
        _133980 = *value_vec_133977;
        _133982 = (_133980);
        *_125050_133908 << _133982;
        goto continue_wrapper_133983;
    }
continue_wrapper_133983: {
        goto pipeline_continue_133985;
    }
cont_133988: {
        _133990 = (1 + loop_133911);
        p_loop_133911 = _133990;
        goto loop_133909;
    }
}

void _126209(array_30 _126209_133790[131072], hls::stream<channel8_i32_33>* _126209_133791) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_126209_133790 struct_level
#pragma HLS data_pack variable=_126209_133791 struct_level
i32   loop_133794;
    i32 p_loop_133794;
    i32   loop_133795;
    i32 p_loop_133795;
    i32   loop_133796;
    i32 p_loop_133796;
    i32   for_body_133811;
    i32 p_for_body_133811;
    array_30   cont_133818;
    array_30 p_cont_133818;
    bool _133797;
    i32 _133822;
    i32 idx_133823;
    array_30* _133824;
    i32 _133828;
    {
        p_loop_133794 = 0;
        p_loop_133795 = 1024;
        p_loop_133796 = 1;
        goto loop_133792;
    }
loop_133792: {
        loop_133794 = p_loop_133794;
        loop_133795 = p_loop_133795;
        loop_133796 = p_loop_133796;
        _133797 = (loop_133794 < loop_133795);
        if (_133797) goto branch_true_133798; else goto branch_false_133833;
    }
branch_false_133833: {
        return void();
    }
branch_true_133798: {
        int i133799;
        for (i133799 = 0; i133799 < 128; i133799++) {
            #pragma HLS PIPELINE
            p_for_body_133811 = i133799;
            goto for_body_133809;
            pipeline_continue_133819: continue;
        }
        goto cont_133826;
    }
for_body_133809: {
        for_body_133811 = p_for_body_133811;
        *_126209_133791 >> cont_133818;
        p_cont_133818 = cont_133818;
        goto cont_133816;
    }
cont_133816: {
        cont_133818 = p_cont_133818;
        _133822 = (128 * loop_133794);
        idx_133823 = (_133822 + for_body_133811);
        _133824 = (&(_126209_133790)[idx_133823]);
        (*_133824 = cont_133818);
        goto pipeline_continue_133819;
    }
cont_133826: {
        _133828 = (loop_133794 + loop_133796);
        p_loop_133794 = _133828;
        p_loop_133795 = loop_133795;
        p_loop_133796 = loop_133796;
        goto loop_133792;
    }
}

void _126012(hls::stream<channel8_i32_33>* _126012_134048, hls::stream<channel8_i32_33>* _126012_134049) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_126012_134048 struct_level
#pragma HLS data_pack variable=_126012_134049 struct_level
i32   loop_134052;
    i32 p_loop_134052;
    i32   for_body_134065;
    i32 p_for_body_134065;
    array_30   cont_134068;
    array_30 p_cont_134068;
    i32   cont_134074;
    i32 p_cont_134074;
    i32   cont_134080;
    i32 p_cont_134080;
    i32   cont_134086;
    i32 p_cont_134086;
    i32   cont_134092;
    i32 p_cont_134092;
    i32   cont_134098;
    i32 p_cont_134098;
    i32   cont_134104;
    i32 p_cont_134104;
    i32   cont_134110;
    i32 p_cont_134110;
    bool _134053;
    i32 _134069;
    bool _134070;
    array_30 _134031;
    array_30 value_vec_134113_slot;
    array_30* value_vec_134113 = &value_vec_134113_slot;
    i32 _134075;
    bool _134076;
    i32* _134160;
    i32 _134081;
    bool _134082;
    i32* _134154;
    i32 _134087;
    bool _134088;
    i32* _134148;
    i32 _134093;
    bool _134094;
    i32* _134142;
    i32 _134099;
    bool _134100;
    i32* _134136;
    i32 _134105;
    bool _134106;
    i32* _134130;
    i32* _134114;
    array_30 _134116;
    array_30 _134118;
    i32 _134126;
    {
        _134031.e[0ULL] = 0;
        _134031.e[1ULL] = 0;
        _134031.e[2ULL] = 0;
        _134031.e[3ULL] = 0;
        _134031.e[4ULL] = 0;
        _134031.e[5ULL] = 0;
        _134031.e[6ULL] = 0;
        _134031.e[7ULL] = 0;
        p_loop_134052 = 0;
        goto loop_134050;
    }
loop_134050: {
        loop_134052 = p_loop_134052;
        _134053 = (loop_134052 < 1024);
        if (_134053) goto branch_true_134054; else goto branch_false_134174;
    }
branch_false_134174: {
        return void();
    }
branch_true_134054: {
        int i134055;
        for (i134055 = 0; i134055 < 128; i134055++) {
            #pragma HLS PIPELINE
            p_for_body_134065 = i134055;
            goto for_body_134063;
            pipeline_continue_134121: continue;
        }
        goto cont_134124;
    }
for_body_134063: {
        for_body_134065 = p_for_body_134065;
        *_126012_134048 >> cont_134068;
        p_cont_134068 = cont_134068;
        goto cont_134066;
    }
cont_134066: {
        cont_134068 = p_cont_134068;
        _134069 = (cont_134068.e[0]);
        _134070 = (_134069 < 3);
        (*value_vec_134113 = _134031);
        if (_134070) goto branch_true_134071; else goto branch_false_134169;
    }
branch_false_134169: {
        p_cont_134074 = 3;
        goto cont_134072;
    }
branch_true_134071: {
        p_cont_134074 = _134069;
        goto cont_134072;
    }
cont_134072: {
        cont_134074 = p_cont_134074;
        _134075 = (cont_134068.e[1]);
        _134076 = (_134075 < 3);
        _134160 = (&(value_vec_134113)->e[0]);
        (*_134160 = cont_134074);
        if (_134076) goto branch_true_134077; else goto branch_false_134163;
    }
branch_false_134163: {
        p_cont_134080 = 3;
        goto cont_134078;
    }
branch_true_134077: {
        p_cont_134080 = _134075;
        goto cont_134078;
    }
cont_134078: {
        cont_134080 = p_cont_134080;
        _134081 = (cont_134068.e[2]);
        _134082 = (_134081 < 3);
        _134154 = (&(value_vec_134113)->e[1]);
        (*_134154 = cont_134080);
        if (_134082) goto branch_true_134083; else goto branch_false_134157;
    }
branch_false_134157: {
        p_cont_134086 = 3;
        goto cont_134084;
    }
branch_true_134083: {
        p_cont_134086 = _134081;
        goto cont_134084;
    }
cont_134084: {
        cont_134086 = p_cont_134086;
        _134087 = (cont_134068.e[3]);
        _134088 = (_134087 < 3);
        _134148 = (&(value_vec_134113)->e[2]);
        (*_134148 = cont_134086);
        if (_134088) goto branch_true_134089; else goto branch_false_134151;
    }
branch_false_134151: {
        p_cont_134092 = 3;
        goto cont_134090;
    }
branch_true_134089: {
        p_cont_134092 = _134087;
        goto cont_134090;
    }
cont_134090: {
        cont_134092 = p_cont_134092;
        _134093 = (cont_134068.e[4]);
        _134094 = (_134093 < 3);
        _134142 = (&(value_vec_134113)->e[3]);
        (*_134142 = cont_134092);
        if (_134094) goto branch_true_134095; else goto branch_false_134145;
    }
branch_false_134145: {
        p_cont_134098 = 3;
        goto cont_134096;
    }
branch_true_134095: {
        p_cont_134098 = _134093;
        goto cont_134096;
    }
cont_134096: {
        cont_134098 = p_cont_134098;
        _134099 = (cont_134068.e[5]);
        _134100 = (_134099 < 3);
        _134136 = (&(value_vec_134113)->e[4]);
        (*_134136 = cont_134098);
        if (_134100) goto branch_true_134101; else goto branch_false_134139;
    }
branch_false_134139: {
        p_cont_134104 = 3;
        goto cont_134102;
    }
branch_true_134101: {
        p_cont_134104 = _134099;
        goto cont_134102;
    }
cont_134102: {
        cont_134104 = p_cont_134104;
        _134105 = (cont_134068.e[6]);
        _134106 = (_134105 < 3);
        _134130 = (&(value_vec_134113)->e[5]);
        (*_134130 = cont_134104);
        if (_134106) goto branch_true_134107; else goto branch_false_134133;
    }
branch_false_134133: {
        p_cont_134110 = 3;
        goto cont_134108;
    }
branch_true_134107: {
        p_cont_134110 = _134105;
        goto cont_134108;
    }
cont_134108: {
        cont_134110 = p_cont_134110;
        _134114 = (&(value_vec_134113)->e[6]);
        (*_134114 = cont_134110);
        _134116 = *value_vec_134113;
        _134118 = (_134116);
        *_126012_134049 << _134118;
        goto continue_wrapper_134119;
    }
continue_wrapper_134119: {
        goto pipeline_continue_134121;
    }
cont_134124: {
        _134126 = (1 + loop_134052);
        p_loop_134052 = _134126;
        goto loop_134050;
    }
}

void _124986(array_30 _124986_133851[131072], hls::stream<channel8_i32_33>* _124986_133852) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_124986_133851 struct_level
#pragma HLS data_pack variable=_124986_133852 struct_level
i32   loop_133855;
    i32 p_loop_133855;
    i32   loop_133856;
    i32 p_loop_133856;
    i32   loop_133857;
    i32 p_loop_133857;
    i32   for_body_133870;
    i32 p_for_body_133870;
    bool _133858;
    i32 _133876;
    i32 idx_133877;
    array_30* _133878;
    array_30 _133879;
    array_30 _133883;
    i32 _133891;
    {
        p_loop_133855 = 0;
        p_loop_133856 = 1024;
        p_loop_133857 = 1;
        goto loop_133853;
    }
loop_133853: {
        loop_133855 = p_loop_133855;
        loop_133856 = p_loop_133856;
        loop_133857 = p_loop_133857;
        _133858 = (loop_133855 < loop_133856);
        if (_133858) goto branch_true_133859; else goto branch_false_133896;
    }
branch_false_133896: {
        return void();
    }
branch_true_133859: {
        int i133860;
        for (i133860 = 0; i133860 < 128; i133860++) {
            #pragma HLS PIPELINE
            p_for_body_133870 = i133860;
            goto for_body_133868;
            pipeline_continue_133886: continue;
        }
        goto cont_133889;
    }
for_body_133868: {
        for_body_133870 = p_for_body_133870;
        _133876 = (128 * loop_133855);
        idx_133877 = (_133876 + for_body_133870);
        _133878 = (&(_124986_133851)[idx_133877]);
        _133879 = *_133878;
        _133883 = (_133879);
        *_124986_133852 << _133883;
        goto continue_wrapper_133884;
    }
continue_wrapper_133884: {
        goto pipeline_continue_133886;
    }
cont_133889: {
        _133891 = (loop_133855 + loop_133857);
        p_loop_133855 = _133891;
        p_loop_133856 = loop_133856;
        p_loop_133857 = loop_133857;
        goto loop_133853;
    }
}

void hls_top(array_30 hls_top_133842[131072], array_30 hls_top_133843[131072], hls::stream<channel8_i32_33>* hls_top_133844, hls::stream<channel8_i32_33>* hls_top_133845, hls::stream<channel8_i32_33>* hls_top_133846, hls::stream<channel8_i32_33>* hls_top_133847) {
    #pragma HLS INTERFACE m_axi     port = hls_top_133842 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_133842
#pragma HLS STABLE variable = hls_top_133842
#pragma HLS INTERFACE m_axi     port = hls_top_133843 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_133843
#pragma HLS STABLE variable = hls_top_133843
#pragma HLS INTERFACE axis port = hls_top_133844
#pragma HLS INTERFACE axis port = hls_top_133845
#pragma HLS INTERFACE axis port = hls_top_133846
#pragma HLS INTERFACE axis port = hls_top_133847
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
hls::stream<channel8_i32_33> _134183_slot;
    hls::stream<channel8_i32_33>* _134183 = &_134183_slot;
    #pragma HLS STREAM variable = _134183 depth = 5
{
        _124986(hls_top_133842, _134183);
        
    }
next_kernel_133902: {
        _125050(_134183, hls_top_133847);
        
    }
next_kernel_134043: {
        _126012(hls_top_133845, hls_top_133846);
        
    }
next_kernel_134178: {
        _126209(hls_top_133843, hls_top_133844);
        
    }
hls_top_134192: {
        return void();
    }
}

} /* extern "C" */

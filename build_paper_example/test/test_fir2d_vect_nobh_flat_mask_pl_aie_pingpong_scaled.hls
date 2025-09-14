
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
void hls_top(array_30[131072], hls::stream<channel8_i32_33>*, array_30[131072], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*, array_30[131072], hls::stream<channel8_i32_33>*);
void _102921(array_30[131072], hls::stream<channel8_i32_33>*);
void _102807(array_30[131072], hls::stream<channel8_i32_33>*);
void _101958(array_30[131072], hls::stream<channel8_i32_33>*, hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _101958(array_30 _101958_109691[131072], hls::stream<channel8_i32_33>* _101958_109692, hls::stream<channel8_i32_33>* _101958_109693) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_101958_109691 struct_level
#pragma HLS data_pack variable=_101958_109692 struct_level
#pragma HLS data_pack variable=_101958_109693 struct_level
array_30*   cont_109701;
    array_30* p_cont_109701;
    array_30*   cont_109704;
    array_30* p_cont_109704;
    i32   for_body_109717;
    i32 p_for_body_109717;
    i32   loop_109733;
    i32 p_loop_109733;
    i32   loop_109734;
    i32 p_loop_109734;
    i32   loop_109735;
    i32 p_loop_109735;
    array_30*   if_join_109744;
    array_30* p_if_join_109744;
    array_30*   if_join_109745;
    array_30* p_if_join_109745;
    i32   for_body_109756;
    i32 p_for_body_109756;
    array_30 _101958_109688_reserved[1024];
    #pragma HLS dependence variable=_101958_109688_reserved inter false
    #pragma HLS data_pack  variable=_101958_109688_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30 cont_109699_reserved[1024];
    #pragma HLS dependence variable=cont_109699_reserved inter false
    #pragma HLS data_pack  variable=cont_109699_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30* _109721;
    array_30 _109722;
    array_30 _109727;
    array_30* _109725;
    bool _109736;
    i32 _109739;
    bool _109740;
    bool _109758;
    array_30* _109765;
    array_30 _109766;
    array_30 _109768;
    bool _109774;
    i32 _109778;
    bool _109779;
    i32 _109791;
    i32 idx_109792;
    array_30* _109793;
    array_30 _109794;
    array_30 _109797;
    array_30* _109796;
    i32 _109788;
    {
        p_cont_109701 = _101958_109688_reserved;
        goto cont_109699;
    }
cont_109699: {
        cont_109701 = p_cont_109701;
        p_cont_109704 = cont_109699_reserved;
        goto cont_109702;
    }
cont_109702: {
        cont_109704 = p_cont_109704;
        int i109705;
        for (i109705 = 0; i109705 < 128; i109705++) {
            #pragma HLS PIPELINE
            p_for_body_109717 = i109705;
            goto for_body_109715;
            pipeline_continue_109718: continue;
        }
        goto for_break_109729;
    }
for_body_109715: {
        for_body_109717 = p_for_body_109717;
        _109721 = (&(_101958_109691)[for_body_109717]);
        _109722 = *_109721;
        _109727 = (_109722);
        _109725 = (&(cont_109701)[for_body_109717]);
        (*_109725 = _109727);
        goto pipeline_continue_109718;
    }
for_break_109729: {
        p_loop_109733 = 0;
        p_loop_109734 = 1024;
        p_loop_109735 = 1;
        goto loop_109731;
    }
loop_109731: {
        loop_109733 = p_loop_109733;
        loop_109734 = p_loop_109734;
        loop_109735 = p_loop_109735;
        _109736 = (loop_109733 < loop_109734);
        if (_109736) goto branch_true_109737; else goto branch_false_109817;
    }
branch_false_109817: {
        return void();
    }
branch_true_109737: {
        _109739 = (1 & loop_109733);
        _109740 = (_109739 == 0);
        if (_109740) goto branch_true_109741; else goto branch_false_109814;
    }
branch_false_109814: {
        p_if_join_109744 = cont_109704;
        p_if_join_109745 = cont_109701;
        goto if_join_109742;
    }
branch_true_109741: {
        p_if_join_109744 = cont_109701;
        p_if_join_109745 = cont_109704;
        goto if_join_109742;
    }
if_join_109742: {
        if_join_109744 = p_if_join_109744;
        if_join_109745 = p_if_join_109745;
        int i109746;
        for (i109746 = 0; i109746 < 128; i109746++) {
            #pragma HLS PIPELINE
            p_for_body_109756 = i109746;
            goto for_body_109754;
            pipeline_continue_109783: continue;
        }
        goto cont_109786;
    }
for_body_109754: {
        for_body_109756 = p_for_body_109756;
        _109758 = (loop_109733 <= 512);
        _109765 = (&(if_join_109744)[for_body_109756]);
        _109766 = *_109765;
        _109768 = (_109766);
        if (_109758) goto branch_true_109759; else goto branch_false_109809;
    }
branch_false_109809: {
        goto if_join_109771;
    }
branch_true_109759: {
        *_101958_109692 << _109768;
        goto cont_109769;
    }
cont_109769: {
        goto if_join_109771;
    }
if_join_109771: {
        _109774 = (511 <= loop_109733);
        if (_109774) goto branch_true_109775; else goto branch_false_109804;
    }
branch_false_109804: {
        goto cont_109776;
    }
branch_true_109775: {
        *_101958_109693 << _109768;
        goto cont_109776;
    }
cont_109776: {
        _109778 = (1 + loop_109733);
        _109779 = (_109778 < 1024);
        if (_109779) goto branch_true_109780; else goto branch_false_109800;
    }
branch_false_109800: {
        goto continue_wrapper_109781;
    }
branch_true_109780: {
        _109791 = (128 * _109778);
        idx_109792 = (_109791 + for_body_109756);
        _109793 = (&(_101958_109691)[idx_109792]);
        _109794 = *_109793;
        _109797 = (_109794);
        _109796 = (&(if_join_109745)[for_body_109756]);
        (*_109796 = _109797);
        goto continue_wrapper_109781;
    }
continue_wrapper_109781: {
        goto pipeline_continue_109783;
    }
cont_109786: {
        _109788 = (loop_109733 + loop_109735);
        p_loop_109733 = _109788;
        p_loop_109734 = loop_109734;
        p_loop_109735 = loop_109735;
        goto loop_109731;
    }
}

void _102921(array_30 _102921_109838[131072], hls::stream<channel8_i32_33>* _102921_109839) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_102921_109838 struct_level
#pragma HLS data_pack variable=_102921_109839 struct_level
array_30*   cont_109842;
    array_30* p_cont_109842;
    array_30*   cont_109845;
    array_30* p_cont_109845;
    i32   for_body_109856;
    i32 p_for_body_109856;
    array_30   cont_109863;
    array_30 p_cont_109863;
    i32   loop_109873;
    i32 p_loop_109873;
    i32   loop_109874;
    i32 p_loop_109874;
    i32   loop_109875;
    i32 p_loop_109875;
    array_30*   if_join_109883;
    array_30* p_if_join_109883;
    array_30*   if_join_109884;
    array_30* p_if_join_109884;
    i32   for_body_109895;
    i32 p_for_body_109895;
    array_30   cont_109910;
    array_30 p_cont_109910;
    array_30 _102921_109835_reserved[1024];
    #pragma HLS dependence variable=_102921_109835_reserved inter false
    #pragma HLS data_pack  variable=_102921_109835_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30 cont_109840_reserved[1024];
    #pragma HLS dependence variable=cont_109840_reserved inter false
    #pragma HLS data_pack  variable=cont_109840_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30* _109867;
    bool _109876;
    i32 _109878;
    bool _109879;
    i32 _109896;
    bool _109897;
    array_30* _109899;
    array_30 _109900;
    array_30 _109906;
    i32 _109902;
    i32 _109903;
    i32 idx_109904;
    array_30* _109905;
    array_30* _109921;
    i32 _109918;
    {
        p_cont_109842 = _102921_109835_reserved;
        goto cont_109840;
    }
cont_109840: {
        cont_109842 = p_cont_109842;
        p_cont_109845 = cont_109840_reserved;
        goto cont_109843;
    }
cont_109843: {
        cont_109845 = p_cont_109845;
        int i109846;
        for (i109846 = 0; i109846 < 128; i109846++) {
            #pragma HLS PIPELINE
            p_for_body_109856 = i109846;
            goto for_body_109854;
            pipeline_continue_109864: continue;
        }
        goto for_break_109869;
    }
for_body_109854: {
        for_body_109856 = p_for_body_109856;
        *_102921_109839 >> cont_109863;
        p_cont_109863 = cont_109863;
        goto cont_109861;
    }
cont_109861: {
        cont_109863 = p_cont_109863;
        _109867 = (&(cont_109842)[for_body_109856]);
        (*_109867 = cont_109863);
        goto pipeline_continue_109864;
    }
for_break_109869: {
        p_loop_109873 = 0;
        p_loop_109874 = 512;
        p_loop_109875 = 1;
        goto loop_109871;
    }
loop_109871: {
        loop_109873 = p_loop_109873;
        loop_109874 = p_loop_109874;
        loop_109875 = p_loop_109875;
        _109876 = (loop_109873 < loop_109874);
        if (_109876) goto branch_true_109877; else goto branch_false_109933;
    }
branch_false_109933: {
        return void();
    }
branch_true_109877: {
        _109878 = (1 & loop_109873);
        _109879 = (_109878 == 0);
        if (_109879) goto branch_true_109880; else goto branch_false_109930;
    }
branch_false_109930: {
        p_if_join_109883 = cont_109845;
        p_if_join_109884 = cont_109842;
        goto if_join_109881;
    }
branch_true_109880: {
        p_if_join_109883 = cont_109842;
        p_if_join_109884 = cont_109845;
        goto if_join_109881;
    }
if_join_109881: {
        if_join_109883 = p_if_join_109883;
        if_join_109884 = p_if_join_109884;
        int i109885;
        for (i109885 = 0; i109885 < 128; i109885++) {
            #pragma HLS PIPELINE
            p_for_body_109895 = i109885;
            goto for_body_109893;
            pipeline_continue_109913: continue;
        }
        goto cont_109916;
    }
for_body_109893: {
        for_body_109895 = p_for_body_109895;
        _109896 = (1 + loop_109873);
        _109897 = (_109896 < 512);
        _109899 = (&(if_join_109883)[for_body_109895]);
        _109900 = *_109899;
        _109906 = (_109900);
        _109902 = (512 + loop_109873);
        _109903 = (128 * _109902);
        idx_109904 = (_109903 + for_body_109895);
        _109905 = (&(_102921_109838)[idx_109904]);
        (*_109905 = _109906);
        if (_109897) goto branch_true_109898; else goto branch_false_109925;
    }
branch_false_109925: {
        goto continue_wrapper_109911;
    }
branch_true_109898: {
        *_102921_109839 >> cont_109910;
        p_cont_109910 = cont_109910;
        goto cont_109908;
    }
cont_109908: {
        cont_109910 = p_cont_109910;
        _109921 = (&(if_join_109884)[for_body_109895]);
        (*_109921 = cont_109910);
        goto continue_wrapper_109911;
    }
continue_wrapper_109911: {
        goto pipeline_continue_109913;
    }
cont_109916: {
        _109918 = (loop_109873 + loop_109875);
        p_loop_109873 = _109918;
        p_loop_109874 = loop_109874;
        p_loop_109875 = loop_109875;
        goto loop_109871;
    }
}

void _102807(array_30 _102807_109947[131072], hls::stream<channel8_i32_33>* _102807_109948) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_102807_109947 struct_level
#pragma HLS data_pack variable=_102807_109948 struct_level
array_30*   cont_109951;
    array_30* p_cont_109951;
    array_30*   cont_109954;
    array_30* p_cont_109954;
    i32   for_body_109965;
    i32 p_for_body_109965;
    array_30   cont_109968;
    array_30 p_cont_109968;
    i32   loop_109978;
    i32 p_loop_109978;
    i32   loop_109979;
    i32 p_loop_109979;
    i32   loop_109980;
    i32 p_loop_109980;
    array_30*   if_join_109988;
    array_30* p_if_join_109988;
    array_30*   if_join_109989;
    array_30* p_if_join_109989;
    i32   for_body_110000;
    i32 p_for_body_110000;
    array_30   cont_110014;
    array_30 p_cont_110014;
    array_30 _102807_109944_reserved[1024];
    #pragma HLS dependence variable=_102807_109944_reserved inter false
    #pragma HLS data_pack  variable=_102807_109944_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30 cont_109949_reserved[1024];
    #pragma HLS dependence variable=cont_109949_reserved inter false
    #pragma HLS data_pack  variable=cont_109949_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30* _109972;
    bool _109981;
    i32 _109983;
    bool _109984;
    i32 _110001;
    bool _110002;
    array_30* _110004;
    array_30 _110005;
    array_30 _110010;
    i32 _110007;
    i32 idx_110008;
    array_30* _110009;
    array_30* _110025;
    i32 _110022;
    {
        p_cont_109951 = _102807_109944_reserved;
        goto cont_109949;
    }
cont_109949: {
        cont_109951 = p_cont_109951;
        p_cont_109954 = cont_109949_reserved;
        goto cont_109952;
    }
cont_109952: {
        cont_109954 = p_cont_109954;
        int i109955;
        for (i109955 = 0; i109955 < 128; i109955++) {
            #pragma HLS PIPELINE
            p_for_body_109965 = i109955;
            goto for_body_109963;
            pipeline_continue_109969: continue;
        }
        goto for_break_109974;
    }
for_body_109963: {
        for_body_109965 = p_for_body_109965;
        *_102807_109948 >> cont_109968;
        p_cont_109968 = cont_109968;
        goto cont_109966;
    }
cont_109966: {
        cont_109968 = p_cont_109968;
        _109972 = (&(cont_109951)[for_body_109965]);
        (*_109972 = cont_109968);
        goto pipeline_continue_109969;
    }
for_break_109974: {
        p_loop_109978 = 0;
        p_loop_109979 = 512;
        p_loop_109980 = 1;
        goto loop_109976;
    }
loop_109976: {
        loop_109978 = p_loop_109978;
        loop_109979 = p_loop_109979;
        loop_109980 = p_loop_109980;
        _109981 = (loop_109978 < loop_109979);
        if (_109981) goto branch_true_109982; else goto branch_false_110037;
    }
branch_false_110037: {
        return void();
    }
branch_true_109982: {
        _109983 = (1 & loop_109978);
        _109984 = (_109983 == 0);
        if (_109984) goto branch_true_109985; else goto branch_false_110034;
    }
branch_false_110034: {
        p_if_join_109988 = cont_109954;
        p_if_join_109989 = cont_109951;
        goto if_join_109986;
    }
branch_true_109985: {
        p_if_join_109988 = cont_109951;
        p_if_join_109989 = cont_109954;
        goto if_join_109986;
    }
if_join_109986: {
        if_join_109988 = p_if_join_109988;
        if_join_109989 = p_if_join_109989;
        int i109990;
        for (i109990 = 0; i109990 < 128; i109990++) {
            #pragma HLS PIPELINE
            p_for_body_110000 = i109990;
            goto for_body_109998;
            pipeline_continue_110017: continue;
        }
        goto cont_110020;
    }
for_body_109998: {
        for_body_110000 = p_for_body_110000;
        _110001 = (1 + loop_109978);
        _110002 = (_110001 < 512);
        _110004 = (&(if_join_109988)[for_body_110000]);
        _110005 = *_110004;
        _110010 = (_110005);
        _110007 = (128 * loop_109978);
        idx_110008 = (_110007 + for_body_110000);
        _110009 = (&(_102807_109947)[idx_110008]);
        (*_110009 = _110010);
        if (_110002) goto branch_true_110003; else goto branch_false_110029;
    }
branch_false_110029: {
        goto continue_wrapper_110015;
    }
branch_true_110003: {
        *_102807_109948 >> cont_110014;
        p_cont_110014 = cont_110014;
        goto cont_110012;
    }
cont_110012: {
        cont_110014 = p_cont_110014;
        _110025 = (&(if_join_109989)[for_body_110000]);
        (*_110025 = cont_110014);
        goto continue_wrapper_110015;
    }
continue_wrapper_110015: {
        goto pipeline_continue_110017;
    }
cont_110020: {
        _110022 = (loop_109978 + loop_109980);
        p_loop_109978 = _110022;
        p_loop_109979 = loop_109979;
        p_loop_109980 = loop_109980;
        goto loop_109976;
    }
}

void hls_top(array_30 hls_top_109828[131072], hls::stream<channel8_i32_33>* hls_top_109829, array_30 hls_top_109830[131072], hls::stream<channel8_i32_33>* hls_top_109831, hls::stream<channel8_i32_33>* hls_top_109832, array_30 hls_top_109833[131072], hls::stream<channel8_i32_33>* hls_top_109834) {
    #pragma HLS INTERFACE m_axi     port = hls_top_109828 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_109828
#pragma HLS STABLE variable = hls_top_109828
#pragma HLS INTERFACE axis port = hls_top_109829
#pragma HLS INTERFACE m_axi     port = hls_top_109830 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_109830
#pragma HLS STABLE variable = hls_top_109830
#pragma HLS INTERFACE axis port = hls_top_109831
#pragma HLS INTERFACE axis port = hls_top_109832
#pragma HLS INTERFACE m_axi     port = hls_top_109833 bundle = gmem3  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_109833
#pragma HLS STABLE variable = hls_top_109833
#pragma HLS INTERFACE axis port = hls_top_109834
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _102921(hls_top_109833, hls_top_109834);
        
    }
next_kernel_109942: {
        _102807(hls_top_109828, hls_top_109829);
        
    }
next_kernel_110046: {
        _101958(hls_top_109830, hls_top_109831, hls_top_109832);
        
    }
hls_top_110051: {
        return void();
    }
}

} /* extern "C" */

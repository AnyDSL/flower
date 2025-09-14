
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
void hls_top(array_30[131072], hls::stream<channel8_i32_33>*, array_30[131072], hls::stream<channel8_i32_33>*);
void _90372(array_30[131072], hls::stream<channel8_i32_33>*);
void _91424(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _91424(array_30 _91424_94788[131072], hls::stream<channel8_i32_33>* _91424_94789) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_91424_94788 struct_level
#pragma HLS data_pack variable=_91424_94789 struct_level
i32   loop_94792;
    i32 p_loop_94792;
    i32   loop_94793;
    i32 p_loop_94793;
    i32   loop_94794;
    i32 p_loop_94794;
    i32   for_body_94807;
    i32 p_for_body_94807;
    array_30   cont_94814;
    array_30 p_cont_94814;
    bool _94795;
    i32 _94818;
    i32 idx_94819;
    array_30* _94820;
    i32 _94824;
    {
        p_loop_94792 = 0;
        p_loop_94793 = 1024;
        p_loop_94794 = 1;
        goto loop_94790;
    }
loop_94790: {
        loop_94792 = p_loop_94792;
        loop_94793 = p_loop_94793;
        loop_94794 = p_loop_94794;
        _94795 = (loop_94792 < loop_94793);
        if (_94795) goto branch_true_94796; else goto branch_false_94829;
    }
branch_false_94829: {
        return void();
    }
branch_true_94796: {
        int i94797;
        for (i94797 = 0; i94797 < 1024; i94797++) {
            #pragma HLS PIPELINE
            p_for_body_94807 = i94797;
            goto for_body_94805;
            pipeline_continue_94815: continue;
        }
        goto cont_94822;
    }
for_body_94805: {
        for_body_94807 = p_for_body_94807;
        *_91424_94789 >> cont_94814;
        p_cont_94814 = cont_94814;
        goto cont_94812;
    }
cont_94812: {
        cont_94814 = p_cont_94814;
        _94818 = (1024 * loop_94792);
        idx_94819 = (_94818 + for_body_94807);
        _94820 = (&(_91424_94788)[idx_94819]);
        (*_94820 = cont_94814);
        goto pipeline_continue_94815;
    }
cont_94822: {
        _94824 = (loop_94792 + loop_94794);
        p_loop_94792 = _94824;
        p_loop_94793 = loop_94793;
        p_loop_94794 = loop_94794;
        goto loop_94790;
    }
}

void _90372(array_30 _90372_94733[131072], hls::stream<channel8_i32_33>* _90372_94734) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_90372_94733 struct_level
#pragma HLS data_pack variable=_90372_94734 struct_level
i32   loop_94737;
    i32 p_loop_94737;
    i32   loop_94738;
    i32 p_loop_94738;
    i32   loop_94739;
    i32 p_loop_94739;
    i32   for_body_94754;
    i32 p_for_body_94754;
    bool _94740;
    i32 _94760;
    i32 idx_94761;
    array_30* _94762;
    array_30 _94763;
    array_30 _94767;
    i32 _94775;
    {
        p_loop_94737 = 0;
        p_loop_94738 = 1024;
        p_loop_94739 = 1;
        goto loop_94735;
    }
loop_94735: {
        loop_94737 = p_loop_94737;
        loop_94738 = p_loop_94738;
        loop_94739 = p_loop_94739;
        _94740 = (loop_94737 < loop_94738);
        if (_94740) goto branch_true_94741; else goto branch_false_94780;
    }
branch_false_94780: {
        return void();
    }
branch_true_94741: {
        int i94742;
        for (i94742 = 0; i94742 < 1024; i94742++) {
            #pragma HLS PIPELINE
            p_for_body_94754 = i94742;
            goto for_body_94752;
            pipeline_continue_94770: continue;
        }
        goto cont_94773;
    }
for_body_94752: {
        for_body_94754 = p_for_body_94754;
        _94760 = (1024 * loop_94737);
        idx_94761 = (_94760 + for_body_94754);
        _94762 = (&(_90372_94733)[idx_94761]);
        _94763 = *_94762;
        _94767 = (_94763);
        *_90372_94734 << _94767;
        goto continue_wrapper_94768;
    }
continue_wrapper_94768: {
        goto pipeline_continue_94770;
    }
cont_94773: {
        _94775 = (loop_94737 + loop_94739);
        p_loop_94737 = _94775;
        p_loop_94738 = loop_94738;
        p_loop_94739 = loop_94739;
        goto loop_94735;
    }
}

void hls_top(array_30 hls_top_94836[131072], hls::stream<channel8_i32_33>* hls_top_94837, array_30 hls_top_94838[131072], hls::stream<channel8_i32_33>* hls_top_94839) {
    #pragma HLS INTERFACE m_axi     port = hls_top_94836 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_94836
#pragma HLS STABLE variable = hls_top_94836
#pragma HLS INTERFACE axis port = hls_top_94837
#pragma HLS INTERFACE m_axi     port = hls_top_94838 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_94838
#pragma HLS STABLE variable = hls_top_94838
#pragma HLS INTERFACE axis port = hls_top_94839
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _90372(hls_top_94838, hls_top_94839);
        
    }
next_kernel_94840: {
        _91424(hls_top_94836, hls_top_94837);
        
    }
hls_top_94847: {
        return void();
    }
}

} /* extern "C" */

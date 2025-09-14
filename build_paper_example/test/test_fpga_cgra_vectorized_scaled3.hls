
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
    f32 e[8];
} array_30;
typedef array_30 channel8_f32_33;

#ifndef __SYNTHESIS__
void hls_top(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
void _39538(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
void _39729(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
#endif /* __SYNTHESIS__ */

void _39538(array_30 _39538_42567[524288], hls::stream<channel8_f32_33>* _39538_42568, hls::stream<channel8_f32_33>* _39538_42569) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_39538_42567 struct_level
#pragma HLS data_pack variable=_39538_42568 struct_level
#pragma HLS data_pack variable=_39538_42569 struct_level
i32   loop_42572;
    i32 p_loop_42572;
    i32   loop_42573;
    i32 p_loop_42573;
    i32   loop_42574;
    i32 p_loop_42574;
    i32   for_body_42589;
    i32 p_for_body_42589;
    bool _42575;
    i32 _42596;
    i32 _42608;
    i32 idx_42609;
    array_30* _42610;
    array_30 _42611;
    array_30 _42623;
    i32 _42605;
    {
        p_loop_42572 = 0;
        p_loop_42573 = 2048;
        p_loop_42574 = 1;
        goto loop_42570;
    }
loop_42570: {
        loop_42572 = p_loop_42572;
        loop_42573 = p_loop_42573;
        loop_42574 = p_loop_42574;
        _42575 = (loop_42572 < loop_42573);
        if (_42575) goto branch_true_42576; else goto branch_false_42631;
    }
branch_false_42631: {
        return void();
    }
branch_true_42576: {
        int i42577;
        for (i42577 = 0; i42577 < 256; i42577++) {
            #pragma HLS PIPELINE
            p_for_body_42589 = i42577;
            goto for_body_42587;
            pipeline_continue_42600: continue;
        }
        goto cont_42603;
    }
for_body_42587: {
        for_body_42589 = p_for_body_42589;
        _42596 = (for_body_42589 / 128);
        _42608 = (256 * loop_42572);
        idx_42609 = (_42608 + for_body_42589);
        _42610 = (&(_39538_42567)[idx_42609]);
        _42611 = *_42610;
        _42623 = (_42611);
        switch (_42596) {
            case 1: goto match_case_42616;
            case 0: goto match_case_42626;
            default: goto match_otherwise_42597;
        }
    }
match_case_42626: {
        *_39538_42568 << _42623;
        goto continue_wrapper_42598;
    }
match_case_42616: {
        *_39538_42569 << _42623;
        goto continue_wrapper_42598;
    }
match_otherwise_42597: {
        goto continue_wrapper_42598;
    }
continue_wrapper_42598: {
        goto pipeline_continue_42600;
    }
cont_42603: {
        _42605 = (loop_42572 + loop_42574);
        p_loop_42572 = _42605;
        p_loop_42573 = loop_42573;
        p_loop_42574 = loop_42574;
        goto loop_42570;
    }
}

void _39729(array_30 _39729_42650[524288], hls::stream<channel8_f32_33>* _39729_42651, hls::stream<channel8_f32_33>* _39729_42652) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_39729_42650 struct_level
#pragma HLS data_pack variable=_39729_42651 struct_level
#pragma HLS data_pack variable=_39729_42652 struct_level
i32   loop_42655;
    i32 p_loop_42655;
    i32   loop_42656;
    i32 p_loop_42656;
    i32   loop_42657;
    i32 p_loop_42657;
    i32   for_body_42670;
    i32 p_for_body_42670;
    array_30   cont_42709;
    array_30 p_cont_42709;
    array_30   cont_42702;
    array_30 p_cont_42702;
    array_30   match_join_42680;
    array_30 p_match_join_42680;
    bool _42658;
    i32 _42676;
    i32 _42684;
    i32 idx_42685;
    array_30* _42686;
    i32 _42690;
    {
        p_loop_42655 = 0;
        p_loop_42656 = 2048;
        p_loop_42657 = 1;
        goto loop_42653;
    }
loop_42653: {
        loop_42655 = p_loop_42655;
        loop_42656 = p_loop_42656;
        loop_42657 = p_loop_42657;
        _42658 = (loop_42655 < loop_42656);
        if (_42658) goto branch_true_42659; else goto branch_false_42715;
    }
branch_false_42715: {
        return void();
    }
branch_true_42659: {
        int i42660;
        for (i42660 = 0; i42660 < 256; i42660++) {
            #pragma HLS PIPELINE
            p_for_body_42670 = i42660;
            goto for_body_42668;
            pipeline_continue_42681: continue;
        }
        goto cont_42688;
    }
for_body_42668: {
        for_body_42670 = p_for_body_42670;
        _42676 = (for_body_42670 / 128);
        switch (_42676) {
            case 1: goto match_case_42695;
            case 0: goto match_case_42706;
            default: goto match_otherwise_42677;
        }
    }
match_case_42706: {
        *_39729_42651 >> cont_42709;
        p_cont_42709 = cont_42709;
        goto cont_42707;
    }
cont_42707: {
        cont_42709 = p_cont_42709;
        p_match_join_42680 = cont_42709;
        goto match_join_42678;
    }
match_case_42695: {
        *_39729_42652 >> cont_42702;
        p_cont_42702 = cont_42702;
        goto cont_42700;
    }
cont_42700: {
        cont_42702 = p_cont_42702;
        p_match_join_42680 = cont_42702;
        goto match_join_42678;
    }
match_otherwise_42677: {
        p_match_join_42680 = array_30 { 0, 0, 0, 0, 0, 0, 0, 0 };
        goto match_join_42678;
    }
match_join_42678: {
        match_join_42680 = p_match_join_42680;
        _42684 = (256 * loop_42655);
        idx_42685 = (_42684 + for_body_42670);
        _42686 = (&(_39729_42650)[idx_42685]);
        (*_42686 = match_join_42680);
        goto pipeline_continue_42681;
    }
cont_42688: {
        _42690 = (loop_42655 + loop_42657);
        p_loop_42655 = _42690;
        p_loop_42656 = loop_42656;
        p_loop_42657 = loop_42657;
        goto loop_42653;
    }
}

void hls_top(array_30 hls_top_42639[524288], hls::stream<channel8_f32_33>* hls_top_42640, hls::stream<channel8_f32_33>* hls_top_42641, array_30 hls_top_42642[524288], hls::stream<channel8_f32_33>* hls_top_42643, hls::stream<channel8_f32_33>* hls_top_42644) {
    #pragma HLS INTERFACE m_axi     port = hls_top_42639 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_42639
#pragma HLS STABLE variable = hls_top_42639
#pragma HLS INTERFACE axis port = hls_top_42640
#pragma HLS INTERFACE axis port = hls_top_42641
#pragma HLS INTERFACE m_axi     port = hls_top_42642 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_42642
#pragma HLS STABLE variable = hls_top_42642
#pragma HLS INTERFACE axis port = hls_top_42643
#pragma HLS INTERFACE axis port = hls_top_42644
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _39538(hls_top_42639, hls_top_42640, hls_top_42641);
        
    }
next_kernel_42645: {
        _39729(hls_top_42642, hls_top_42643, hls_top_42644);
        
    }
hls_top_42724: {
        return void();
    }
}

} /* extern "C" */

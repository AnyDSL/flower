
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
void hls_top(array_30[524288], hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*);
void _34429(array_30[524288], hls::stream<channel8_f32_33>*);
void _34552(array_30[524288], hls::stream<channel8_f32_33>*);
#endif /* __SYNTHESIS__ */

void _34429(array_30 _34429_36756[524288], hls::stream<channel8_f32_33>* _34429_36757) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_34429_36756 struct_level
#pragma HLS data_pack variable=_34429_36757 struct_level
i32   loop_36760;
    i32 p_loop_36760;
    i32   loop_36761;
    i32 p_loop_36761;
    i32   loop_36762;
    i32 p_loop_36762;
    i32   for_body_36775;
    i32 p_for_body_36775;
    bool _36763;
    i32 _36781;
    i32 idx_36782;
    array_30* _36783;
    array_30 _36784;
    array_30 _36788;
    i32 _36796;
    {
        p_loop_36760 = 0;
        p_loop_36761 = 2048;
        p_loop_36762 = 1;
        goto loop_36758;
    }
loop_36758: {
        loop_36760 = p_loop_36760;
        loop_36761 = p_loop_36761;
        loop_36762 = p_loop_36762;
        _36763 = (loop_36760 < loop_36761);
        if (_36763) goto branch_true_36764; else goto branch_false_36801;
    }
branch_false_36801: {
        return void();
    }
branch_true_36764: {
        int i36765;
        for (i36765 = 0; i36765 < 256; i36765++) {
            #pragma HLS PIPELINE
            p_for_body_36775 = i36765;
            goto for_body_36773;
            pipeline_continue_36791: continue;
        }
        goto cont_36794;
    }
for_body_36773: {
        for_body_36775 = p_for_body_36775;
        _36781 = (256 * loop_36760);
        idx_36782 = (_36781 + for_body_36775);
        _36783 = (&(_34429_36756)[idx_36782]);
        _36784 = *_36783;
        _36788 = (_36784);
        *_34429_36757 << _36788;
        goto continue_wrapper_36789;
    }
continue_wrapper_36789: {
        goto pipeline_continue_36791;
    }
cont_36794: {
        _36796 = (loop_36760 + loop_36762);
        p_loop_36760 = _36796;
        p_loop_36761 = loop_36761;
        p_loop_36762 = loop_36762;
        goto loop_36758;
    }
}

void _34552(array_30 _34552_36704[524288], hls::stream<channel8_f32_33>* _34552_36705) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_34552_36704 struct_level
#pragma HLS data_pack variable=_34552_36705 struct_level
i32   loop_36708;
    i32 p_loop_36708;
    i32   loop_36709;
    i32 p_loop_36709;
    i32   loop_36710;
    i32 p_loop_36710;
    i32   for_body_36725;
    i32 p_for_body_36725;
    array_30   cont_36732;
    array_30 p_cont_36732;
    bool _36711;
    i32 _36736;
    i32 idx_36737;
    array_30* _36738;
    i32 _36742;
    {
        p_loop_36708 = 0;
        p_loop_36709 = 2048;
        p_loop_36710 = 1;
        goto loop_36706;
    }
loop_36706: {
        loop_36708 = p_loop_36708;
        loop_36709 = p_loop_36709;
        loop_36710 = p_loop_36710;
        _36711 = (loop_36708 < loop_36709);
        if (_36711) goto branch_true_36712; else goto branch_false_36747;
    }
branch_false_36747: {
        return void();
    }
branch_true_36712: {
        int i36713;
        for (i36713 = 0; i36713 < 256; i36713++) {
            #pragma HLS PIPELINE
            p_for_body_36725 = i36713;
            goto for_body_36723;
            pipeline_continue_36733: continue;
        }
        goto cont_36740;
    }
for_body_36723: {
        for_body_36725 = p_for_body_36725;
        *_34552_36705 >> cont_36732;
        p_cont_36732 = cont_36732;
        goto cont_36730;
    }
cont_36730: {
        cont_36732 = p_cont_36732;
        _36736 = (256 * loop_36708);
        idx_36737 = (_36736 + for_body_36725);
        _36738 = (&(_34552_36704)[idx_36737]);
        (*_36738 = cont_36732);
        goto pipeline_continue_36733;
    }
cont_36740: {
        _36742 = (loop_36708 + loop_36710);
        p_loop_36708 = _36742;
        p_loop_36709 = loop_36709;
        p_loop_36710 = loop_36710;
        goto loop_36706;
    }
}

void hls_top(array_30 hls_top_36808[524288], hls::stream<channel8_f32_33>* hls_top_36809, array_30 hls_top_36810[524288], hls::stream<channel8_f32_33>* hls_top_36811) {
    #pragma HLS INTERFACE m_axi     port = hls_top_36808 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_36808
#pragma HLS STABLE variable = hls_top_36808
#pragma HLS INTERFACE axis port = hls_top_36809
#pragma HLS INTERFACE m_axi     port = hls_top_36810 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_36810
#pragma HLS STABLE variable = hls_top_36810
#pragma HLS INTERFACE axis port = hls_top_36811
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _34429(hls_top_36808, hls_top_36809);
        
    }
next_kernel_36812: {
        _34552(hls_top_36810, hls_top_36811);
        
    }
hls_top_36816: {
        return void();
    }
}

} /* extern "C" */

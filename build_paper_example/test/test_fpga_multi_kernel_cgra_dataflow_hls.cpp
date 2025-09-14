
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
typedef f32 channel_f32_32;

#ifndef __SYNTHESIS__
void hls_top(f32[4194304], hls::stream<channel_f32_32>*, f32[4194304], hls::stream<channel_f32_32>*);
void _39554(f32[4194304], hls::stream<channel_f32_32>*);
void _39726(f32[4194304], hls::stream<channel_f32_32>*);
#endif /* __SYNTHESIS__ */

void _39726(f32 _39726_41970[4194304], hls::stream<channel_f32_32>* _39726_41971) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_39726_41971 struct_level
i32   loop_41974;
    i32 p_loop_41974;
    i32   loop_41975;
    i32 p_loop_41975;
    i32   loop_41976;
    i32 p_loop_41976;
    i32   for_body_41989;
    i32 p_for_body_41989;
    f32   cont_41996;
    f32 p_cont_41996;
    bool _41977;
    i32 _42000;
    i32 idx_42001;
    f32* _42002;
    i32 _42006;
    {
        p_loop_41974 = 0;
        p_loop_41975 = 2048;
        p_loop_41976 = 1;
        goto loop_41972;
    }
loop_41972: {
        loop_41974 = p_loop_41974;
        loop_41975 = p_loop_41975;
        loop_41976 = p_loop_41976;
        _41977 = (loop_41974 < loop_41975);
        if (_41977) goto branch_true_41978; else goto branch_false_42011;
    }
branch_false_42011: {
        return void();
    }
branch_true_41978: {
        int i41979;
        for (i41979 = 0; i41979 < 2048; i41979++) {
            #pragma HLS PIPELINE
            p_for_body_41989 = i41979;
            goto for_body_41987;
            pipeline_continue_41997: continue;
        }
        goto cont_42004;
    }
for_body_41987: {
        for_body_41989 = p_for_body_41989;
        *_39726_41971 >> cont_41996;
        p_cont_41996 = cont_41996;
        goto cont_41994;
    }
cont_41994: {
        cont_41996 = p_cont_41996;
        _42000 = (2048 * loop_41974);
        idx_42001 = (_42000 + for_body_41989);
        _42002 = (&(_39726_41970)[idx_42001]);
        (*_42002 = cont_41996);
        goto pipeline_continue_41997;
    }
cont_42004: {
        _42006 = (loop_41974 + loop_41976);
        p_loop_41974 = _42006;
        p_loop_41975 = loop_41975;
        p_loop_41976 = loop_41976;
        goto loop_41972;
    }
}

void _39554(f32 _39554_41913[4194304], hls::stream<channel_f32_32>* _39554_41914) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_39554_41914 struct_level
i32   loop_41917;
    i32 p_loop_41917;
    i32   loop_41918;
    i32 p_loop_41918;
    i32   loop_41919;
    i32 p_loop_41919;
    i32   for_body_41934;
    i32 p_for_body_41934;
    bool _41920;
    i32 _41940;
    i32 idx_41941;
    f32* _41942;
    f32 _41943;
    f32 _41947;
    i32 _41955;
    {
        p_loop_41917 = 0;
        p_loop_41918 = 2048;
        p_loop_41919 = 1;
        goto loop_41915;
    }
loop_41915: {
        loop_41917 = p_loop_41917;
        loop_41918 = p_loop_41918;
        loop_41919 = p_loop_41919;
        _41920 = (loop_41917 < loop_41918);
        if (_41920) goto branch_true_41921; else goto branch_false_41960;
    }
branch_false_41960: {
        return void();
    }
branch_true_41921: {
        int i41922;
        for (i41922 = 0; i41922 < 2048; i41922++) {
            #pragma HLS PIPELINE
            p_for_body_41934 = i41922;
            goto for_body_41932;
            pipeline_continue_41950: continue;
        }
        goto cont_41953;
    }
for_body_41932: {
        for_body_41934 = p_for_body_41934;
        _41940 = (2048 * loop_41917);
        idx_41941 = (_41940 + for_body_41934);
        _41942 = (&(_39554_41913)[idx_41941]);
        _41943 = *_41942;
        _41947 = (_41943);
        *_39554_41914 << _41947;
        goto continue_wrapper_41948;
    }
continue_wrapper_41948: {
        goto pipeline_continue_41950;
    }
cont_41953: {
        _41955 = (loop_41917 + loop_41919);
        p_loop_41917 = _41955;
        p_loop_41918 = loop_41918;
        p_loop_41919 = loop_41919;
        goto loop_41915;
    }
}

void hls_top(f32 hls_top_41906[4194304], hls::stream<channel_f32_32>* hls_top_41907, f32 hls_top_41908[4194304], hls::stream<channel_f32_32>* hls_top_41909) {
    #pragma HLS INTERFACE m_axi     port = hls_top_41906 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_41906
#pragma HLS STABLE variable = hls_top_41906
#pragma HLS INTERFACE axis port = hls_top_41907
#pragma HLS INTERFACE m_axi     port = hls_top_41908 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_41908
#pragma HLS STABLE variable = hls_top_41908
#pragma HLS INTERFACE axis port = hls_top_41909
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _39554(hls_top_41906, hls_top_41907);
        
    }
next_kernel_41965: {
        _39726(hls_top_41908, hls_top_41909);
        
    }
hls_top_42023: {
        return void();
    }
}

} /* extern "C" */

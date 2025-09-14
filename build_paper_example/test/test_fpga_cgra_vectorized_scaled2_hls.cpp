
#include <hls_stream.h>
#include <hls_math.h>
#include <string.h>

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
typedef struct {
    i32 e[16];
} array_45;
typedef struct {
    array_30 e[2];
} array_43;

#ifndef __SYNTHESIS__
void hls_top(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*, array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
void _40712(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
void _40911(array_30[524288], hls::stream<channel8_f32_33>*, hls::stream<channel8_f32_33>*);
#endif /* __SYNTHESIS__ */

void _40911(array_30 _40911_43870[524288], hls::stream<channel8_f32_33>* _40911_43871, hls::stream<channel8_f32_33>* _40911_43872) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_40911_43870 struct_level
#pragma HLS data_pack variable=_40911_43871 struct_level
#pragma HLS data_pack variable=_40911_43872 struct_level
i32   loop_43875;
    i32 p_loop_43875;
    i32   loop_43876;
    i32 p_loop_43876;
    i32   loop_43877;
    i32 p_loop_43877;
    i32   for_body_43892;
    i32 p_for_body_43892;
    array_30   cont_43908;
    array_30 p_cont_43908;
    array_30   cont_43913;
    array_30 p_cont_43913;
    bool _43878;
    array_45 _43903;
    array_43 _43904;
    array_43 tile_43902_slot;
    array_43* tile_43902 = &tile_43902_slot;
    array_30* _43909;
    array_30* _43918;
    array_30 _43920;
    array_30 _43926;
    i32 _43923;
    i32 idx_43924;
    array_30* _43925;
    i32 idx_43928;
    array_30* _43929;
    i32 _43933;
    {
        _43903.e[0ULL] = 0;
        _43903.e[1ULL] = 0;
        _43903.e[2ULL] = 0;
        _43903.e[3ULL] = 0;
        _43903.e[4ULL] = 0;
        _43903.e[5ULL] = 0;
        _43903.e[6ULL] = 0;
        _43903.e[7ULL] = 0;
        _43903.e[8ULL] = 0;
        _43903.e[9ULL] = 0;
        _43903.e[10ULL] = 0;
        _43903.e[11ULL] = 0;
        _43903.e[12ULL] = 0;
        _43903.e[13ULL] = 0;
        _43903.e[14ULL] = 0;
        _43903.e[15ULL] = 0;
        memcpy(&_43904, &_43903, sizeof(_43904));
        p_loop_43875 = 0;
        p_loop_43876 = 2048;
        p_loop_43877 = 1;
        goto loop_43873;
    }
loop_43873: {
        loop_43875 = p_loop_43875;
        loop_43876 = p_loop_43876;
        loop_43877 = p_loop_43877;
        _43878 = (loop_43875 < loop_43876);
        if (_43878) goto branch_true_43879; else goto branch_false_43939;
    }
branch_false_43939: {
        return void();
    }
branch_true_43879: {
        int i43880;
        for (i43880 = 0; i43880 < 128; i43880++) {
            #pragma HLS PIPELINE
            p_for_body_43892 = i43880;
            goto for_body_43890;
            pipeline_continue_43914: continue;
        }
        goto cont_43931;
    }
for_body_43890: {
        for_body_43892 = p_for_body_43892;
        (*tile_43902 = _43904);
        *_40911_43871 >> cont_43908;
        p_cont_43908 = cont_43908;
        goto cont_43906;
    }
cont_43906: {
        cont_43908 = p_cont_43908;
        _43909 = (&(tile_43902)->e[0]);
        (*_43909 = cont_43908);
        *_40911_43872 >> cont_43913;
        p_cont_43913 = cont_43913;
        goto cont_43911;
    }
cont_43911: {
        cont_43913 = p_cont_43913;
        _43918 = (&(tile_43902)->e[1]);
        (*_43918 = cont_43913);
        _43920 = *_43909;
        _43926 = (_43920);
        _43923 = (256 * loop_43875);
        idx_43924 = (_43923 + for_body_43892);
        _43925 = (&(_40911_43870)[idx_43924]);
        (*_43925 = _43926);
        idx_43928 = (128 + idx_43924);
        _43929 = (&(_40911_43870)[idx_43928]);
        (*_43929 = cont_43913);
        goto pipeline_continue_43914;
    }
cont_43931: {
        _43933 = (loop_43875 + loop_43877);
        p_loop_43875 = _43933;
        p_loop_43876 = loop_43876;
        p_loop_43877 = loop_43877;
        goto loop_43873;
    }
}

void _40712(array_30 _40712_43947[524288], hls::stream<channel8_f32_33>* _40712_43948, hls::stream<channel8_f32_33>* _40712_43949) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_40712_43947 struct_level
#pragma HLS data_pack variable=_40712_43948 struct_level
#pragma HLS data_pack variable=_40712_43949 struct_level
i32   loop_43952;
    i32 p_loop_43952;
    i32   loop_43953;
    i32 p_loop_43953;
    i32   loop_43954;
    i32 p_loop_43954;
    i32   for_body_43967;
    i32 p_for_body_43967;
    bool _43955;
    array_45 _43903;
    array_43 _43904;
    array_43 tile_43976_slot;
    array_43* tile_43976 = &tile_43976_slot;
    i32 _43978;
    i32 idx_43979;
    array_30* _43980;
    array_30 _43981;
    array_30 _43984;
    array_30* _43983;
    i32 idx_43986;
    array_30* _43987;
    array_30 _43988;
    array_30 _43991;
    array_30* _43990;
    array_30 _43995;
    array_30 _43997;
    i32 _44005;
    {
        _43903.e[0ULL] = 0;
        _43903.e[1ULL] = 0;
        _43903.e[2ULL] = 0;
        _43903.e[3ULL] = 0;
        _43903.e[4ULL] = 0;
        _43903.e[5ULL] = 0;
        _43903.e[6ULL] = 0;
        _43903.e[7ULL] = 0;
        _43903.e[8ULL] = 0;
        _43903.e[9ULL] = 0;
        _43903.e[10ULL] = 0;
        _43903.e[11ULL] = 0;
        _43903.e[12ULL] = 0;
        _43903.e[13ULL] = 0;
        _43903.e[14ULL] = 0;
        _43903.e[15ULL] = 0;
        memcpy(&_43904, &_43903, sizeof(_43904));
        p_loop_43952 = 0;
        p_loop_43953 = 2048;
        p_loop_43954 = 1;
        goto loop_43950;
    }
loop_43950: {
        loop_43952 = p_loop_43952;
        loop_43953 = p_loop_43953;
        loop_43954 = p_loop_43954;
        _43955 = (loop_43952 < loop_43953);
        if (_43955) goto branch_true_43956; else goto branch_false_44011;
    }
branch_false_44011: {
        return void();
    }
branch_true_43956: {
        int i43957;
        for (i43957 = 0; i43957 < 128; i43957++) {
            #pragma HLS PIPELINE
            p_for_body_43967 = i43957;
            goto for_body_43965;
            pipeline_continue_44000: continue;
        }
        goto cont_44003;
    }
for_body_43965: {
        for_body_43967 = p_for_body_43967;
        (*tile_43976 = _43904);
        _43978 = (256 * loop_43952);
        idx_43979 = (_43978 + for_body_43967);
        _43980 = (&(_40712_43947)[idx_43979]);
        _43981 = *_43980;
        _43984 = (_43981);
        _43983 = (&(tile_43976)->e[0]);
        (*_43983 = _43984);
        idx_43986 = (128 + idx_43979);
        _43987 = (&(_40712_43947)[idx_43986]);
        _43988 = *_43987;
        _43991 = (_43988);
        _43990 = (&(tile_43976)->e[1]);
        (*_43990 = _43991);
        *_40712_43948 << _43984;
        goto cont_43993;
    }
cont_43993: {
        _43995 = *_43990;
        _43997 = (_43995);
        *_40712_43949 << _43997;
        goto continue_wrapper_43998;
    }
continue_wrapper_43998: {
        goto pipeline_continue_44000;
    }
cont_44003: {
        _44005 = (loop_43952 + loop_43954);
        p_loop_43952 = _44005;
        p_loop_43953 = loop_43953;
        p_loop_43954 = loop_43954;
        goto loop_43950;
    }
}

void hls_top(array_30 hls_top_44018[524288], hls::stream<channel8_f32_33>* hls_top_44019, hls::stream<channel8_f32_33>* hls_top_44020, array_30 hls_top_44021[524288], hls::stream<channel8_f32_33>* hls_top_44022, hls::stream<channel8_f32_33>* hls_top_44023) {
    #pragma HLS INTERFACE m_axi     port = hls_top_44018 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_44018
#pragma HLS STABLE variable = hls_top_44018
#pragma HLS INTERFACE axis port = hls_top_44019
#pragma HLS INTERFACE axis port = hls_top_44020
#pragma HLS INTERFACE m_axi     port = hls_top_44021 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_44021
#pragma HLS STABLE variable = hls_top_44021
#pragma HLS INTERFACE axis port = hls_top_44022
#pragma HLS INTERFACE axis port = hls_top_44023
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _40712(hls_top_44018, hls_top_44019, hls_top_44020);
        
    }
next_kernel_44024: {
        _40911(hls_top_44021, hls_top_44022, hls_top_44023);
        
    }
hls_top_44034: {
        return void();
    }
}

} /* extern "C" */

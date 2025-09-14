
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

void _53434(input_window<channel8_i32_30>* __restrict, output_window<channel8_i32_30>* __restrict);
alignas(aie::vector_decl_align) array_31 g_static_mask_58717  = (array_31 { { 0, 1, 2, 3, 4, 5, 6, 7 } });

void _53434(input_window<channel8_i32_30>* __restrict _53434_58692, output_window<channel8_i32_30>* __restrict _53434_58693) {
    aie::vector<i32, 16>   cont_58701;
    aie::vector<i32, 16> p_cont_58701;
    aie::vector<i32, 8>   cont_58721;
    aie::vector<i32, 8> p_cont_58721;
    i32   for_body_58733;
    i32 p_for_body_58733;
    aie::vector<i32, 8>   cont_58741;
    aie::vector<i32, 8> p_cont_58741;
    aie::accum<u64, 8>   cont_58764;
    aie::accum<u64, 8> p_cont_58764;
    aie::vector<i32, 8>   cont_58774;
    aie::vector<i32, 8> p_cont_58774;
    aie::vector<i32, 8>   cont_58784;
    aie::vector<i32, 8> p_cont_58784;
    aie::accum<u64, 8>   cont_58790;
    aie::accum<u64, 8> p_cont_58790;
    aie::vector<i32, 8>   cont_58793;
    aie::vector<i32, 8> p_cont_58793;
    i32* _58718;
    {
        _58718 = (&(&g_static_mask_58717)->e[0]);
        cont_58701 = aie::zeros<i32, 16>();
        p_cont_58701 = cont_58701;
        goto cont_58699;
    }
cont_58699: {
        cont_58701 = p_cont_58701;
        cont_58721 = aie::load_v<8>(_58718);
        p_cont_58721 = cont_58721;
        goto cont_58719;
    }
cont_58719: {
        cont_58721 = p_cont_58721;
        int i58722;
        for (i58722 = 0; i58722 < 256; i58722++)
        chess_prepare_for_pipelining {
            p_for_body_58733 = i58722;
            goto for_body_58731;
            pipeline_continue_58796: continue;
        }
        goto _53434_58814;
    }
for_body_58731: {
        for_body_58733 = p_for_body_58733;
        cont_58741 = window_readincr_v<8>(_53434_58692);
        p_cont_58741 = cont_58741;
        goto cont_58739;
    }
cont_58739: {
        cont_58741 = p_cont_58741;
        cont_58701.insert(1, cont_58741);
        goto cont_58749;
    }
cont_58749: {
        cont_58764 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_58721, 1, cont_58701, 1);
        p_cont_58764 = cont_58764;
        goto cont_58762;
    }
cont_58762: {
        cont_58764 = p_cont_58764;
        cont_58774 = srs(cont_58764, 0);
        p_cont_58774 = cont_58774;
        goto cont_58772;
    }
cont_58772: {
        cont_58774 = p_cont_58774;
        window_writeincr(_53434_58693, cont_58774);
        goto cont_58780;
    }
cont_58780: {
        cont_58784 = window_readincr_v<8>(_53434_58692);
        p_cont_58784 = cont_58784;
        goto cont_58782;
    }
cont_58782: {
        cont_58784 = p_cont_58784;
        cont_58701.insert(0, cont_58784);
        goto cont_58785;
    }
cont_58785: {
        cont_58790 = aie::sliding_mul_xy_ops<8, 8, 1, 1, i32, i32>::mul(cont_58721, 1, cont_58701, 9);
        p_cont_58790 = cont_58790;
        goto cont_58788;
    }
cont_58788: {
        cont_58790 = p_cont_58790;
        cont_58793 = srs(cont_58790, 0);
        p_cont_58793 = cont_58793;
        goto cont_58791;
    }
cont_58791: {
        cont_58793 = p_cont_58793;
        window_writeincr(_53434_58693, cont_58793);
        goto continue_wrapper_58794;
    }
continue_wrapper_58794: {
        goto pipeline_continue_58796;
    }
_53434_58814: {
        return;
    }
}


    
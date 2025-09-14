
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
    f32 e[8];
} array_31;
typedef f32 channel8_f32_30;

void _34499(input_window<channel8_f32_30>* __restrict, output_window<channel8_f32_30>* __restrict);

void _34499(input_window<channel8_f32_30>* __restrict _34499_37814, output_window<channel8_f32_30>* __restrict _34499_37815) {
    i32   loop_37818;
    i32 p_loop_37818;
    i32   for_body_37834;
    i32 p_for_body_37834;
    aie::vector<f32, 8>   cont_37841;
    aie::vector<f32, 8> p_cont_37841;
    bool _37820;
    i32 _37855;
    {
        p_loop_37818 = 0;
        goto loop_37816;
    }
loop_37816: {
        loop_37818 = p_loop_37818;
        _37820 = (loop_37818 < 2048);
        if (_37820) goto branch_true_37821; else goto branch_false_37861;
    }
branch_false_37861: {
        return;
    }
branch_true_37821: {
        int i37822;
        for (i37822 = 0; i37822 < 256; i37822++)
        chess_prepare_for_pipelining {
            p_for_body_37834 = i37822;
            goto for_body_37832;
            pipeline_continue_37849: continue;
        }
        goto cont_37852;
    }
for_body_37832: {
        for_body_37834 = p_for_body_37834;
        cont_37841 = window_readincr_v<8>(_34499_37814);
        p_cont_37841 = cont_37841;
        goto cont_37839;
    }
cont_37839: {
        cont_37841 = p_cont_37841;
        window_writeincr(_34499_37815, cont_37841);
        goto continue_wrapper_37847;
    }
continue_wrapper_37847: {
        goto pipeline_continue_37849;
    }
cont_37852: {
        _37855 = (1 + loop_37818);
        p_loop_37818 = _37855;
        goto loop_37816;
    }
}


    

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
void _86625(array_30[131072], hls::stream<channel8_i32_33>*);
void _87476(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _87476(array_30 _87476_92422[131072], hls::stream<channel8_i32_33>* _87476_92423) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_87476_92422 struct_level
#pragma HLS data_pack variable=_87476_92423 struct_level
array_30*   cont_92426;
    array_30* p_cont_92426;
    array_30*   cont_92429;
    array_30* p_cont_92429;
    i32   loop_92432;
    i32 p_loop_92432;
    i32   loop_92433;
    i32 p_loop_92433;
    i32   loop_92434;
    i32 p_loop_92434;
    i32   for_body_92447;
    i32 p_for_body_92447;
    array_30   cont_92454;
    array_30 p_cont_92454;
    i32   for_body_92475;
    i32 p_for_body_92475;
    array_30   if_join_92479;
    array_30 p_if_join_92479;
     array_30 _87476_92419_reserved[1024];
    #pragma HLS dependence variable=_87476_92419_reserved inter false
    #pragma HLS data_pack  variable=_87476_92419_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
 array_30 cont_92424_reserved[1024];
    #pragma HLS dependence variable=cont_92424_reserved inter false
    #pragma HLS data_pack  variable=cont_92424_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
bool _92435;
    i32 _92455;
    bool _92456;
    array_30* _92510;
    array_30* _92506;
    array_30* _92498;
    array_30 _92499;
    array_30 _92501;
    array_30* _92492;
    array_30 _92493;
    array_30 _92495;
    i32 _92483;
    i32 idx_92484;
    array_30* _92485;
    i32 _92489;
    {
        p_cont_92426 = _87476_92419_reserved;
        goto cont_92424;
    }
cont_92424: {
        cont_92426 = p_cont_92426;
        p_cont_92429 = cont_92424_reserved;
        goto cont_92427;
    }
cont_92427: {
        cont_92429 = p_cont_92429;
        p_loop_92432 = 0;
        p_loop_92433 = 1024;
        p_loop_92434 = 1;
        goto loop_92430;
    }
loop_92430: {
        loop_92432 = p_loop_92432;
        loop_92433 = p_loop_92433;
        loop_92434 = p_loop_92434;
        _92435 = (loop_92432 < loop_92433);
        if (_92435) goto branch_true_92436; else goto branch_false_92516;
    }
branch_false_92516: {
        return void();
    }
branch_true_92436: {
        _92455 = (loop_92432 % 2);
        _92456 = (_92455 == 0);
        int i92437;
        for (i92437 = 0; i92437 < 128; i92437++) {
            #pragma HLS PIPELINE
            p_for_body_92447 = i92437;
            goto for_body_92445;
            pipeline_continue_92460: continue;
        }
        goto for_break_92463;
    }
for_body_92445: {
        for_body_92447 = p_for_body_92447;
        *_87476_92423 >> cont_92454;
        p_cont_92454 = cont_92454;
        goto cont_92452;
    }
cont_92452: {
        cont_92454 = p_cont_92454;
        if (_92456) goto branch_true_92457; else goto branch_false_92509;
    }
branch_false_92509: {
        _92510 = (&(cont_92429)[for_body_92447]);
        (*_92510 = cont_92454);
        goto continue_wrapper_92458;
    }
branch_true_92457: {
        _92506 = (&(cont_92426)[for_body_92447]);
        (*_92506 = cont_92454);
        goto continue_wrapper_92458;
    }
continue_wrapper_92458: {
        goto pipeline_continue_92460;
    }
for_break_92463: {
        int i92465;
        for (i92465 = 0; i92465 < 128; i92465++) {
            #pragma HLS PIPELINE
            p_for_body_92475 = i92465;
            goto for_body_92473;
            pipeline_continue_92480: continue;
        }
        goto cont_92487;
    }
for_body_92473: {
        for_body_92475 = p_for_body_92475;
        if (_92456) goto branch_true_92476; else goto branch_false_92497;
    }
branch_false_92497: {
        _92498 = (&(cont_92429)[for_body_92475]);
        _92499 = *_92498;
        _92501 = (_92499);
        p_if_join_92479 = _92501;
        goto if_join_92477;
    }
branch_true_92476: {
        _92492 = (&(cont_92426)[for_body_92475]);
        _92493 = *_92492;
        _92495 = (_92493);
        p_if_join_92479 = _92495;
        goto if_join_92477;
    }
if_join_92477: {
        if_join_92479 = p_if_join_92479;
        _92483 = (1024 * loop_92432);
        idx_92484 = (_92483 + for_body_92475);
        _92485 = (&(_87476_92422)[idx_92484]);
        (*_92485 = if_join_92479);
        goto pipeline_continue_92480;
    }
cont_92487: {
        _92489 = (loop_92432 + loop_92434);
        p_loop_92432 = _92489;
        p_loop_92433 = loop_92433;
        p_loop_92434 = loop_92434;
        goto loop_92430;
    }
}

void _86625(array_30 _86625_92304[131072], hls::stream<channel8_i32_33>* _86625_92305) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_86625_92304 struct_level
#pragma HLS data_pack variable=_86625_92305 struct_level
array_30*   cont_92313;
    array_30* p_cont_92313;
    array_30*   cont_92316;
    array_30* p_cont_92316;
    i32   loop_92319;
    i32 p_loop_92319;
    i32   loop_92320;
    i32 p_loop_92320;
    i32   loop_92321;
    i32 p_loop_92321;
    i32   for_body_92336;
    i32 p_for_body_92336;
    i32   for_body_92358;
    i32 p_for_body_92358;
    array_30   if_join_92362;
    array_30 p_if_join_92362;
     array_30 _86625_92301_reserved[1024];
    #pragma HLS dependence variable=_86625_92301_reserved inter false
    #pragma HLS data_pack  variable=_86625_92301_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
 array_30 cont_92311_reserved[1024];
    #pragma HLS dependence variable=cont_92311_reserved inter false
    #pragma HLS data_pack  variable=cont_92311_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
bool _92322;
    i32 _92338;
    bool _92339;
    i32 _92395;
    i32 idx_92396;
    array_30* _92397;
    array_30 _92398;
    array_30 _92401;
    array_30* _92405;
    array_30* _92400;
    array_30* _92387;
    array_30 _92388;
    array_30 _92390;
    array_30* _92379;
    array_30 _92380;
    array_30 _92384;
    i32 _92375;
    {
        p_cont_92313 = _86625_92301_reserved;
        goto cont_92311;
    }
cont_92311: {
        cont_92313 = p_cont_92313;
        p_cont_92316 = cont_92311_reserved;
        goto cont_92314;
    }
cont_92314: {
        cont_92316 = p_cont_92316;
        p_loop_92319 = 0;
        p_loop_92320 = 1024;
        p_loop_92321 = 1;
        goto loop_92317;
    }
loop_92317: {
        loop_92319 = p_loop_92319;
        loop_92320 = p_loop_92320;
        loop_92321 = p_loop_92321;
        _92322 = (loop_92319 < loop_92320);
        if (_92322) goto branch_true_92323; else goto branch_false_92410;
    }
branch_false_92410: {
        return void();
    }
branch_true_92323: {
        _92338 = (loop_92319 % 2);
        _92339 = (_92338 == 0);
        int i92324;
        for (i92324 = 0; i92324 < 128; i92324++) {
            #pragma HLS PIPELINE
            p_for_body_92336 = i92324;
            goto for_body_92334;
            pipeline_continue_92343: continue;
        }
        goto for_break_92346;
    }
for_body_92334: {
        for_body_92336 = p_for_body_92336;
        _92395 = (1024 * loop_92319);
        idx_92396 = (_92395 + for_body_92336);
        _92397 = (&(_86625_92304)[idx_92396]);
        _92398 = *_92397;
        _92401 = (_92398);
        if (_92339) goto branch_true_92340; else goto branch_false_92404;
    }
branch_false_92404: {
        _92405 = (&(cont_92316)[for_body_92336]);
        (*_92405 = _92401);
        goto continue_wrapper_92341;
    }
branch_true_92340: {
        _92400 = (&(cont_92313)[for_body_92336]);
        (*_92400 = _92401);
        goto continue_wrapper_92341;
    }
continue_wrapper_92341: {
        goto pipeline_continue_92343;
    }
for_break_92346: {
        int i92348;
        for (i92348 = 0; i92348 < 128; i92348++) {
            #pragma HLS PIPELINE
            p_for_body_92358 = i92348;
            goto for_body_92356;
            pipeline_continue_92370: continue;
        }
        goto cont_92373;
    }
for_body_92356: {
        for_body_92358 = p_for_body_92358;
        if (_92339) goto branch_true_92359; else goto branch_false_92386;
    }
branch_false_92386: {
        _92387 = (&(cont_92316)[for_body_92358]);
        _92388 = *_92387;
        _92390 = (_92388);
        p_if_join_92362 = _92390;
        goto if_join_92360;
    }
branch_true_92359: {
        _92379 = (&(cont_92313)[for_body_92358]);
        _92380 = *_92379;
        _92384 = (_92380);
        p_if_join_92362 = _92384;
        goto if_join_92360;
    }
if_join_92360: {
        if_join_92362 = p_if_join_92362;
        *_86625_92305 << if_join_92362;
        goto continue_wrapper_92368;
    }
continue_wrapper_92368: {
        goto pipeline_continue_92370;
    }
cont_92373: {
        _92375 = (loop_92319 + loop_92321);
        p_loop_92319 = _92375;
        p_loop_92320 = loop_92320;
        p_loop_92321 = loop_92321;
        goto loop_92317;
    }
}

void hls_top(array_30 hls_top_92297[131072], hls::stream<channel8_i32_33>* hls_top_92298, array_30 hls_top_92299[131072], hls::stream<channel8_i32_33>* hls_top_92300) {
    #pragma HLS INTERFACE m_axi     port = hls_top_92297 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_92297
#pragma HLS STABLE variable = hls_top_92297
#pragma HLS INTERFACE axis port = hls_top_92298
#pragma HLS INTERFACE m_axi     port = hls_top_92299 bundle = gmem0  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_92299
#pragma HLS STABLE variable = hls_top_92299
#pragma HLS INTERFACE axis port = hls_top_92300
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _86625(hls_top_92299, hls_top_92300);
        
    }
next_kernel_92417: {
        _87476(hls_top_92297, hls_top_92298);
        
    }
hls_top_92524: {
        return void();
    }
}

} /* extern "C" */

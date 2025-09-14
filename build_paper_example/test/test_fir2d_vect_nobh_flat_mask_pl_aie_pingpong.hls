
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
void _77901(array_30[131072], hls::stream<channel8_i32_33>*);
void _78494(array_30[131072], hls::stream<channel8_i32_33>*);
#endif /* __SYNTHESIS__ */

void _77901(array_30 _77901_83135[131072], hls::stream<channel8_i32_33>* _77901_83136) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_77901_83135 struct_level
#pragma HLS data_pack variable=_77901_83136 struct_level
array_30*   cont_83144;
    array_30* p_cont_83144;
    array_30*   cont_83147;
    array_30* p_cont_83147;
    i32   for_body_83160;
    i32 p_for_body_83160;
    i32   loop_83176;
    i32 p_loop_83176;
    i32   loop_83177;
    i32 p_loop_83177;
    i32   loop_83178;
    i32 p_loop_83178;
    array_30*   if_join_83187;
    array_30* p_if_join_83187;
    array_30*   if_join_83188;
    array_30* p_if_join_83188;
    i32   for_body_83199;
    i32 p_for_body_83199;
    array_30 _77901_83132_reserved[1024];
    #pragma HLS dependence variable=_77901_83132_reserved inter false
    #pragma HLS data_pack  variable=_77901_83132_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30 cont_83142_reserved[1024];
    #pragma HLS dependence variable=cont_83142_reserved inter false
    #pragma HLS data_pack  variable=cont_83142_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30* _83164;
    array_30 _83165;
    array_30 _83170;
    array_30* _83168;
    bool _83179;
    i32 _83182;
    bool _83183;
    array_30* _83205;
    array_30 _83206;
    array_30 _83208;
    i32 _83211;
    bool _83212;
    i32 _83224;
    i32 idx_83225;
    array_30* _83226;
    array_30 _83227;
    array_30 _83230;
    array_30* _83229;
    i32 _83221;
    {
        p_cont_83144 = _77901_83132_reserved;
        goto cont_83142;
    }
cont_83142: {
        cont_83144 = p_cont_83144;
        p_cont_83147 = cont_83142_reserved;
        goto cont_83145;
    }
cont_83145: {
        cont_83147 = p_cont_83147;
        int i83148;
        for (i83148 = 0; i83148 < 128; i83148++) {
            #pragma HLS PIPELINE
            p_for_body_83160 = i83148;
            goto for_body_83158;
            pipeline_continue_83161: continue;
        }
        goto for_break_83172;
    }
for_body_83158: {
        for_body_83160 = p_for_body_83160;
        _83164 = (&(_77901_83135)[for_body_83160]);
        _83165 = *_83164;
        _83170 = (_83165);
        _83168 = (&(cont_83144)[for_body_83160]);
        (*_83168 = _83170);
        goto pipeline_continue_83161;
    }
for_break_83172: {
        p_loop_83176 = 0;
        p_loop_83177 = 1024;
        p_loop_83178 = 1;
        goto loop_83174;
    }
loop_83174: {
        loop_83176 = p_loop_83176;
        loop_83177 = p_loop_83177;
        loop_83178 = p_loop_83178;
        _83179 = (loop_83176 < loop_83177);
        if (_83179) goto branch_true_83180; else goto branch_false_83242;
    }
branch_false_83242: {
        return void();
    }
branch_true_83180: {
        _83182 = (1 & loop_83176);
        _83183 = (_83182 == 0);
        if (_83183) goto branch_true_83184; else goto branch_false_83239;
    }
branch_false_83239: {
        p_if_join_83187 = cont_83147;
        p_if_join_83188 = cont_83144;
        goto if_join_83185;
    }
branch_true_83184: {
        p_if_join_83187 = cont_83144;
        p_if_join_83188 = cont_83147;
        goto if_join_83185;
    }
if_join_83185: {
        if_join_83187 = p_if_join_83187;
        if_join_83188 = p_if_join_83188;
        int i83189;
        for (i83189 = 0; i83189 < 128; i83189++) {
            #pragma HLS PIPELINE
            p_for_body_83199 = i83189;
            goto for_body_83197;
            pipeline_continue_83216: continue;
        }
        goto cont_83219;
    }
for_body_83197: {
        for_body_83199 = p_for_body_83199;
        _83205 = (&(if_join_83187)[for_body_83199]);
        _83206 = *_83205;
        _83208 = (_83206);
        *_77901_83136 << _83208;
        goto cont_83209;
    }
cont_83209: {
        _83211 = (1 + loop_83176);
        _83212 = (_83211 < 1024);
        if (_83212) goto branch_true_83213; else goto branch_false_83233;
    }
branch_false_83233: {
        goto continue_wrapper_83214;
    }
branch_true_83213: {
        _83224 = (128 * _83211);
        idx_83225 = (_83224 + for_body_83199);
        _83226 = (&(_77901_83135)[idx_83225]);
        _83227 = *_83226;
        _83230 = (_83227);
        _83229 = (&(if_join_83188)[for_body_83199]);
        (*_83229 = _83230);
        goto continue_wrapper_83214;
    }
continue_wrapper_83214: {
        goto pipeline_continue_83216;
    }
cont_83219: {
        _83221 = (loop_83176 + loop_83178);
        p_loop_83176 = _83221;
        p_loop_83177 = loop_83177;
        p_loop_83178 = loop_83178;
        goto loop_83174;
    }
}

void _78494(array_30 _78494_83255[131072], hls::stream<channel8_i32_33>* _78494_83256) {
    #pragma HLS INLINE off
#pragma HLS data_pack variable=_78494_83255 struct_level
#pragma HLS data_pack variable=_78494_83256 struct_level
array_30*   cont_83259;
    array_30* p_cont_83259;
    array_30*   cont_83262;
    array_30* p_cont_83262;
    i32   for_body_83273;
    i32 p_for_body_83273;
    array_30   cont_83280;
    array_30 p_cont_83280;
    i32   loop_83290;
    i32 p_loop_83290;
    i32   loop_83291;
    i32 p_loop_83291;
    i32   loop_83292;
    i32 p_loop_83292;
    array_30*   if_join_83300;
    array_30* p_if_join_83300;
    array_30*   if_join_83301;
    array_30* p_if_join_83301;
    i32   for_body_83312;
    i32 p_for_body_83312;
    array_30   cont_83326;
    array_30 p_cont_83326;
    array_30 _78494_83252_reserved[1024];
    #pragma HLS dependence variable=_78494_83252_reserved inter false
    #pragma HLS data_pack  variable=_78494_83252_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30 cont_83257_reserved[1024];
    #pragma HLS dependence variable=cont_83257_reserved inter false
    #pragma HLS data_pack  variable=cont_83257_reserved
    #if defined( __VITIS_HLS__ )
   __attribute__((packed))
  #endif
array_30* _83284;
    bool _83293;
    i32 _83295;
    bool _83296;
    i32 _83313;
    bool _83314;
    array_30* _83316;
    array_30 _83317;
    array_30 _83322;
    i32 _83319;
    i32 idx_83320;
    array_30* _83321;
    array_30* _83337;
    i32 _83334;
    {
        p_cont_83259 = _78494_83252_reserved;
        goto cont_83257;
    }
cont_83257: {
        cont_83259 = p_cont_83259;
        p_cont_83262 = cont_83257_reserved;
        goto cont_83260;
    }
cont_83260: {
        cont_83262 = p_cont_83262;
        int i83263;
        for (i83263 = 0; i83263 < 128; i83263++) {
            #pragma HLS PIPELINE
            p_for_body_83273 = i83263;
            goto for_body_83271;
            pipeline_continue_83281: continue;
        }
        goto for_break_83286;
    }
for_body_83271: {
        for_body_83273 = p_for_body_83273;
        *_78494_83256 >> cont_83280;
        p_cont_83280 = cont_83280;
        goto cont_83278;
    }
cont_83278: {
        cont_83280 = p_cont_83280;
        _83284 = (&(cont_83259)[for_body_83273]);
        (*_83284 = cont_83280);
        goto pipeline_continue_83281;
    }
for_break_83286: {
        p_loop_83290 = 0;
        p_loop_83291 = 1024;
        p_loop_83292 = 1;
        goto loop_83288;
    }
loop_83288: {
        loop_83290 = p_loop_83290;
        loop_83291 = p_loop_83291;
        loop_83292 = p_loop_83292;
        _83293 = (loop_83290 < loop_83291);
        if (_83293) goto branch_true_83294; else goto branch_false_83349;
    }
branch_false_83349: {
        return void();
    }
branch_true_83294: {
        _83295 = (1 & loop_83290);
        _83296 = (_83295 == 0);
        if (_83296) goto branch_true_83297; else goto branch_false_83346;
    }
branch_false_83346: {
        p_if_join_83300 = cont_83262;
        p_if_join_83301 = cont_83259;
        goto if_join_83298;
    }
branch_true_83297: {
        p_if_join_83300 = cont_83259;
        p_if_join_83301 = cont_83262;
        goto if_join_83298;
    }
if_join_83298: {
        if_join_83300 = p_if_join_83300;
        if_join_83301 = p_if_join_83301;
        int i83302;
        for (i83302 = 0; i83302 < 128; i83302++) {
            #pragma HLS PIPELINE
            p_for_body_83312 = i83302;
            goto for_body_83310;
            pipeline_continue_83329: continue;
        }
        goto cont_83332;
    }
for_body_83310: {
        for_body_83312 = p_for_body_83312;
        _83313 = (1 + loop_83290);
        _83314 = (_83313 < 1024);
        _83316 = (&(if_join_83300)[for_body_83312]);
        _83317 = *_83316;
        _83322 = (_83317);
        _83319 = (128 * loop_83290);
        idx_83320 = (_83319 + for_body_83312);
        _83321 = (&(_78494_83255)[idx_83320]);
        (*_83321 = _83322);
        if (_83314) goto branch_true_83315; else goto branch_false_83341;
    }
branch_false_83341: {
        goto continue_wrapper_83327;
    }
branch_true_83315: {
        *_78494_83256 >> cont_83326;
        p_cont_83326 = cont_83326;
        goto cont_83324;
    }
cont_83324: {
        cont_83326 = p_cont_83326;
        _83337 = (&(if_join_83301)[for_body_83312]);
        (*_83337 = cont_83326);
        goto continue_wrapper_83327;
    }
continue_wrapper_83327: {
        goto pipeline_continue_83329;
    }
cont_83332: {
        _83334 = (loop_83290 + loop_83292);
        p_loop_83290 = _83334;
        p_loop_83291 = loop_83291;
        p_loop_83292 = loop_83292;
        goto loop_83288;
    }
}

void hls_top(array_30 hls_top_83128[131072], hls::stream<channel8_i32_33>* hls_top_83129, array_30 hls_top_83130[131072], hls::stream<channel8_i32_33>* hls_top_83131) {
    #pragma HLS INTERFACE m_axi     port = hls_top_83128 bundle = gmem1  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_83128
#pragma HLS STABLE variable = hls_top_83128
#pragma HLS INTERFACE axis port = hls_top_83129
#pragma HLS INTERFACE m_axi     port = hls_top_83130 bundle = gmem2  offset = slave
#pragma HLS INTERFACE s_axilite port = hls_top_83130
#pragma HLS STABLE variable = hls_top_83130
#pragma HLS INTERFACE axis port = hls_top_83131
#pragma HLS INTERFACE ap_ctrl_chain port = return
#pragma HLS top name = hls_top
#pragma HLS DATAFLOW
{
        _77901(hls_top_83130, hls_top_83131);
        
    }
next_kernel_83250: {
        _78494(hls_top_83128, hls_top_83129);
        
    }
hls_top_83360: {
        return void();
    }
}

} /* extern "C" */


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

void _58157(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58073(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58217(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58097(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58117(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58177(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58197(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);
void _58137(input_stream<channel8_i32_30>* __restrict, output_stream<channel8_i32_30>* __restrict);

void _58197(input_stream<channel8_i32_30>* __restrict _58197_65939, output_stream<channel8_i32_30>* __restrict _58197_65940) {
    aie::vector<i32, 8>   cont_65943;
    aie::vector<i32, 8> p_cont_65943;
    {
        cont_65943 = readincr_v<8>(_58197_65939);
        p_cont_65943 = cont_65943;
        goto cont_65941;
    }
cont_65941: {
        cont_65943 = p_cont_65943;
        writeincr(_58197_65940, cont_65943);
        goto _58197_66041;
    }
_58197_66041: {
        return;
    }
}

void _58073(input_stream<channel8_i32_30>* __restrict _58073_65910, output_stream<channel8_i32_30>* __restrict _58073_65911) {
    aie::vector<i32, 8>   cont_65918;
    aie::vector<i32, 8> p_cont_65918;
    {
        cont_65918 = readincr_v<8>(_58073_65910);
        p_cont_65918 = cont_65918;
        goto cont_65916;
    }
cont_65916: {
        cont_65918 = p_cont_65918;
        writeincr(_58073_65911, cont_65918);
        goto _58073_66045;
    }
_58073_66045: {
        return;
    }
}

void _58157(input_stream<channel8_i32_30>* __restrict _58157_65978, output_stream<channel8_i32_30>* __restrict _58157_65979) {
    aie::vector<i32, 8>   cont_65982;
    aie::vector<i32, 8> p_cont_65982;
    {
        cont_65982 = readincr_v<8>(_58157_65978);
        p_cont_65982 = cont_65982;
        goto cont_65980;
    }
cont_65980: {
        cont_65982 = p_cont_65982;
        writeincr(_58157_65979, cont_65982);
        goto _58157_66049;
    }
_58157_66049: {
        return;
    }
}

void _58117(input_stream<channel8_i32_30>* __restrict _58117_65996, output_stream<channel8_i32_30>* __restrict _58117_65997) {
    aie::vector<i32, 8>   cont_66000;
    aie::vector<i32, 8> p_cont_66000;
    {
        cont_66000 = readincr_v<8>(_58117_65996);
        p_cont_66000 = cont_66000;
        goto cont_65998;
    }
cont_65998: {
        cont_66000 = p_cont_66000;
        writeincr(_58117_65997, cont_66000);
        goto _58117_66053;
    }
_58117_66053: {
        return;
    }
}

void _58217(input_stream<channel8_i32_30>* __restrict _58217_65929, output_stream<channel8_i32_30>* __restrict _58217_65930) {
    aie::vector<i32, 8>   cont_65933;
    aie::vector<i32, 8> p_cont_65933;
    {
        cont_65933 = readincr_v<8>(_58217_65929);
        p_cont_65933 = cont_65933;
        goto cont_65931;
    }
cont_65931: {
        cont_65933 = p_cont_65933;
        writeincr(_58217_65930, cont_65933);
        goto _58217_66057;
    }
_58217_66057: {
        return;
    }
}

void _58137(input_stream<channel8_i32_30>* __restrict _58137_66022, output_stream<channel8_i32_30>* __restrict _58137_66023) {
    aie::vector<i32, 8>   cont_66026;
    aie::vector<i32, 8> p_cont_66026;
    {
        cont_66026 = readincr_v<8>(_58137_66022);
        p_cont_66026 = cont_66026;
        goto cont_66024;
    }
cont_66024: {
        cont_66026 = p_cont_66026;
        writeincr(_58137_66023, cont_66026);
        goto _58137_66061;
    }
_58137_66061: {
        return;
    }
}

void _58097(input_stream<channel8_i32_30>* __restrict _58097_65949, output_stream<channel8_i32_30>* __restrict _58097_65950) {
    aie::vector<i32, 8>   cont_65953;
    aie::vector<i32, 8> p_cont_65953;
    {
        cont_65953 = readincr_v<8>(_58097_65949);
        p_cont_65953 = cont_65953;
        goto cont_65951;
    }
cont_65951: {
        cont_65953 = p_cont_65953;
        writeincr(_58097_65950, cont_65953);
        goto _58097_66065;
    }
_58097_66065: {
        return;
    }
}

void _58177(input_stream<channel8_i32_30>* __restrict _58177_66008, output_stream<channel8_i32_30>* __restrict _58177_66009) {
    aie::vector<i32, 8>   cont_66012;
    aie::vector<i32, 8> p_cont_66012;
    {
        cont_66012 = readincr_v<8>(_58177_66008);
        p_cont_66012 = cont_66012;
        goto cont_66010;
    }
cont_66010: {
        cont_66012 = p_cont_66012;
        writeincr(_58177_66009, cont_66012);
        goto _58177_66069;
    }
_58177_66069: {
        return;
    }
}


    
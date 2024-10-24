set(DSL_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)
set(APPS_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# mapping
if(BACKEND STREQUAL "opencl" AND PARALLEL STREQUAL "task" OR BACKEND STREQUAL "hls")
    set(DEVICE "fpga")
    set(DEVICE_SPECIFIC_FILES ${DSL_SOURCE_DIR}/mapping_fpga_img_${BACKEND}.impala ${DSL_SOURCE_DIR}/stencil_lib_img_fpga.impala)
    set(CHANNEL_LIB_DIR ${DSL_SOURCE_DIR}/channel_lib CACHE INTERNAL "channel library directory")
    file(STRINGS ${DSL_SOURCE_DIR}/backend_${BACKEND}.impala VECTOR_LENGTH_FN REGEX "static vector_length")
    string(REGEX MATCHALL "[0-9]" VECTOR_LENGTH "${VECTOR_LENGTH_FN}")
    string(CONCAT VECTOR_LENGTH ${VECTOR_LENGTH})
    string(CONCAT channel_type "type channel = channel${VECTOR_LENGTH}_${PIXEL_TYPE}\;")
    execute_process(COMMAND echo ${channel_type} OUTPUT_FILE ${DSL_SOURCE_DIR}/channel_type.impala)
    set(CHANNEL_LIB ${CHANNEL_LIB_DIR}/ch_vec${VECTOR_LENGTH}.impala)
else()
    if(BACKEND STREQUAL "cpu" OR BACKEND STREQUAL "avx")
        set(DEVICE "cpu")
    else()
    # data-parallel OpenCL and Cuda
        set(DEVICE "acc")
    endif()
    set(DEVICE_SPECIFIC_FILES ${DSL_SOURCE_DIR}/stencil_lib_img_proc.impala)
endif()

#set(BACKEND_FILE ${DSL_SOURCE_DIR}/backend_${BACKEND}.impala)
set(MAPPING_FILE ${DSL_SOURCE_DIR}/mapping_${DEVICE}.impala)
set(DSL_FILES ${DSL_SOURCE_DIR}/utils.impala ${DSL_SOURCE_DIR}/stencil_lib.impala)
set(PIXEL_TYPE_FILE ${DSL_SOURCE_DIR}/pixel_${PIXEL_TYPE}.impala)
set(PIXEL_TYPE_FLOAT_FILE ${DSL_SOURCE_DIR}/pixel_f32.impala)
set(PIXEL_TYPE_UCHAR_FILE ${DSL_SOURCE_DIR}/pixel_u8.impala)
set(CHANNEL_TYPE_FILE ${DSL_SOURCE_DIR}/channel_type.impala)

# common DSL files for all applications applications
set(COMMON_FILES     ${DSL_FILES} ${DEVICE_SPECIFIC_FILES} ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ${CHANNEL_TYPE_FILE} ${CHANNEL_LIB} ${MAPPING_FILE})
set(COMMON_FILES_F32 ${DSL_FILES} ${DEVICE_SPECIFIC_FILES} ${BACKEND_FILE} ${PIXEL_TYPE_FLOAT_FILE} ${CHANNEL_TYPE_FILE} ${CHANNEL_LIB} ${MAPPING_FILE})
set(COMMON_FILES_U8  ${DSL_FILES} ${DEVICE_SPECIFIC_FILES} ${BACKEND_FILE} ${PIXEL_TYPE_UCHAR_FILE} ${CHANNEL_LIB} ${MAPPING_FILE})

# application sources and benchmarks
set (GAUSSIAN_DIR            ${APPS_DIR}/gaussian)
set (GAUSSIAN_BURST_DIR      ${APPS_DIR}/gaussian_burst)
set (SOBEL_LUMA_DIR          ${APPS_DIR}/sobel_luma)
set (SOBEL_LUMA_BURST_DIR    ${APPS_DIR}/sobel_luma_burst)
set (SOBEL_BURST_DIR         ${APPS_DIR}/sobel_burst)
set (UNSHARP_DIR             ${APPS_DIR}/unsharp)
set (OPTICAL_FLOW_HS_DIR     ${APPS_DIR}/optical_flow_hs)
set (OPTICAL_FLOW_LK_DIR     ${APPS_DIR}/optical_flow_lk)
set (JACOBI_DIR              ${APPS_DIR}/jacobi)
set (JACOBI_BURST_DIR        ${APPS_DIR}/jacobi_burst)
set (BILATERAL_DIR           ${APPS_DIR}/bilateral)
set (BILATERAL_BURST_DIR     ${APPS_DIR}/bilateral_burst)
set (SQUARE_DIR              ${APPS_DIR}/square)
set (SQUARE_BURST_DIR        ${APPS_DIR}/square_burst)
set (BOX_FILTER_DIR          ${APPS_DIR}/box_filter)
set (BOX_FILTER_BURST_DIR    ${APPS_DIR}/box_filter_burst)
set (LAPLACE_DIR             ${APPS_DIR}/laplace)
set (LAPLACE_BURST_DIR       ${APPS_DIR}/laplace_burst)
set (FILTER_CHAIN_DIR        ${APPS_DIR}/filter_chain)
set (FILTER_CHAIN_BURST_DIR  ${APPS_DIR}/filter_chain_burst)
set (HARRIS_CORNER_DIR       ${APPS_DIR}/harris_corner)
set (HARRIS_CORNER_BURST_DIR ${APPS_DIR}/harris_corner_burst)
set (SHI_THOMASI_DIR         ${APPS_DIR}/shi_thomasi)

set(BILATERAL_FILES           ${BILATERAL_DIR}/mask_f32.impala ${BILATERAL_DIR}/bilateral.impala)
set(BILATERAL_BURST_FILES     ${BILATERAL_BURST_DIR}/mask_f32.impala ${BILATERAL_BURST_DIR}/bilateral_burst.impala)
set(SQUARE_FILES              ${SQUARE_DIR}/square.impala)
set(SQUARE_BURST_FILES        ${SQUARE_BURST_DIR}/square_burst.impala)
set(BOX_FILTER_FILES          ${BOX_FILTER_DIR}/mask.impala ${BOX_FILTER_DIR}/box_filter.impala)
set(BOX_FILTER_BURST_FILES    ${BOX_FILTER_BURST_DIR}/mask.impala ${BOX_FILTER_BURST_DIR}/box_filter_burst.impala)
set(LAPLACE_FILES             ${LAPLACE_DIR}/mask.impala ${LAPLACE_DIR}/laplace.impala)
set(LAPLACE_BURST_FILES       ${LAPLACE_BURST_DIR}/mask.impala ${LAPLACE_BURST_DIR}/laplace_burst.impala)
set(BOX_FILTER_CONST_FILES    ${BOX_FILTER_DIR}/box_filter_const.impala)
set(GAUSSIAN_FILES            ${GAUSSIAN_DIR}/mask_${PIXEL_TYPE}.impala ${GAUSSIAN_DIR}/gaussian.impala)
set(GAUSSIAN_BURST_FILES      ${GAUSSIAN_BURST_DIR}/mask_${PIXEL_TYPE}.impala ${GAUSSIAN_BURST_DIR}/gaussian_burst.impala)
set(SOBEL_LUMA_FILES          ${SOBEL_LUMA_DIR}/mask_i32.impala ${SOBEL_LUMA_DIR}/sobel_luma.impala)
set(SOBEL_LUMA_BURST_FILES    ${SOBEL_LUMA_BURST_DIR}/mask_i32.impala ${SOBEL_LUMA_BURST_DIR}/sobel_luma_burst.impala)
set(SOBEL_BURST_FILES         ${SOBEL_BURST_DIR}/mask_i32.impala ${SOBEL_BURST_DIR}/sobel_burst.impala)
set(UNSHARP_FILES             ${UNSHARP_DIR}/mask_${PIXEL_TYPE}.impala ${UNSHARP_DIR}/unsharp.impala)
set(OPTICAL_FLOW_HS_FILES     ${OPTICAL_FLOW_HS_DIR}/mask_${PIXEL_TYPE}.impala ${OPTICAL_FLOW_HS_DIR}/optical_flow_hs.impala)
set(OPTICAL_FLOW_LK_FILES     ${OPTICAL_FLOW_LK_DIR}/mask_${PIXEL_TYPE}.impala ${OPTICAL_FLOW_LK_DIR}/optical_flow_lk.impala)
set(JACOBI_FILES              ${JACOBI_DIR}/mask_${PIXEL_TYPE}.impala ${JACOBI_DIR}/jacobi.impala)
set(JACOBI_BURST_FILES        ${JACOBI_BURST_DIR}/mask_${PIXEL_TYPE}.impala ${JACOBI_BURST_DIR}/jacobi_burst.impala)
set(FILTER_CHAIN_FILES        ${FILTER_CHAIN_DIR}/mask_${PIXEL_TYPE}.impala ${FILTER_CHAIN_DIR}/filter_chain.impala)
set(FILTER_CHAIN_BURST_FILES  ${FILTER_CHAIN_BURST_DIR}/mask_${PIXEL_TYPE}.impala ${FILTER_CHAIN_BURST_DIR}/filter_chain_burst.impala)
set(HARRIS_CORNER_FILES       ${HARRIS_CORNER_DIR}/mask_${PIXEL_TYPE}.impala ${HARRIS_CORNER_DIR}/harris_corner.impala)
set(HARRIS_CORNER_BURST_FILES ${HARRIS_CORNER_BURST_DIR}/mask_${PIXEL_TYPE}.impala ${HARRIS_CORNER_BURST_DIR}/harris_corner_burst.impala)
set(SHI_THOMASI_FILES         ${SHI_THOMASI_DIR}/mask_${PIXEL_TYPE}.impala ${SHI_THOMASI_DIR}/shi_thomasi.impala)

# for optional config files
set(APPS_CONFIG_FILES "")

if (${BACKEND} STREQUAL "hls")
    set(GMEM_OPT_DEFAULT ",GMEM_OPT")
endif()

anydsl_runtime_wrap(BILATERAL_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES_F32} ${BILATERAL_FILES})
add_executable(bilateral ${BILATERAL_PROGRAM})
target_link_libraries(bilateral ${ANYDSL_RUNTIME_LIBRARIES})
add_test("bilateral" bilateral)

anydsl_runtime_wrap(BILATERAL_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES_F32} ${BILATERAL_BURST_FILES})
add_executable(bilateral_burst ${BILATERAL_BURST_PROGRAM})
target_link_libraries(bilateral_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("bilateral_burst" bilateral_burs)

anydsl_runtime_wrap(BOX_FILTER_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${BOX_FILTER_FILES})
add_executable(box_filter ${BOX_FILTER_PROGRAM})
target_link_libraries(box_filter ${ANYDSL_RUNTIME_LIBRARIES})
add_test("box_filter" box_filter)

anydsl_runtime_wrap(BOX_FILTER_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${BOX_FILTER_BURST_FILES})
add_executable(box_filter_burst ${BOX_FILTER_BURST_PROGRAM})
target_link_libraries(box_filter_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("box_filter_burst" box_filter_burst)

anydsl_runtime_wrap(LAPLACE_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${LAPLACE_FILES})
add_executable(laplace ${LAPLACE_PROGRAM})
target_link_libraries(laplace ${ANYDSL_RUNTIME_LIBRARIES})
add_test("laplace" laplace)

anydsl_runtime_wrap(LAPLACE_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${LAPLACE_BURST_FILES})
add_executable(laplace_burst ${LAPLACE_BURST_PROGRAM})
target_link_libraries(laplace_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("laplace_burst" laplace_burst)

anydsl_runtime_wrap(GAUSSIAN_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${GAUSSIAN_FILES})
add_executable(gaussian ${GAUSSIAN_PROGRAM})
target_link_libraries(gaussian ${ANYDSL_RUNTIME_LIBRARIES})
add_test("gaussian" gaussian)

anydsl_runtime_wrap(GAUSSIAN_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${GAUSSIAN_BURST_FILES})
add_executable(gaussian_burst ${GAUSSIAN_BURST_PROGRAM})
target_link_libraries(gaussian_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("gaussian_burst" gaussian_burst)

anydsl_runtime_wrap(SOBEL_LUMA_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${SOBEL_LUMA_FILES})
add_executable(sobel_luma ${SOBEL_LUMA_PROGRAM})
target_link_libraries(sobel_luma ${ANYDSL_RUNTIME_LIBRARIES})
add_test("sobel_luma" sobel_luma)

anydsl_runtime_wrap(SOBEL_LUMA_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${SOBEL_LUMA_BURST_FILES})
add_executable(sobel_luma_burst ${SOBEL_LUMA_BURST_PROGRAM})
target_link_libraries(sobel_luma_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("sobel_luma_burst" sobel_luma_burst)

anydsl_runtime_wrap(SOBEL_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${SOBEL_BURST_FILES})
add_executable(sobel_burst ${SOBEL_BURST_PROGRAM})
target_link_libraries(sobel_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("sobel_burst" sobel_burst)

anydsl_runtime_wrap(UNSHARP_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${UNSHARP_FILES})
add_executable(unsharp ${UNSHARP_PROGRAM})
target_link_libraries(unsharp ${ANYDSL_RUNTIME_LIBRARIES})
add_test("unsharp" unsharp)

anydsl_runtime_wrap(OPTICAL_FLOW_HS_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}${GMEM_OPT_DEFAULT}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${OPTICAL_FLOW_HS_FILES})
add_executable(optical_flow_hs ${OPTICAL_FLOW_HS_PROGRAM})
target_link_libraries(optical_flow_hs ${ANYDSL_RUNTIME_LIBRARIES})
add_test("optical_flow_hs" optical_flow_hs)

anydsl_runtime_wrap(OPTICAL_FLOW_LK_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}${GMEM_OPT_DEFAULT}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${OPTICAL_FLOW_LK_FILES})
add_executable(optical_flow_lk ${OPTICAL_FLOW_LK_PROGRAM})
target_link_libraries(optical_flow_lk ${ANYDSL_RUNTIME_LIBRARIES})
add_test("optical_flow_lk" optical_flow_lk)

anydsl_runtime_wrap(JACOBI_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${JACOBI_FILES})
add_executable(jacobi ${JACOBI_PROGRAM})
target_link_libraries(jacobi ${ANYDSL_RUNTIME_LIBRARIES})
add_test("jacobi" jacobi)

anydsl_runtime_wrap(JACOBI_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${JACOBI_BURST_FILES})
add_executable(jacobi_burst ${JACOBI_BURST_PROGRAM})
target_link_libraries(jacobi_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("jacobi_burst" jacobi_burst)

anydsl_runtime_wrap(SQUARE_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${SQUARE_FILES})
add_executable(square ${SQUARE_PROGRAM})
target_link_libraries(square ${ANYDSL_RUNTIME_LIBRARIES})
add_test("square" square)

anydsl_runtime_wrap(SQUARE_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${SQUARE_BURST_FILES})
add_executable(square_burst ${SQUARE_BURST_PROGRAM})
target_link_libraries(square_burst ${ANYDSL_RUNTIME_LIBRARIES})
add_test("square_burst" square_burst)

anydsl_runtime_wrap(FILTER_CHAIN_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${FILTER_CHAIN_FILES})
add_executable(filter_chain ${FILTER_CHAIN_PROGRAM})
target_link_libraries(filter_chain ${ANYDSL_RUNTIME_LIBRARIES})
set_target_properties(filter_chain PROPERTIES COMPILE_FLAGS -DSTINCILLA_DATA_TYPE=${STINCILLA_DATA_TYPE})
set_target_properties(filter_chain PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

anydsl_runtime_wrap(FILTER_CHAIN_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${FILTER_CHAIN_BURST_FILES})
add_executable(filter_chain_burst ${FILTER_CHAIN_BURST_PROGRAM})
target_link_libraries(filter_chain_burst ${ANYDSL_RUNTIME_LIBRARIES})
set_target_properties(filter_chain_burst PROPERTIES COMPILE_FLAGS -DSTINCILLA_DATA_TYPE=${STINCILLA_DATA_TYPE})
set_target_properties(filter_chain_burst PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

anydsl_runtime_wrap(SHI_THOMASI_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${SHI_THOMASI_FILES})
add_executable(shi_thomasi "${SHI_THOMASI_DIR}/main.cpp" ${SHI_THOMASI_PROGRAM})
target_link_libraries(shi_thomasi ${ANYDSL_RUNTIME_LIBRARIES})
set_target_properties(shi_thomasi PROPERTIES COMPILE_FLAGS -DSTINCILLA_DATA_TYPE=${STINCILLA_DATA_TYPE})
set_target_properties(shi_thomasi PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

anydsl_runtime_wrap(HARRIS_CORNER_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}${GMEM_OPT_DEFAULT}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${HARRIS_CORNER_FILES})
add_executable(harris_corner "${HARRIS_CORNER_DIR}/main.cpp" ${HARRIS_CORNER_PROGRAM})
target_link_libraries(harris_corner ${ANYDSL_RUNTIME_LIBRARIES})
set_target_properties(harris_corner PROPERTIES COMPILE_FLAGS -DSTINCILLA_DATA_TYPE=${STINCILLA_DATA_TYPE})
set_target_properties(harris_corner PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

anydsl_runtime_wrap(HARRIS_CORNER_BURST_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    HLS_FLAGS ${HLS_FLAGS}
    FILES ${APPS_CONFIG_FILES} ${COMMON_FILES} ${HARRIS_CORNER_BURST_FILES})
add_executable(harris_corner_burst "${HARRIS_CORNER_BURST_DIR}/main.cpp" ${HARRIS_CORNER_BURST_PROGRAM})
target_link_libraries(harris_corner_burst ${ANYDSL_RUNTIME_LIBRARIES})
set_target_properties(harris_corner_burst PROPERTIES COMPILE_FLAGS -DSTINCILLA_DATA_TYPE=${STINCILLA_DATA_TYPE})
set_target_properties(harris_corner_burst PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

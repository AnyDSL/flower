if(DEVICE STREQUAL "fpga")
    anydsl_runtime_wrap(TEST_FPGA_COPY
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_copy.impala)
    add_executable(test_fpga_copy ${TEST_FPGA_COPY})
    target_link_libraries(test_fpga_copy ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_copy" test_fpga_copy)

    anydsl_runtime_wrap(TEST_FPGA_CGRA_DATA_FLOW
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_dataflow.impala)
    add_executable(test_fpga_cgra_dataflow ${TEST_FPGA_CGRA_DATA_FLOW})
    target_link_libraries(test_fpga_cgra_dataflow ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_dataflow" test_fpga_cgra_dataflow)

    anydsl_runtime_wrap(TEST_FPGA_MULTI_KERNEL_CGRA_DATA_FLOW
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_multi_kernel_cgra_dataflow.impala)
    add_executable(test_fpga_multi_kernel_cgra_dataflow ${TEST_FPGA_MULTI_KERNEL_CGRA_DATA_FLOW})
    target_link_libraries(test_fpga_multi_kernel_cgra_dataflow ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_multi_kernel_cgra_dataflow" test_fpga_multi_kernel_cgra_dataflow)

    anydsl_runtime_wrap(TEST_FPGA_CGRA_VECTORIZED
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_vectorized.impala)
    add_executable(test_fpga_cgra_vectorized ${TEST_FPGA_CGRA_VECTORIZED})
    target_link_libraries(test_fpga_cgra_vectorized ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_vectorized" test_fpga_cgra_vectorized)


    anydsl_runtime_wrap(TEST_FPGA_CGRA_VECTORIZED_SCALED
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_vectorized_scaled.impala)
    add_executable(test_fpga_cgra_vectorized_scaled ${TEST_FPGA_CGRA_VECTORIZED_SCALED})
    target_link_libraries(test_fpga_cgra_vectorized_scaled ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_vectorized_scaled" test_fpga_cgra_vectorized_scaled)

    anydsl_runtime_wrap(TEST_FPGA_CGRA_VECTORIZED_SCALED2
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_vectorized_scaled2.impala)
    add_executable(test_fpga_cgra_vectorized_scaled2 ${TEST_FPGA_CGRA_VECTORIZED_SCALED2})
    target_link_libraries(test_fpga_cgra_vectorized_scaled2 ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_vectorized_scaled2" test_fpga_cgra_vectorized_scaled2)

    anydsl_runtime_wrap(TEST_FPGA_CGRA_VECTORIZED_SCALED3
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_vectorized_scaled3.impala)
    add_executable(test_fpga_cgra_vectorized_scaled3 ${TEST_FPGA_CGRA_VECTORIZED_SCALED3})
    target_link_libraries(test_fpga_cgra_vectorized_scaled3 ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_vectorized_scaled3" test_fpga_cgra_vectorized_scaled3)


    anydsl_runtime_wrap(TEST_FPGA_CGRA_VECTORIZED_SCALED_BYREPLICATION
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_vectorized_scaled_byReplication.impala)
    add_executable(test_fpga_cgra_vectorized_scaled_byReplication ${TEST_FPGA_CGRA_VECTORIZED_SCALED_BYREPLICATION})
    target_link_libraries(test_fpga_cgra_vectorized_scaled_byReplication ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_vectorized_scaled_byReplication" test_fpga_cgra_vectorized_scaled_byReplication)


    anydsl_runtime_wrap(TEST_FPGA_CGRA_VECTORIZED_SCALED_BYREPLICATION2
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fpga_cgra_vectorized_scaled_byReplication2.impala)
    add_executable(test_fpga_cgra_vectorized_scaled_byReplication2 ${TEST_FPGA_CGRA_VECTORIZED_SCALED_BYREPLICATION2})
    target_link_libraries(test_fpga_cgra_vectorized_scaled_byReplication2 ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_cgra_vectorized_scaled_byReplication2" test_fpga_cgra_vectorized_scaled_byReplication2)


    anydsl_runtime_wrap(TEST_DATA_FLOW
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_dataflow.impala)
    add_executable(test_dataflow ${TEST_DATA_FLOW})
    target_link_libraries(test_dataflow ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("dataflow" test_dataflow)


    anydsl_runtime_wrap(TEST_LOOP_PIPELINE
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_loop_pipeline.impala)
    add_executable(test_loop_pipeline ${TEST_LOOP_PIPELINE})
    target_link_libraries(test_loop_pipeline ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("loop_pipeline" test_loop_pipeline)

    anydsl_runtime_wrap(TEST_LP_NESTED
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_lp_nested.impala)
    add_executable(test_lp_nested ${TEST_LP_NESTED})
    target_link_libraries(test_lp_nested ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("lp_nested" test_lp_nested)

    anydsl_runtime_wrap(TEST_RESERVE_SHARED
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_reserve_shared.impala)
    add_executable(test_reserve_shared ${TEST_RESERVE_SHARED})
    target_link_libraries(test_reserve_shared ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("lp_nested" test_reserve_shared)

    anydsl_runtime_wrap(TEST_FIR_VECTORIZED
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir_vectorized.impala)
    add_executable(test_fir_vectorized ${TEST_FIR_VECTORIZED})
    target_link_libraries(test_fir_vectorized ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir_vectorized" test_fir_vectorized)

    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh.impala)
    add_executable(test_fir2d_vect_nobh ${TEST_FIR2D_VECT_NOBH})
    target_link_libraries(test_fir2d_vect_nobh ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh" test_fir2d_vect_nobh)

    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_ABS
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_abs.impala)
    add_executable(test_fir2d_vect_nobh_abs ${TEST_FIR2D_VECT_NOBH_ABS})
    target_link_libraries(test_fir2d_vect_nobh_abs ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_abs" test_fir2d_vect_nobh_abs)

    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_ABS_V2
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_abs_v2.impala)
    add_executable(test_fir2d_vect_nobh_abs_v2 ${TEST_FIR2D_VECT_NOBH_ABS_V2})
    target_link_libraries(test_fir2d_vect_nobh_abs_v2 ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_abs_v2" test_fir2d_vect_nobh_abs_v2)

    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_FLAT_MASK
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_flat_mask.impala)
    add_executable(test_fir2d_vect_nobh_flat_mask ${TEST_FIR2D_VECT_NOBH_FLAT_MASK})
    target_link_libraries(test_fir2d_vect_nobh_flat_mask ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_flat_mask" test_fir2d_vect_nobh_flat_mask)

    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_FLAT_MASK_PL_PINGPONG
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_flat_mask_pl_pingpong.impala)
    add_executable(test_fir2d_vect_nobh_flat_mask_pl_pingpong ${TEST_FIR2D_VECT_NOBH_FLAT_MASK_PL_PINGPONG})
    target_link_libraries(test_fir2d_vect_nobh_flat_mask_pl_pingpong ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_flat_mask_pl_pingpong" test_fir2d_vect_nobh_flat_mask_pl_pingpong)

    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_FLAT_MASK_PL_AIE_PINGPONG
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong.impala)
    add_executable(test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong ${TEST_FIR2D_VECT_NOBH_FLAT_MASK_PL_AIE_PINGPONG})
    target_link_libraries(test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong" test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong)


    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_FLAT_MASK_PL_AIE_PINGPONG_OPT
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_opt.impala)
    add_executable(test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_opt ${TEST_FIR2D_VECT_NOBH_FLAT_MASK_PL_AIE_PINGPONG_OPT})
    target_link_libraries(test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_opt ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_opt" test_fir2d_vect_nobh_flat_mask_pl_aie_pingpong_opt)


    anydsl_runtime_wrap(TEST_FIR2D_VECT_NOBH_FLAT_MASK_STREAM
        FRONTEND "artic"
        CLANG_FLAGS ${CLANG_FLAGS}
        ARTIC_FLAGS ${IMPALA_FLAGS}
        HLS_FLAGS ${HLS_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala test_fir2d_vect_nobh_flat_mask_stream.impala)
    add_executable(test_fir2d_vect_nobh_flat_mask_stream ${TEST_FIR2D_VECT_NOBH_FLAT_MASK_STREAM})
    target_link_libraries(test_fir2d_vect_nobh_flat_mask_stream ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("test_fir2d_vect_nobh_flat_mask_stream" test_fir2d_vect_nobh_flat_mask_stream)

endif()

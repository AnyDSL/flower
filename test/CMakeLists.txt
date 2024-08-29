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

endif()

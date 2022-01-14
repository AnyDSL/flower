if(DEVICE STREQUAL "fpga")
    anydsl_runtime_wrap(FPGA_COPY_PROGRAM
        CLANG_FLAGS ${CLANG_FLAGS}
        IMPALA_FLAGS ${IMPALA_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala fpga_copy.impala
        HLS_FLAGS ${HLS_FLAGS})
    add_executable(fpga_copy ${FPGA_COPY_PROGRAM})
    target_link_libraries(fpga_copy ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("fpga_copy" fpga_copy)

    anydsl_runtime_wrap(DATA_FLOW_PROGRAM
        CLANG_FLAGS ${CLANG_FLAGS}
        IMPALA_FLAGS ${IMPALA_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala dataflow.impala
        HLS_FLAGS ${HLS_FLAGS})
    add_executable(dataflow ${DATA_FLOW_PROGRAM})
    target_link_libraries(dataflow ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("dataflow" dataflow)

    anydsl_runtime_wrap(LOOP_PIPELINE_PROGRAM
        CLANG_FLAGS ${CLANG_FLAGS}
        IMPALA_FLAGS ${IMPALA_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala loop_pipeline.impala
        HLS_FLAGS ${HLS_FLAGS})
    add_executable(loop_pipeline ${LOOP_PIPELINE_PROGRAM})
    target_link_libraries(loop_pipeline ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("loop_pipeline" loop_pipeline)

    anydsl_runtime_wrap(LP_NESTED_PROGRAM
        CLANG_FLAGS ${CLANG_FLAGS}
        IMPALA_FLAGS ${IMPALA_FLAGS}
        FILES ${BACKEND_FILE} ${PIXEL_TYPE_FILE} ../src/utils.impala lp_nested.impala
        HLS_FLAGS ${HLS_FLAGS})
    add_executable(lp_nested ${LP_NESTED_PROGRAM})
    target_link_libraries(lp_nested ${ANYDSL_RUNTIME_LIBRARIES})
    add_test("lp_nested" lp_nested)
endif()

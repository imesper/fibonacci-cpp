

set(TEST_BIN_DIR ${PROJECT_SOURCE_DIR}/bin/test)

function(tests test_name)
    set(TEST_EXECUTABLE run_${test_name})
    set(TEST_SOURCE ${test_name}.cpp)

    add_executable(${TEST_EXECUTABLE} ${TEST_SOURCE})
    
    target_link_libraries(${TEST_EXECUTABLE} gtest gtest_main ${PROJECT_NAME})

    add_test(${test_name} ${TEST_EXECUTABLE})

    install(
    TARGETS
    ${TEST_EXECUTABLE}
    DESTINATION
    ${TEST_BIN_DIR}
)
endfunction()

tests(test)


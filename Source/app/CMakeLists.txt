file (GLOB SRC_FILES src/*cpp)

file (GLOB INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/*hpp)

set(SOURCE_FILES
   ${SRC_FILES}
)

add_executable(run_${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(run_${PROJECT_NAME} ${PROJECT_NAME})

install(
    TARGETS
    run_${PROJECT_NAME}
    CONFIGURATIONS
    Debug
    DESTINATION
    ${PROJECT_SOURCE_DIR}/bin/debug
)

install(
    TARGETS
    run_${PROJECT_NAME}
    CONFIGURATIONS
    Release
    DESTINATION
    ${PROJECT_SOURCE_DIR}/bin/release
)

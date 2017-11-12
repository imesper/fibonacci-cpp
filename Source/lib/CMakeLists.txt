file (GLOB SRC_FILES src/*cpp)
file (GLOB INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/*hpp)

set(SOURCE_FILES
   ${SRC_FILES}
   ${INCLUDE_FILES}
)

add_library(${PROJECT_NAME} ${SOURCE_FILES})

# target_link_libraries(${PROJECT_NAME} cpprest boost_system ssl1 crypto1)

set(LIB_DEBUG_DIR ${PROJECT_SOURCE_DIR}/lib/debug)

install(
    TARGETS
    ${PROJECT_NAME}
    CONFIGURATIONS
    Debug
    DESTINATION
    ${LIB_DEBUG_DIR}
)

install(
    TARGETS
    ${PROJECT_NAME}
    CONFIGURATIONS
    Release
    DESTINATION
    ${PROJECT_SOURCE_DIR}/lib/release
)

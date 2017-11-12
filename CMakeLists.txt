cmake_minimum_required (VERSION 3.5)

#For VSCode Clang
SET(MAKE_MAKE_PROGRAM /usr/bin/ninja)

MESSAGE( STATUS "CMAKE_BINARY_DIR:         " ${CMAKE_BINARY_DIR} )
MESSAGE( STATUS "CMAKE_SOURCE_DIR:         " ${CMAKE_SOURCE_DIR} )
MESSAGE( STATUS "PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR} )
MESSAGE( STATUS "PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR} )
MESSAGE( STATUS "EXECUTABLE_OUTPUT_PATH: " ${EXECUTABLE_OUTPUT_PATH} )
MESSAGE( STATUS "LIBRARY_OUTPUT_PATH:     " ${LIBRARY_OUTPUT_PATH} )

SET (CMAKE_CXX_STANDARD 14)

project(fibonacci-cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory (Source/lib)

add_subdirectory (Source/app)

find_package(GTest)

include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

add_subdirectory(test)

cmake_minimum_required(VERSION 3.5)
project(dspHelloWorld)

add_subdirectory(deps/eigen)
include_directories(deps/eigen)
add_subdirectory(deps/sndfile)
include_directories(deps/sndfile/include)

find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
add_compile_definitions(WITHOUT_NUMPY)
include_directories(deps/matplotlib)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} Eigen3::Eigen SndFile::sndfile Python3::Python Python3::Module)
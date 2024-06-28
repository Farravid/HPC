cmake_minimum_required(VERSION 3.15)
project(learning-hpc)

find_package(Boost REQUIRED)
find_package(benchmark REQUIRED)
find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} boost::boost)
target_link_libraries(${PROJECT_NAME} benchmark::benchmark_main)
target_link_libraries(${PROJECT_NAME} gtest::gtest)
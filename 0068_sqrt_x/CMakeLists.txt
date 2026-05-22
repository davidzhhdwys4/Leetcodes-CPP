cmake_minimum_required(VERSION 3.14)
project(sqrt_x LANGUAGES CXX)

add_executable(sqrt_x_test
  Answer_test.cpp
)

target_include_directories(sqrt_x_test PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/
)

target_link_libraries(sqrt_x_test PRIVATE
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sqrt_x_test)

cmake_minimum_required(VERSION 3.14)
project(search_in_rotated_sorted_array LANGUAGES CXX)

add_executable(search_in_rotated_sorted_array_test
  test/Answer_test.cpp
)

target_include_directories(search_in_rotated_sorted_array_test PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(search_in_rotated_sorted_array_test PRIVATE
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(search_in_rotated_sorted_array_test)

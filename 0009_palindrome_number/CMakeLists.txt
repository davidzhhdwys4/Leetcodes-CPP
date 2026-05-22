cmake_minimum_required(VERSION 3.14)
project(palindrome_number LANGUAGES CXX)

add_executable(palindrome_number_test
  Answer_test.cpp
)

target_include_directories(palindrome_number_test PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/
)

target_link_libraries(palindrome_number_test PRIVATE
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(palindrome_number_test)

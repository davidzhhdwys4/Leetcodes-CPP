cmake_minimum_required(VERSION 3.14)
project(len_last_word LANGUAGES CXX)

add_executable(len_last_word_test
  Answer_test.cpp
)

target_include_directories(len_last_word_test PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/
)

target_link_libraries(len_last_word_test PRIVATE
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(len_last_word_test)

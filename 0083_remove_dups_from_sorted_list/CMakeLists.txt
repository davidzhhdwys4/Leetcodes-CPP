cmake_minimum_required(VERSION 3.14)
project(remove_dups_from_list LANGUAGES CXX)

add_executable(remove_dups_from_list_test
  Answer_test.cpp
)

target_include_directories(remove_dups_from_list_test PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/
)

target_link_libraries(remove_dups_from_list_test PRIVATE
  GTest::gmock
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(remove_dups_from_list_test)

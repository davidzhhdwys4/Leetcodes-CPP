cmake_minimum_required(VERSION 3.14)
project(leetcodes_cpp LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(0009_palindrome_number)
add_subdirectory(0033_search_in_rotated_sorted_array)
add_subdirectory(0058_length_of_last_word)
add_subdirectory(0068_sqrt_x)
add_subdirectory(0083_remove_dups_from_sorted_list)
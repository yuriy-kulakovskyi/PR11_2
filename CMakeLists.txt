cmake_minimum_required(VERSION 3.14)
project(PR11_2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR11_2
        src/main.cpp
        src/h.cpp
)

target_link_libraries(PR11_2)

add_executable(PR11_2_tests
        tests/test_h.cpp
        src/h.cpp
)

target_link_libraries(PR11_2_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR11_2_tests)

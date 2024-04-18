cmake_minimum_required(VERSION 2.8...3.12)
project(accounting VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(accounting main.cpp source/menus.cpp source/operations.cpp source/read_input.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

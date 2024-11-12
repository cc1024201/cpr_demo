cmake_minimum_required(VERSION 3.29)
project(cpr_demo)

set(CMAKE_CXX_STANDARD 20)

# 添加 FetchContent 模块
include(FetchContent)
FetchContent_Declare(
        cpr
        GIT_REPOSITORY https://github.com/libcpr/cpr.git
        GIT_TAG origin/master
)
FetchContent_MakeAvailable(cpr)

add_executable(cpr_demo main.cpp)

target_link_libraries(cpr_demo PRIVATE cpr::cpr)

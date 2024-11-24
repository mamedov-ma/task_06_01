cmake_minimum_required(VERSION 3.14.4)
project(entity)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -ggdb3 -D_GLIBCXX_DEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O3 -ggdb3")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(entity)

target_include_directories(entity PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

target_sources(entity PRIVATE
    main.cpp
    src/task_06_01.cpp
)

target_link_options(entity PRIVATE -static-libgcc -static-libstdc++)

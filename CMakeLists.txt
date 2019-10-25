cmake_minimum_required(VERSION 3.10.3)
project(my_bot CXX)

add_subdirectory(sleepy-discord)

add_executable(bot main.cpp)

target_link_libraries(bot sleepy-discord)

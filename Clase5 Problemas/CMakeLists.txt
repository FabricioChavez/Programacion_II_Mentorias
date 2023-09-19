cmake_minimum_required(VERSION 3.23)
project(problemas)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES "src/*.cpp")
foreach(source_file ${SOURCES})
    get_filename_component(executable_name ${source_file} NAME_WE)
    add_executable(${executable_name} ${source_file})
endforeach()

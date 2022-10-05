cmake_minimum_required(VERSION 3.21)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)


set(ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(SRC "${ROOT}/")

set(special_chars "[:\\+\\./]")
set(delimiter "_")
string(REGEX REPLACE ${special_chars} ${delimiter} pre ${CMAKE_CURRENT_SOURCE_DIR})

file (GLOB_RECURSE files ${SRC}*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ${special_chars} ${delimiter} exe ${file})
    string(REGEX REPLACE "^${pre}_(.*)_cpp$" "\\1" exe ${exe})
    add_executable (${exe} ${file} ch02/exercise.cpp ch02/test.cpp)
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

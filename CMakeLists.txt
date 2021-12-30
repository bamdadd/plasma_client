#brew install apache-arrow-glib
#https://arrow.apache.org/install/
cmake_minimum_required(VERSION 3.21)
project(PlasmaClient)


find_package(PkgConfig REQUIRED)

find_library (PLASMA_LIB plasma)
find_library (ARROW_LIB arrow)

pkg_check_modules(PLASMA plasma)
pkg_check_modules (GLIB2 glib-2.0)


set(CMAKE_CXX_STANDARD 14)
add_executable(PlasmaClient main.cpp)
include_directories(${PLASMA_INCLUDE_DIRS})

message(${PLASMA_LIBRARIES})

find_library (PLASMA_LIB plasma)
find_library (ARROW_LIB arrow)

target_link_libraries(PlasmaClient ${PLASMA_LIB})
target_link_libraries(PlasmaClient ${ARROW_LIB})

cmake_minimum_required(VERSION 3.5)

project(cppvezbi6_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cppvezbi6_1 main.cpp)

include(GNUInstallDirs)
install(TARGETS cppvezbi6_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

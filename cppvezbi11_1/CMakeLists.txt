cmake_minimum_required(VERSION 3.5)

project(cppvezbi11_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cppvezbi11_1 main.cpp)

include(GNUInstallDirs)
install(TARGETS cppvezbi11_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

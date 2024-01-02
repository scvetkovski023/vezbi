cmake_minimum_required(VERSION 3.5)

project(stlvezbi4_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(stlvezbi4_3 main.cpp)

include(GNUInstallDirs)
install(TARGETS stlvezbi4_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

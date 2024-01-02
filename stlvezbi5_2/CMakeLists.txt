cmake_minimum_required(VERSION 3.5)

project(stlvezbi5_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(stlvezbi5_2 main.cpp)

include(GNUInstallDirs)
install(TARGETS stlvezbi5_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

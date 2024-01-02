cmake_minimum_required(VERSION 3.5)

project(stlvezbi2_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(stlvezbi2_1 main.cpp)

include(GNUInstallDirs)
install(TARGETS stlvezbi2_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

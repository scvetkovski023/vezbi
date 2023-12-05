cmake_minimum_required(VERSION 3.5)

project(c_vezbi9_14 LANGUAGES C)

add_executable(c_vezbi9_14 main.c)

include(GNUInstallDirs)
install(TARGETS c_vezbi9_14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

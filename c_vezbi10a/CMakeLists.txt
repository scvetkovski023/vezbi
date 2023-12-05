cmake_minimum_required(VERSION 3.5)

project(c_vezbi10a LANGUAGES C)

add_executable(c_vezbi10a main.c)

include(GNUInstallDirs)
install(TARGETS c_vezbi10a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

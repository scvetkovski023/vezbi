cmake_minimum_required(VERSION 3.5)

project(c_vezbi10 LANGUAGES C)

add_executable(c_vezbi10 main.c)

include(GNUInstallDirs)
install(TARGETS c_vezbi10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

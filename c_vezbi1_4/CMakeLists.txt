cmake_minimum_required(VERSION 3.5)

project(vezbi1_4 LANGUAGES C)

add_executable(vezbi1_4 main.c)

include(GNUInstallDirs)
install(TARGETS vezbi1_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

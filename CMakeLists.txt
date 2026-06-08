cmake_minimum_required(VERSION 3.16)
project(PMath C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(pmath STATIC src/pm_units.c)

target_include_directories(pmath PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

install(TARGETS pmath
    ARCHIVE DESTINATION lib
)

install(FILES 
    include/pmath.h
    include/pm_units.h
    include/pm_vec2.h
    include/pm_vec3.h
    DESTINATION include         # Installs headers into /usr/local/include/
)

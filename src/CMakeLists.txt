cmake_minimum_required (VERSION 2.6)
project (KipTut)
ADD_DEFINITIONS(
-std=c++11
)
# the version number
set (KipTut_VERSION_MAJOR 0)
set (KipTut_VERSION_MINOR 1)

# add the binary tree to the search path for include files
# so that we will find TODO
include_directories ("${PROJECT_BINARY_DIR}")

# add the kip library
option(USE_KIPLIB "use the kip lib" ON)
if (USE_KIPLIB)
    include_directories ("${PROJECT_SOURCE_DIR}/kip")
    add_subdirectory(kip)
    set (EXTRA_LIBS ${EXTRA_LIBS} kip)
endif (USE_KIPLIB)

# add the executable
add_executable (KipTutExe main.cpp)
target_link_libraries (KipTutExe ${EXTRA_LIBS})

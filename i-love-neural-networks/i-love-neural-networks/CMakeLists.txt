# CMakeList.txt : CMake project for i-love-neural-networks, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (i-love-neural-networks "i-love-neural-networks.cpp" "i-love-neural-networks.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET i-love-neural-networks PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

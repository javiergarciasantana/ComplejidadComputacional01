# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informatica Basica
#
# @author Javier Garcia Santana
# @date 28 Dec 2020
# @brief CMakeLists.txt example
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# Set the project name
project(ULL_CARCEL                # Mandatory
    VERSION 1.0
    DESCRIPTION "Saquenme de la ull"
    LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the output directories for binaries and libraries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

# Tell CMake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Add the executable target
add_executable(Func_Pr
  src/func_pr_main.cc)

# Optionally, you can explicitly link any necessary libraries here
# target_link_libraries(FuncPr <library_name>)

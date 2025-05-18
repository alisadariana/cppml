cmake_minimum_required(VERSION 3.15)

project(cppml VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(BUILD_TESTS "Build test programs" ON)
option(USE_CUDA "Enable CUDA support" ON)
option(BUILD_EXAMPLES "Build example programs" ON)

find_package(Eigen3 REQUIRED)

if(USE_CUDA)
  find_package(CUDA QUIET)
  if(CUDA_FOUND)
    add_definitions(-DUSE_CUDA)
    message(STATUS "CUDA found: ${CUDA_VERSION}")
  else()
    message(WARNING "CUDA requested but not found. Building without CUDA support.")
    set(USE_CUDA OFF)
  endif()
endif()

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${EIGEN3_INCLUDE_DIR}
)

set(CPPML_SOURCES
  src/placeholder.cpp
)

add_library(cppml STATIC ${CPPML_SOURCES})

if(BUILD_TESTS)
  enable_testing()
endif()

if(BUILD_EXAMPLES)
    file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/examples)

    add_executable(simple_example examples/main.cpp)

    target_link_libraries(simple_example PRIVATE cppml)

    set_target_properties(simple_example PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )

    target_include_directories(simple_example PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
endif()

message(STATUS "")
message(STATUS "Configuration summary:")
message(STATUS "  C++ compiler:        ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "  Build type:          ${CMAKE_BUILD_TYPE}")
message(STATUS "  Build tests:         ${BUILD_TESTS}")
message(STATUS "  Build examples:      ${BUILD_EXAMPLES}")
message(STATUS "  Use CUDA:            ${USE_CUDA}")
message(STATUS "")

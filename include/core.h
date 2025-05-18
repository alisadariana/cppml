/**
 * @file core.h
 * @brief Core definitions for the C++ Deep Learning Framework
 * 
 * This header provides the fundamental types and functions that form
 * the foundation of the framework.
 */

#ifndef CPPML_CORE_H
#define CPPML_CORE_H

#include <string>

#if defined(USE_CUDA)
#define CPPML_CUDA_AVAILABLE 1
#else
#define CPPML_CUDA_AVAILABLE 0
#endif

/**
 * @namespace cppml
 * @brief Main namespace for the C++ Deep Learning Framework
 */
namespace cppml {

/**
 * @brief Device types for computation
 */
enum class DeviceType {
    CPU,
    CUDA,
};

/**
 * @brief Returns the version string of the framework
 * @return std::string Version information
 */
std::string version();

/**
 * @brief Checks if CUDA support is available
 * @return bool True if CUDA is available
 */
bool cuda_available();

} // namespace cppml

#endif // CPPML_CORE_H

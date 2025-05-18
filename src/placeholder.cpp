/**
 * @file placeholder.cpp
 * @brief Implementation of placeholder functions
 */

#include "core.h"

namespace cppml {

std::string version() {
    return "0.1.0";
}

bool cuda_available() {
#if CPPML_CUDA_AVAILABLE
    return true;
#else
    return false;
#endif
}

} // namespace cppml

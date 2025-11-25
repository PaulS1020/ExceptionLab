/**
* @file Exceptions.cpp
 * @brief Implements the custom exception classes.
 *
 * This file provides the definitions for the constructors
 * and 'what()' methods for the custom exception classes.
 *
 * @author Paul Soy
 * @date 11/24/25
 * @version 1.0
 */

#include "Exceptions.h"

/**
 * @brief Returns the error message for FileOpenException.
 */
const char* FileOpenException::what() const noexcept {
    // .c_str() returns a const char* representation of the std::string
    return msg.c_str();
}

/**
 * @brief Returns the error message for ParseException.
 */
const char* ParseException::what() const noexcept {
    // .c_str() returns a const char* representation of the std::string
    return msg.c_str();
}


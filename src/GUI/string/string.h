#ifndef STRING_H
#define STRING_H

#include <sstream>

// Since std::to_string doesn't work on MinGW we have to implement
// our own to support all platforms.
template <typename T>
std::string toString(const T& value);

#include "string.inl"
#endif // BOOK_STRINGHELPERS_HPP

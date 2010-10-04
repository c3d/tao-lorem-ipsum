// Prototype of the function used by lorem_ipsum.tbl to
// implement the new XL primitive

#include "tree.h"

XL::Text_p lorem_ipsum(XL::Tree_p self, XL::Integer_p nwords);
XL::Text_p lorem_ipsum(XL::Tree_p self, XL::Integer_p nwords, XL::Integer_p npara);

// Private
std::string _lorem_ipsum(longlong nwords, int offset = 0);

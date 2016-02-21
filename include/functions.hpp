/*
    Défi de Clem de février

    Functions index

*/

#ifndef __FUNCTIONS_HPP__
#define __FUNCTIONS_HPP__


#include "enum_case.hpp"
#include "enum_space.hpp"
#include <string>

std::string prepare_input(std::string &input, Case const case_mode = Case::upper,
                          Space const space_mode = Space::keep, size_t const word_size = 0);


#endif // __FUNCTIONS_HPP__

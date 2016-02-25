/*
    Défi de Clem de février

    Functions index

*/


#ifndef __FUNCTIONS_HPP__
#define __FUNCTIONS_HPP__


#include "enum_case.hpp"
#include "enum_space.hpp"
#include "enum_edmode.hpp"
#include <string>
#include <queue>
#include <utility>

std::string prepare_input(std::string &input,
                          Case   const case_mode  = Case::upper,
                          Space  const space_mode = Space::keep,
                          size_t const word_size  = 0);

std::string cesar_nbr(std::string const &text, char const difference);

std::priority_queue<std::pair<unsigned int, char>>
    get_probable_diff(std::string const &text);

std::string simple_subst(std::string const &text,
                         std::string const &cipher_alphabet,
                         EDMode      const mode = EDMode::decrypt);

std::string gen_cipher_alphabet(std::string key);


#endif // __FUNCTIONS_HPP__

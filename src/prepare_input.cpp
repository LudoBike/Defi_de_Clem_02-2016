/*
    Défi de Clem de février

    Function to prepare the input for decripting

*/

#include <functions.hpp>
#include <enum_case.hpp>
#include <enum_space.hpp>
#include <cassert>
#include <string>
#include <regex>
#include <algorithm>


std::string prepare_input(std::string &input, Case const case_mode,
                     Space const space_mode, size_t const word_size)
{
    assert(((space_mode == Space::word_size) ? word_size != 0 : true) &&
           "prepare_input: word_size can't be set as zero");
    
    input = std::regex_replace(input, std::regex("[éêèëÉÈÊË]"), "E");
    input = std::regex_replace(input, std::regex("[àâÀÂ]"),     "A");
    input = std::regex_replace(input, std::regex("[ûùÛÙ]"),     "U");
    input = std::regex_replace(input, std::regex("[çÇ]"),       "C");
    input = std::regex_replace(input, std::regex("[œŒ]"),       "OE");
    input = std::regex_replace(input, std::regex("[^A-Za-z ]"), "");

    if (case_mode == Case::upper)
        for (auto &c: input) c = toupper(c);
    else // case_mode == Case::lower
        for (auto &c: input) c = tolower(c);

    if (space_mode == Space::keep)
        return input;
    else
    {
        input.erase(std::remove(input.begin(), input.end(), ' '), input.end());

        if (space_mode == Space::word_size)
        {
            for (size_t i = word_size; i < input.length(); i += word_size + 1)
            {
                input.insert(input.begin() + i, ' ');
            }

        }

        return input;
    }
}

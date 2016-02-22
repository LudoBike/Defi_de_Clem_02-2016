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

    std::array<std::array<std::string, 2>, 6> const toChange = {
        {
            {"[éêèëÉÈÊË]", "E"},
            {"[àâÀÂ]",     "A"},
            {"[ûùÛÙ]",     "U"},
            {"[çÇ]",       "C"},
            {"[œŒ]",       "OE"},
            {"[^A-Za-z ]", ""}
        }
    };

    std::regex rgx;
    rgx.imbue(std::locale("fr_FR.UTF8"));
    for (auto const &i: toChange)
    {
        rgx = i[0];
        input = std::regex_replace(input, rgx, i[1]);
    }
    
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

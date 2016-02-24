/*
    Défi de Clem de février

    Number of Cesar decrypting/encrypting

*/


#include <functions.hpp>
#include <cassert>
#include <cmath>


std::string cesar_nbr(std::string const &text, char const difference)
{
    assert(difference < 26 || difference > -26 && "cesar_nbr: difference out of range");

    std::string ret;
    for (auto const &c: text)
    {
        if (c == ' ')
            ret.push_back(' ');
        else if (c + difference > 'Z')
            ret.push_back(c - 26 + difference);
        else if (c + difference < 'A')
            ret.push_back(c + 26 + difference);
        else
            ret.push_back(c + difference);
    }

    return ret;
}

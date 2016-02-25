/*
    Défi de Clem de février

    Simple substitution function with already find alphabet implementation
    !!! You need to have already find the cipher alphabet for use this function !!!

*/


#include <functions.hpp>
#include <enum_edmode.hpp>
#include <cassert>
#include <string>


std::string simple_subst(std::string const &text,
                         std::string const &cipher_alphabet,
                         EDMode      const mode)
{
    assert(cipher_alphabet.size() == 26 &&
           "simple_subst: the cipther alphabet must 26 char long");
    
    std::string ret;
    for (char const &i: text)
    {
        if (i == ' ')
            ret.push_back(' ');
        else if (mode == EDMode::encrypt)
            ret.push_back(cipher_alphabet[i - 'A']);
        else 
            ret.push_back('A' + cipher_alphabet.find(i));
    }

    return ret;
}

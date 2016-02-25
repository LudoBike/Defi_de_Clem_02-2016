/*
    Défi de Clem de février

    Function for genere a cipher alphabet wich can be use by simple_subst from a key
    The function definition begin at the line 41

*/


#include <functions.hpp>
#include <array>


namespace
{
    
    std::string rm_duplicate(std::string const &str)
    {
        std::string ret;
        for (auto const &c: str)
        {
            if (ret.find(c) == ret.npos) // So c is not in ret
                ret.push_back(c);
        } 

        return ret;
    }

    std::string concatenates(std::array<std::string, 5> const &input)
    {
        std::string ret;
        for (auto const &tmp: input)
            ret.append(tmp);

        return ret;
    }
    
}


std::string gen_cipher_alphabet(std::string key)
{
    std::array<std::string, 5> ret{};
    key = rm_duplicate(key + "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    for (int i = 0; i < key.size(); i++)
    {
        ret.at(i % 5).push_back(key[i]);
    }

    return concatenates(ret);
}

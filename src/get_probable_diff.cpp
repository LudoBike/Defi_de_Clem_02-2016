/*
    Défi de Clem de février

    Function for get the probable Cesar's number

*/


#include <functions.hpp>
#include <utility>
#include <queue>


std::priority_queue<std::pair<unsigned int, char>>
    get_probable_diff(std::string const &text)
{
    std::priority_queue<std::pair<unsigned int, char>> probable_diff;

    for (char i = 'A'; i <= 'Z'; i++)
    {
        unsigned int nbr_i{};
        for(auto const &c: text)
        {
            if (c == i)
                nbr_i++;
        }
        
        probable_diff.push(std::pair<unsigned int, char>(nbr_i, i - 'E'));
    }
    
    // So the most present lettre might be 'E' so let calcule the difference
    return probable_diff;
}

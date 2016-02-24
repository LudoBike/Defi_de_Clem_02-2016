/*
    Défi de Clem de février

    Main file

*/


#include <iostream>
#include <cstdlib>
#include <functions.hpp>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;

int main()
{
    std::string input;

    #ifdef ZERO
    cout << "Enter the message: ";
    cin.imbue(std::locale("fr_FR.UTF8"));
    std::getline(cin, input);
    
    cout << input << endl;
    prepare_input(input, Case::upper, Space::word_size, 5);
    cout << input << endl;
    #endif

    input = "RENDSACESARCEQUIESTAMOI";
    input = cesar_nbr(input, 12);

    cout << input << endl;
    cout << cesar_nbr(input, -12) << endl;
        
    return 0;
}

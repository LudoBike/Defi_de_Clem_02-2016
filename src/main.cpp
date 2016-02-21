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

    cout << "Enter the message: ";
    std::getline(cin, input);
    
    cout << input << endl;
    prepare_input(input, Case::upper, Space::word_size, 5);
    cout << input << endl;
    
    return 0;
}

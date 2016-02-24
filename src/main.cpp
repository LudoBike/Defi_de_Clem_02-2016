/*
    Défi de Clem de février

    Main file

*/


#include <iostream>
#include <cstdlib>
#include <queue>
#include <utility>
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

    input = "SYKMA OTTGB GOZPG SGOYK AJKHU TNKAX GBKIY KYINB XKYOR RKYVK XJGOZ ZUAZK YJKRG SSKLG UTATH KGASG ZOTKR RKYIG YYGOK TZRKA XIUXJ KYKTG RRGOK TZJGT YRGSU TZGMT KKZRN GAZRK RUAVR KYSGT MKGOZ TORKY IGXKY YKYJK RKAXS GZXKT ORGVK AXJAR UAVXO KTTKR KYXKZ KTGOZ IZGOZ VGXGZ ORJKY INBXK YOTJV KTJGT ZKYBU ARGTZ ZUAZV XODRK MXGTJ GOXKZ RGROH KXZ";

    cout << input << endl;
    auto difference = get_probable_diff(input);
    while (not difference.empty())
    {
        cout << cesar_nbr(input, difference.top().second) << endl;
        difference.pop();
        
        unsigned int is_great{};
        cout << "Ce texte est-il correct ?\n 1) Oui\n 2) Non\n>> ";
        cin >> is_great;
        if (is_great == 1)
            break;
    }
    
    return 0;
}

/*
    Défi de Clem de février

    Main file

*/


#include <iostream>
#include <cstdlib>
#include <queue>
#include <utility>
#include <functions.hpp>
#include <enum_edmode.hpp>

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

    #ifdef ZERO
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
    #endif

    #ifdef ZERO
    input = "LAREF ORMEO UILAC HIENL ITNON";
    std::string cipher_alphabet = "GHSUKNMLTCQXVZJIDORYABWPEF";
    std::string encrypt_input   = simple_subst(input, cipher_alphabet, EDMode::encrypt);
    std::string decrypt_input   = simple_subst(encrypt_input, cipher_alphabet);

    cout << "Input string : " << input << endl;
    cout << "Encrypt string : " << encrypt_input << endl;
    cout << "Decrypt string : " << decrypt_input << endl;
    #endif

    std::string key = "DISMOITOUTBILOUTE";
    cout << gen_cipher_alphabet(key) << endl;
    
    return 0;
}

/*
    Défi de Clem de février

    Enum for chose the mode of function behind encrypt or decrypt

*/


#ifndef __ENUM_EDMODE_HPP__
#define __ENUM_EDMODE_HPP__


#include <cstdint>


enum class EDMode : uint8_t
{
    encrypt = 0,
    decrypt = 1
};


#endif // __ENUM_EDMODE_HPP__

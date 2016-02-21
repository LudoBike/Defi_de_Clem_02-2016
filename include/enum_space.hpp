/*
    Défi de Clem de février

    Enum for give what to do with space to prepare_input()

*/


#ifndef __ENUM_SPACE_HPP__
#define __ENUM_SPACE_HPP__

#include <cstdint>

enum class Space : uint8_t
{
    keep      = 0,
    remove    = 1,
    word_size = 2
};


#endif // __ENUM_SPACE_HPP__

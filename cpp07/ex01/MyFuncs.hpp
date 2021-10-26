#ifndef MYFUNCS_HPP
#define MYFUNCS_HPP

#include <string>
#include <iostream>

template <typename TFunc>
void    print( TFunc val ) {
    std::cout << val << std::endl;
}

template <typename TIterArr, typename TIterArrLen>
void    iter( TIterArr *array, TIterArrLen len, void (* func)(TIterArr)) {
    TIterArrLen i = 0;
    while (i < len) {
        func(array[i]);
        ++i;
    }
}

#endif
#ifndef MYFUNCS_HPP
#define MYFUNCS_HPP

#include <string>
#include <iostream>

template <typename TSwap>
void    swap( TSwap &a, TSwap &b ) {
    TSwap buff;

    buff = a;
    a = b;
    b = buff;
}

template <typename TMin>
TMin    min( TMin &a, TMin &b ) {
    if (a < b)
        return a;
    else
        return b;
}

template <typename TMax>
TMax    max( TMax &a, TMax &b ) {
    if (a > b)
        return a;
    else
        return b;
}

#endif
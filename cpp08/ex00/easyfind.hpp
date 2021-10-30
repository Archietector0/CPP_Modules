#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <string>


template <typename T>
typename T :: iterator easyfind( T &array, int number ) {
    typename T :: iterator i;

    i = std::find( array.begin(), array.end(), number );
    if (i == array.end())
        throw std::string("Warning: Element is not found!\n----------------------------------");
    return i;
}




#endif

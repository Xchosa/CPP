
#include "Fixed.hpp"

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <limits>

#include <vector>
#include <algorithm>
#include <cmath> 


int main( ) 
{
    Fixed a;    // 0
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

}
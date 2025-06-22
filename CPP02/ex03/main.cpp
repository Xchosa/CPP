
#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath> 
#include <iostream>


int main()
{
    Point const a = Point(1 ,1);
    Point const b = Point(2, 3);
    Point const c = Point (3, 1);

    Point const check = Point(1.1,  1.2);
    if(bsp(a, b, c, check) == true)
    {
        std::cout << "check Point"  << " is insight " << "a b and c"<< std::endl;
    }
    else 
        std::cout << "check is outside of the triangle" << std::endl;
}

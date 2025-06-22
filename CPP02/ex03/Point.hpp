#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include <cmath> 
#include "Fixed.hpp"

class Point
{
    private:
    const Fixed x;
    const Fixed y;
    

    public:

    Point();
    Point(const float value_a, const float value_b);
    Point(const Point& object);
    Point& operator=(const Point& Object);
    ~Point();
    int get_X() const;
    int get_Y() const;
    
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

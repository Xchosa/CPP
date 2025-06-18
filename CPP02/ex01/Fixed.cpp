

#include "Fixed.hpp"


Fixed::Fixed(){
     std::cout << "Default constructor called" << std::endl;
     this->fixed_point_Nbr= 0; 
     
}; 

// convert to fixed-point values -> init to 8;
//  Shift bits left by 8 to convert to fixed point
//  '<<' now as bitshift operator '8' positions
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_Nbr = value << this->fraction_bit;
};

//converts float to fixed-point value(int)
// dezimalstellen werden gerundet
// 1 = 0000 0001 (after bitshift 1<<8)-> 256 -> 0001 0000 0000
// 1,5 *256 = 384 (binary) 0000 0001 1000 0000
// convertig back 384/256 = 1,5
Fixed::Fixed(const float float_value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_Nbr = roundf(float_value *(1 << this->fraction_bit));
};

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point_Nbr = other.fixed_point_Nbr;

};

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;\
    if(this != &other)
    {
        this->fixed_point_Nbr = other.fixed_point_Nbr;
        // this->fixed_point_Nbr = other.getRawBits();
    }
    return *this;
};

int Fixed::getRawBits(void) const
{
    return(this->fixed_point_Nbr);
};

 void Fixed::setRawBits (int const raw)
 {
    this->fixed_point_Nbr = raw;
 };



// 384 becomes 384.0 (float)
//  shifted left bei 8 zeros -> 1 becomes 256 (Fraction part is 8 bits long)
// smaller Fraction part -> more space for integer part (32 bits so 32 0 and 1)
float Fixed::toFloat( void ) const{
    float value = (float)this->fixed_point_Nbr; 
    float dominator = (1 << this->fraction_bit);
    return value/dominator;
};


// fixed point nbr 
int Fixed::toInt(void) const {
    // std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    int value = this->fixed_point_Nbr;
    return value >> this->fraction_bit;
};

// friend function
std::ostream& operator<<(std::ostream& output_obj, const Fixed&object_fixed)
{
    output_obj << object_fixed.toFloat();
    return(output_obj);
}

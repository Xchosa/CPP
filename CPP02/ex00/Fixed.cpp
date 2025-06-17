

#include "Fixed.hpp"


// Fixed a
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fp_Nbr = 0; // clearify working with member variable 

}


// Fixed b(a)
Fixed::Fixed(const Fixed& other) // pass by reference
{
        std::cout << "Copy constructor called" << std::endl;
        this->fp_Nbr = other.fp_Nbr; // cpy raw bits intho other object  
}

//Copy assignment operator called
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->fp_Nbr = other.fp_Nbr;
    }
    return (*this);
}

Fixed::~Fixed(){
        std::cout << "Destructor called" << std::endl;
    };

int getRawBits(void) const 
{
    // returns the raw value of the fixed-point value
    return 
};


void setRawBits(int const raw)
{
 //sets the raw value of the fixed-point number

};




// Fixed::Fixed(int value) : fp_Nbr(fp_Nbr)
// {
//     std::cout << "Parameterized constructor called" << std::endl;

// }
#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "default construtor called\n";
    this->x = 0;
}

Fixed::Fixed(Fixed const &obj)
{
    std::cout << "copy construtor called\n";
    *this = obj;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &obj)
        this->x = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "destrutor called\n";
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return(this->x);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->x = raw;
}

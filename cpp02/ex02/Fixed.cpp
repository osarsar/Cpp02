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
    return(this->x);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->x = raw;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    this->x = (value * 256);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    this->x = roundf(value * 256);
}

float   Fixed::toFloat(void) const
{
    return ((float)x / 256);
}

int     Fixed::toInt(void) const
{
    return (x / 256);
}

std::ostream& operator<<(std::ostream &x, Fixed const &obj)
{
    x << obj.toFloat();
    return (x);
}

bool Fixed::operator>(Fixed const &obj) const
{
    return (this->x > obj.getRawBits());
}

bool Fixed::operator<(Fixed const &obj) const
{
    return (this->x < obj.getRawBits());
}

bool Fixed::operator>=(Fixed const &obj) const
{
    return (this->x >= obj.getRawBits());
}

bool Fixed::operator<=(Fixed const &obj) const
{
    return (this->x <= obj.getRawBits());
}

bool Fixed::operator==(Fixed const &obj) const
{
    return (this->x == obj.getRawBits());
}

bool Fixed::operator!=(Fixed const &obj) const
{
    return (this->x != obj.getRawBits());
}

Fixed Fixed::operator+(Fixed const &obj) const
{
    return (this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj) const
{
    return (this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj) const
{
    return (this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj) const
{
    return (this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++(void)
{
    ++this->x;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);

    copy.x = this->x++;
    return(copy);
}

Fixed& Fixed::operator--(void)
{
    --this->x;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed copy(*this);

    copy.x = this->x--;
    return (copy);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}
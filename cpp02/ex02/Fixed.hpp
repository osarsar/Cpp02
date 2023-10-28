#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int x;
        static const int c = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(Fixed const &obj);
        Fixed &operator=(Fixed const &obj);

        int getRawBits(void)const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator>(Fixed const &obj) const;
        bool operator<(Fixed const &obj) const;
        bool operator<=(Fixed const &obj) const;
        bool operator>=(Fixed const &obj) const;
        bool operator==(Fixed const &obj) const;
        bool operator!=(Fixed const &obj) const;

        Fixed operator+(Fixed const &obj) const;
        Fixed operator-(Fixed const &obj) const;
        Fixed operator*(Fixed const &obj) const;
        Fixed operator/(Fixed const &obj) const;

        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
};
std::ostream& operator<<(std::ostream  &x, Fixed const &obj);
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
};

std::ostream& operator<<(std::ostream  &x, Fixed const &obj);
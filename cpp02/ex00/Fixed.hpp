#pragma once

#include <iostream>

class Fixed
{
    private:
        int x;
        static const int c = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &obj);
        Fixed &operator=(Fixed const &obj);

        int getRawBits(void)const;
        void setRawBits(int const raw);

};

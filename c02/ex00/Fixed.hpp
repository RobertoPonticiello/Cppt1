#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class Fixed
{
    private:
    int num;
    static const int num_fb = 8;

    public:
    Fixed( void );
    Fixed & operator=(Fixed const &other); //boh
    Fixed(const Fixed &other);
	~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
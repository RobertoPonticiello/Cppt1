#include "Fixed.hpp"

Fixed::Fixed()
{
    this->num = 0;
}

Fixed & Fixed::operator=(const Fixed &other)
{
	this->num = other.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const &other)
{
    this-> num = other.getRawBits();
}

Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const
{
    return (this->num);
}

void Fixed::setRawBits( int const raw )
{
    this->num = (int)raw;
}
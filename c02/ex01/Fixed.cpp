#include "Fixed.hpp"

Fixed::Fixed()
{
    this->num = 0;
}

Fixed::Fixed(const int n)
{
    this->num = n << this->num_fb;
}

Fixed::Fixed(const float n)
{
    this-> num = (int)roundf(n * (1 << this->num_fb));
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

float Fixed::toFloat( void ) const
{
    return ((float)this->num / (1 << this->num_fb));
}

int Fixed::toInt( void ) const
{
    return(this->num >> this->num_fb);
}

std::ostream & operator<<(std::ostream & o, Fixed const & input)
{
	o << input.toFloat();
	return (o);
}
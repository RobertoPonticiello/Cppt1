#ifndef Fixed_HPP
#define Fixed_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
    int num;
    static const int num_fb = 8;

    public:
    Fixed( void );
    Fixed( const int n);
    Fixed( const float n);
    Fixed & operator=(Fixed const &other); //boh
    Fixed(const Fixed &other);
	~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & input);

#endif
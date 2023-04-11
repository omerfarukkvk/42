#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	value;
		static const int	fractionsBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &oth);
		Fixed &operator=(const Fixed &oth);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		static const int fractionsBits = 8;
		int value;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &oth);
		//Fixed &operator=(const Fixed &oth);
		Fixed(const int num);
		//Fixed(const float num);
		//int getRawBits(void) const;
		//void setRawBits(int const raw);
		//float toFloat( void ) const;
		//int toInt( void ) const;
};

#endif
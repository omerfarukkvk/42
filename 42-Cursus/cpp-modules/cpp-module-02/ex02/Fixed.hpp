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
		Fixed &operator=(const Fixed &oth);
		bool operator>(const Fixed &oth);
		bool operator<(const Fixed &oth);
		bool operator>=(const Fixed &oth);
		bool operator<=(const Fixed &oth);
		bool operator==(const Fixed &oth);
		bool operator!=(const Fixed &oth);
		Fixed operator+(const Fixed &oth);
		Fixed operator-(const Fixed &oth);
		Fixed operator*(const Fixed &oth);
		Fixed operator/(const Fixed &oth);
		Fixed operator++(int);
		Fixed &operator++();
		Fixed operator--(int);
		Fixed &operator--();
		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed &min(const Fixed &f1, const Fixed &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed &max(const Fixed &f1, const Fixed &f2);
		Fixed(const int num);
		Fixed(const float num);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
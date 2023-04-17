#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &oth)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = oth;
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Int constructor called" << std::endl;
	value = intVal * pow(2, fractionsBits);
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(floatVal * pow(2, fractionsBits));
}

Fixed &Fixed::operator=(const Fixed &oth)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->value = oth.value;
	return (*this);
}

bool Fixed::operator>(const Fixed &oth)
{
	return (this->value > oth.value);
}

bool Fixed::operator<(const Fixed &oth)
{
	return (this->value < oth.value);
}

bool Fixed::operator>=(const Fixed &oth)
{
	return (this->value >= oth.value);
}

bool Fixed::operator<=(const Fixed &oth)
{
	return (this->value <= oth.value);
}

bool Fixed::operator==(const Fixed &oth)
{
	return (this->value == oth.value);
}

bool Fixed::operator!=(const Fixed &oth)
{
	return (this->value != oth.value);
}

Fixed Fixed::operator+(const Fixed &oth)
{
	Fixed rtn(this->toFloat() + oth.toFloat());
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &oth)
{
	Fixed rtn(this->toFloat() - oth.toFloat());
	return (rtn);
}

Fixed Fixed::operator*(const Fixed &oth)
{
	Fixed rtn(this->toFloat() * oth.toFloat());
	return (rtn);
}

Fixed Fixed::operator/(const Fixed &oth)
{
	Fixed rtn(this->toFloat() / oth.toFloat());
	return (rtn);
}

Fixed Fixed::operator++(int)
{
	Fixed rtn = *this;
	this->value++;
	return (rtn);
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed rtn = *this;
	this->value--;
	return (rtn);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.value < f2.value)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.value > f2.value)
		return (f1);
	return (f2);
}

int Fixed::toInt() const
{
	return (value / pow(2, fractionsBits));
}

float Fixed::toFloat() const
{
	return (float(value) / pow(2, fractionsBits));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}
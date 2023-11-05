#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
    private:
        ScalarConverter();
    public:
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &oth);
        ScalarConverter &operator=(const ScalarConverter &oth);
        static void convert(std::string const &value);
        static bool checkValue(std::string const &value);
        static void printChar(std::string const &value);
        static void printInt(std::string const &value);
        static void printFloat(std::string const &value);
        static void printDouble(std::string const &value);
};

#endif

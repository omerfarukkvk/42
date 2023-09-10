#include "ScalarConverter.hpp"
#include <cctype>
#include <iostream>
#include <string>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &oth)
{
    *this = oth;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &oth)
{
    (void)oth;
    return *this;
}

void ScalarConverter::convert(std::string const &value)
{
    printChar(value);
    printInt(value);
}

bool ScalarConverter::checkValue(std::string const &value)
{
    std::string arr[6] = {
        "nan",
        "+inf",
        "-inf",
        "nanf",
        "+inff",
        "-inff"
    };

    for (int i = 0; i < 6; i++)
        if (value == arr[i])
            return true;
    return false;
}

void ScalarConverter::printChar(std::string const &value)
{
    int c = 0;

    if (checkValue(value))
        std::cout << "char: impossible" << std::endl;
    else
    {
        try
        {
            c = std::stoi(value);
        }
        catch(std::exception &e)
        {
            if (value.length() == 1 && isprint(value[0]))
                c = value[0];
        }
        if (isprint(c))
            std::cout << "char: " << "'" << static_cast<char>(c) << "'" << std::endl;
        else
            std::cout << "char: not printable" << std::endl;
    }
}

void ScalarConverter::printInt(const std::string &value)
{
    int n = 0;

    if (checkValue(value))
        std::cout << "int: impossible" << std::endl;
    else
    {
        try
        {
            n = std::stoi(value);
        }
        catch (std::exception &e)
        {
            if (value.length() == 1 && isprint(value[0]))
            {
                std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
                return;
            }
            else
                std::cout << "int: impossible" << std::endl;
        }
        std::cout << "int: " << n << std::endl;
    }
}





#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
        ScalarConverter::convert(av[1]);
    else
        std::cout << "Enter \"./Convert [value]\"" << std::endl;
    return 0;
}

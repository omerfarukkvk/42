#include "easyfind.hpp"

int main()
{
    std::vector<int> container;

    for(int i = 1; i <= 5; i++)
        container.push_back(i);

    std::cout << "vector values: ";
    for(std::vector<int>::iterator i = container.begin(); i != container.end(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    try
    {
        std::cout << "easyfind func output: " << *easyfind(container, 2) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error" << std::endl;
    }
    try
    {
        std::cout << *easyfind(container, 7) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "This value cannot find" << std::endl;
    }

}

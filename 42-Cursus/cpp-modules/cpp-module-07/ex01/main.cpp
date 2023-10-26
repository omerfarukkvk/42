#include "iter.hpp"

template<typename T>
void iter(T *array, int length, void f(T const &))
{
    for(int i = 0; i < length; i++)
        f(array[i]);
}

template<typename T>
void print(T const &val)
{
    std::cout << val << std::endl;
}

int main(void)
{
    int arr1[] = {0,1,2,3,4,5};
    std::string arr2[] = {"zero", "one", "two", "three", "four", "five"};

    iter(arr1, 6, print);
    std::cout << "------------------------" << std::endl;
    iter(arr2, 6, print);

    return 0;
}

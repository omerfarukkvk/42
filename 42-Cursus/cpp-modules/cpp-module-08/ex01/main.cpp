#include "Span.hpp"

int main()
{
    Span v1(3);

    v1.addNumber(3);
    v1.addNumber(5);
    v1.addNumber(19);
    v1.addNumber(1);

    std::cout << "v1 shortest " << v1.shortestSpan() << std::endl;
    std::cout << "v1 longest " << v1.longestSpan() << std::endl;

    std::cout << "///////////////////////////////////////////////////////////" << std::endl;

    Span v2(10000);
    std::vector<int> v3;
    for(int i = 1; i<= 10000; i++)
        v3.push_back(i);
    
    v2.addNumbers(v3.begin(), v3.end());

    std::cout << "v2 shortest " << v2.shortestSpan() << std::endl;
    std::cout << "v2 longest " << v2.longestSpan() << std::endl;
        
    return 0;
}

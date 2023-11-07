#include "Span.hpp"

int main()
{
    Span span(2);

    span.addNumber(1);
    span.addNumber(2);

    std::cout<<span<<std::endl;
    span.addNumber(3);
}

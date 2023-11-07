#include "Span.hpp"
#include <stdexcept>
#include <vector>

Span::Span()
{
    this->N = 0;
    this->v = std::vector<int>();
}

Span::Span(unsigned int N)
{
    this->N = N;
    this->v = std::vector<int>();
}

Span::~Span()
{
}

Span::Span(const Span &oth)
{
    *this = oth;
}

Span &Span::operator=(const Span &oth)
{
    this->v = oth.v;
    this->N = oth.N;
    return *this;
}

void Span::addNumber(int n)
{
    try
    {
        if (this->v.size() == this->N)
            throw std::runtime_error("Span is full");
        this->v.push_back(n);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

#include "Span.hpp"

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

int Span::shortestSpan()
{
    try
    {
        if(this->v.size() <= 1)
            throw std::runtime_error("Span size too low");
    }
    catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        return 0;
    }
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for(unsigned int i = 1; i < (v.size() - 1); i++)
    {
        if (v[i + 1] - v[i] < min)
            min = v[i + 1] - v[i];
    }
    return min;
}

int Span::longestSpan()
{
    try
    {
        if(this->v.size() <= 1)
            throw std::runtime_error("Span size too low");
    }
    catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        return 0;
    }
    std::sort(this->v.begin(), this->v.end());
    return v.back() - v.front();
}

void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if (end < start)
        return ;
    for (std::vector<int>::iterator i = start; i != end; i++)
		addNumber(*i);
}
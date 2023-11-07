#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span{
    private:
        std::vector<int> v;
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &oth);
        Span &operator=(const Span &oth);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

#endif

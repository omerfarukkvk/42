#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
private:
	std::stack<double> numbers;
public:
	RPN();
	~RPN();
	RPN(const RPN &var);
	RPN &operator=(const RPN &var);
	void calculate(std::string input);
		
};

#endif
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private:
public:
	RPN();
	int calculate_RPM(std::string args);
	int calculator(std::stack<int> &polish_stack, char opr);
	int is_operator(char com);
	int is_arg_valid(std::string arg);
	~RPN();
};

#endif
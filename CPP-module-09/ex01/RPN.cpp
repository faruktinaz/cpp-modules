#include "RPN.hpp"

RPN::RPN(){}

int RPN::is_operator(char com)
{
	if (com == '/' || com == '*' || com == '-' || com == '+')
		return 1;
	return 0;
}

int RPN::calculator(std::stack<int> &polish_stack, char opr)
{
	int num;

	if (polish_stack.size() < 2)
		return 0;
	else if (opr == '/')
	{
		num = polish_stack.top();
		polish_stack.pop();
		num = polish_stack.top() / num;
		polish_stack.pop();
		polish_stack.push(num);
	}
	else if(opr == '*')
	{
		num = polish_stack.top();
		polish_stack.pop();
		num = num * polish_stack.top();
		polish_stack.pop();
		polish_stack.push(num);
	}
	else if(opr == '-')
	{
		num = polish_stack.top();
		polish_stack.pop();
		num = polish_stack.top() - num;
		polish_stack.pop();
		polish_stack.push(num);
	}
	else if(opr == '+')
	{
		num = polish_stack.top();
		polish_stack.pop();
		num = num + polish_stack.top();
		polish_stack.pop();
		polish_stack.push(num);
	}

	return 1;
}

int RPN::calculate_RPM(std::string args)
{
	int i = -1;
	std::stack<int> polish_stack;

	while (args[++i])
	{
		if (args[i] == ' ')
			continue;
		else if (is_operator(args[i]))
		{
			if (!calculator(polish_stack, args[i]))
				return 0;
		}
		else if (isdigit(args[i]))
		{
			int digit = args[i] - '0';
			polish_stack.push(digit);
		}
	}
	if (polish_stack.size() != 1)
		return 0;
	else
		std::cout << polish_stack.top() << std::endl;
	return 1;
}

int RPN::is_arg_valid(std::string arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (is_operator(arg[i]) || isdigit(arg[i]) || arg[i] == ' ')
			continue;
		else
			return 0;
	}
	return 1;
}


RPN::~RPN(){}
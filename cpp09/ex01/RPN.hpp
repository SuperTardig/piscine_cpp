
#pragma once

#include <stack>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cerr;


class RPN
{
private:
	RPN();
	RPN(const RPN &src);
	RPN &operator=(const RPN &src);

	std::stack<int> nb;
	string input;

	void validate(string str);
public:
	~RPN();
	RPN(string input);
};

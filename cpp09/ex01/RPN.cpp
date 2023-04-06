
#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN() {}

RPN::RPN(const RPN &src) { *this = src; }

RPN &RPN::operator=(const RPN &src) { *this = src; }

RPN::RPN(string str) {
	if (validate(str))
		input = str;
}

void	RPN::validate(string str){
	if (str.find_first_not_of(" 1234567890+-*/") != str.npos)
		cerr << "Error: unauthorized char in input" << endl;
}

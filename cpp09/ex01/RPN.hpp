
#pragma once

#include <iostream>
#include <stack>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class RPN {
private:
  RPN();
  RPN(const RPN &src);
  RPN &operator=(const RPN &src);

  std::stack<int> stack;
  string input;

  bool validate(const string &str);
  void do_op(const char &c);
  void rpn();

public:
  ~RPN();
  RPN(const string &input);
};

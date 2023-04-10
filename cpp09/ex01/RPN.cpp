
#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN() {}

RPN::RPN(const RPN &src) { *this = src; }

RPN &RPN::operator=(const RPN &src) {
  *this = src;
  return *this;
}

RPN::RPN(const string &str) {
  if (validate(str))
    input = str;
  else
    exit(EXIT_FAILURE);
  rpn();
}

bool RPN::validate(const string &str) {
  string set("0123456789");
  if (str.empty())
    return false;
  if (str.find_first_not_of(" 1234567890+-*/") != str.npos) {
    cerr << "Error: unauthorized char in input" << endl;
    return false;
  }
  for (size_t i = 0; i < str.size(); i++) {
    if (str.at(i) == ' ')
      continue;
    else if (str.at(i) == '-' && (i + 1 != str.size() || str[i + 1] == ' ') &&
             set.find(str.at(i + 1)) != set.npos)
      continue;
    else if (i + 1 != str.size() && str.at(i + 1) != ' ') {
      cerr << "Error: wrong format" << endl;
      return false;
    }
  }
  return true;
}

void RPN::do_op(const char &c) {
  int nb1 = stack.top();
  stack.pop();
  int nb2 = stack.top();
  stack.pop();

  switch (c) {
  case '+':
    stack.push(nb2 + nb1);
    break;
  case '-':
    stack.push(nb2 - nb1);
    break;
  case '*':
    stack.push(nb2 * nb1);
    break;
  case '/':
    stack.push(nb2 / nb1);
    break;
  }
}

void RPN::rpn() {
  string op("+-*/"), nb("0123456789");

  for (size_t i = 0; i < input.size(); i++) {
    if (input.at(i) == '-' && i + 1 != input.size() &&
        nb.find(input.at(i + 1)) != nb.npos) {
      stack.push(std::stoi(input.substr(i, 2)));
      i++;
    } else if (nb.find(input.at(i)) != nb.npos)
      stack.push(static_cast<int>(input.at(i)) - 48);
    else if (op.find(input.at(i)) != op.npos) {
      if (stack.size() > 1)
        do_op(input.at(i));
      else {
        cerr << "Error: There isn't enough number in the stack to calculate"
             << endl;
        exit(EXIT_FAILURE);
      }
    }
  }
  cout << stack.top() << endl;
}

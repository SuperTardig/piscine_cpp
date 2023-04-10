
#pragma once

#include <array>
#include <fstream>
#include <iostream>
#include <list>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class BitcoinExchange {
private:
  std::list<std::pair<int, float>> csv;

  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &src);
  BitcoinExchange &operator=(const BitcoinExchange &init);

  bool validate_number(const float &value);
  bool validate_date(const int &year, const int &month, const int &day);
  bool leap_year(const int &year);
  void convert_rate(const string &input);

public:
  BitcoinExchange(const string &input);
  ~BitcoinExchange();
};

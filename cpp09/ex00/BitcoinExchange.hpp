
#pragma once

#include <fstream>
#include <iostream>
#include <list>
#include <array>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class BitcoinExchange {
private:

  std::list<std::pair<int, float> > csv;

/*   std::list<string> csv_date;
  std::list<float> csv_rate;

  std::list<string> input_date;
  std::list<float> input_nb; */

  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &src);
  BitcoinExchange &operator=(const BitcoinExchange &init);

	bool validate_number(float value);
	bool validate_date(int year, int month, int day);
	bool leap_year(int year);
  void convert_rate(string input);

public:
  BitcoinExchange(string input);
  ~BitcoinExchange();
};

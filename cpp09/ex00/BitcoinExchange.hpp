
#pragma once

#include <list>
#include <string>
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;

class BitcoinExchange
{
private:
	std::list<string> 	csv_date;
	std:list<int>		csv_rate;

	std::list<string> input_date;
	std::list<int>		input_nb;

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
public:
	BitcoinExchange(string input);
	~BitcoinExchange();
};

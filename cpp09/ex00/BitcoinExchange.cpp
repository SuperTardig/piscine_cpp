
#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {}

BitcoinExchange::BitcoinExchange(string input) {
  string hold;
  std::ifstream file(input);

  if (!file.is_open()) {
    cout << "Error: The file wasn't able to be opened" << endl;
    exit(EXIT_FAILURE);
  }
	for (int i = 0; file && !file.eof() ; i++) {
    std::getline(file, hold);
	input_date.push_back = hold.substr(0, hold.find('|', 0) - 1);
	input_nb.push_back = hold.substr(hold.find('|', 0), hold.size() - hold.find('|', 0) - 1);
  }
}

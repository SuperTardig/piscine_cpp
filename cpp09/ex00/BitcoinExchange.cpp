
#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &init) {
  *this = init;
  return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) { *this = src; }

BitcoinExchange::BitcoinExchange(const string &input) {
  std::ifstream file("data.csv");
  string date, hold;
  float rate;
  int year, month, day;
  int new_date;

  if (!file.is_open()) {
    cerr << "Error: The file wasn't able to be opened" << endl;
    exit(EXIT_FAILURE);
  }
  while (file && !file.eof()) {
    std::getline(file, hold);
    if (hold.empty())
      continue;
    ;
    if (hold == "date,exchange_rate")
      continue;
    date = hold.substr(0, hold.find(',', 0));
    rate = stof(hold.substr(hold.find(',', 0) + 1, hold.size()));
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
    new_date = (year * 10000) + (month * 100) + day;
    csv.push_back(std::make_pair(new_date, rate));
  }
  convert_rate(input);
}

bool BitcoinExchange::leap_year(const int &year) {
  if (year % 400 == 0 && year % 100 == 0)
    return false;
  if (year % 100 != 0 && year % 4 == 0)
    return false;
  return true;
}

bool BitcoinExchange::validate_date(const int &year, const int &month,
                                    const int &day) {
  if (month > 12 || day > 31 || day < 1 || month < 1) {
    cerr << "Error: date is wrong" << endl;
    return true;
  }
  if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
    cerr << "Error: date is wrong" << endl;
    return true;
  }
  if (month == 2 && day > 29) {
    cerr << "Error: date is wrong" << endl;
    return true;
  }
  if (leap_year(year) && day == 29 && month == 2) {
    cerr << "Error: date is wrong" << endl;
    return true;
  }
  if (year < 2009 || (year == 2009 && month == 1 && day == 1)) {
    cerr << "Error: date predates bitcoin" << endl;
    return true;
  }
  return false;
}

bool BitcoinExchange::validate_number(const float &value) {
  if (value > 1000) {
    cerr << "Error: too large a number" << endl;
    return (true);
  }
  if (value < 0) {
    cerr << "Error: too small a number" << endl;
    return (true);
  }
  return false;
}

void BitcoinExchange::convert_rate(const string &input) {
  std::ifstream file(input);
  string hold, date, nb;
  int year, month, day, new_date;
  long double value;

  if (!file.is_open()) {
    cerr << "Error: The file wasn't able to be opened" << endl;
    exit(EXIT_FAILURE);
  }
  while (file && !file.eof()) {
    std::getline(file, hold);
    if (hold.empty())
      break;
    if (hold == "date | value")
      continue;

    if (hold.find('|', 0) != hold.npos) {
      nb = hold.substr(hold.find('|', 0) + 2, hold.size());
      if (!nb.empty()) {
        if (nb.find(',', 0) != nb.npos)
          nb.replace(nb.find(',', 0), 1, ".");
        try {
          if (nb.find_first_not_of("0123456789.", 0) != nb.npos) {
            cerr << "Error: wrong character => " << nb << endl;
            continue;
          }
          value = std::stod(nb);
          date = hold.substr(0, hold.find('|', 0) - 1);
        } catch (const std::exception &e) {
          cerr << "Error: not a float or an int" << endl;
          continue;
        }

      } else {
        cerr << "Error: Wrong format => " << hold << endl;
        continue;
      }
    } else {
      cerr << "Error: Wrong format => " << hold << endl;
      continue;
    }
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
    if (validate_number(value) || validate_date(year, month, day))
      continue;
    new_date = (year * 10000) + (month * 100) + day;
    if (new_date < csv.front().first) {
      cerr << "Error: the date predates bitcoin" << endl;
      continue;
    }
    if (new_date > csv.back().first) {
      cerr << "Error: the date is in the futur" << endl;
      continue;
    }

    std::list<std::pair<int, float> >::iterator hold = csv.begin();
    for (std::list<std::pair<int, float> >::iterator it = ++csv.begin();
         it != csv.end(); it++) {
      if (new_date == hold->first) {
        cout << date << " => " << value << " = " << std::fixed
             << std::setprecision(2)
             << (long double)value * (long double)hold->second << endl;
        break;
      }
      if (new_date < it->first && new_date > hold->first) {
        cout << date << " => " << value << " = " << std::fixed
             << std::setprecision(2)
             << (long double)value * (long double)hold->second << endl;
        break;
      }
      hold++;
    }
  }
  file.close();
}

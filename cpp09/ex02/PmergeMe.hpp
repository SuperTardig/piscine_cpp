
#pragma once

#include <chrono>
#include <map>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class PmergeMe {
private:
  std::vector<int> vec;
  std::map<int, int> map;

  std::chrono::ime_point vec_time_start;
  std::chrono::time_point vec_time_end;
  std::chrono::time_point map_time_start;
  std::chrono::time_point map_time_end;

  PmergeMe();
  PmergeMe(const PmergeMe &src);
  PmergeMe &operator=(const PmergeMe &src);

  void start(const string *input, const int &size);

  template <typename T>
  void print(const T *input, const int &size, const string &str);
  void fill_cont(const string *input, const int &size);

public:
  PmergeMe(const string *input, const int &size);
  ~PmergeMe();
};

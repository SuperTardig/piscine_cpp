
#pragma once

#include <chrono>
#include <map>
#include <string>
#include <vector>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class PmergeMe {
private:
  std::vector<int> vec;
  std::map<int, int> map;

  std::chrono::high_resolution_clock::time_point vec_time_start;
  std::chrono::high_resolution_clock::time_point vec_time_end;
  std::chrono::duration<double> vec_time_total;

  std::chrono::high_resolution_clock::time_point map_time_start;
  std::chrono::high_resolution_clock::time_point map_time_end;
  std::chrono::duration<double> map_time_total;

  PmergeMe();
  PmergeMe(const PmergeMe &src);
  PmergeMe &operator=(const PmergeMe &src);

  void start(const string *input, const int &size);

 // template <typename iterator> void insertion(iterator begin, iterator end);
 // template <typename iterator> void merge(iterator begin, iterator end);
template <typename container> void merge_insertion(container &cont);

  template <typename T>
  void print(const T *input, const int &size, const string &str);
  void fill_cont(const string *input, const int &size);

public:
  PmergeMe(const string *input, const int &size);
  ~PmergeMe();
};

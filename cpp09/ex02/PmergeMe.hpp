
#pragma once

#include <algorithm>
#include <chrono>
#include <deque>
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class PmergeMe {
private:
  std::vector<int> vec;
  std::deque<int> deque;

  std::chrono::high_resolution_clock::time_point vec_time_start;
  std::chrono::high_resolution_clock::time_point vec_time_end;
  std::chrono::duration<double> vec_time_total;

  std::chrono::high_resolution_clock::time_point deque_time_start;
  std::chrono::high_resolution_clock::time_point deque_time_end;
  std::chrono::duration<double> deque_time_total;

  PmergeMe();
  PmergeMe(const PmergeMe &src);
  PmergeMe &operator=(const PmergeMe &src);

  void start(const string *input, const int &size);
  template <typename T> void merge_insertion(T &v);

  template <typename T>
  void print(const T input, const int &size, const string &str);
  bool is_sorted();
  void fill_cont(const string *input, const int &size);

public:
  PmergeMe(const string *input, const int &size);
  ~PmergeMe();
};

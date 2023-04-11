
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src) { *this = src; }

PmergeMe &PmergeMe::operator=(const PmergeMe &src) {
  *this = src;
  return *this;
}

PmergeMe::PmergeMe(const string *input, const int &size) {
  long nb;

  for (int i = 0; i < size - 1; i++) {
    if (input[i].find_first_not_of("0123456789", 0) != input[i].npos) {
      cerr << "Error: unauthorized character present " << endl;
      exit(EXIT_FAILURE);
    }
    try {
      nb = std::stol(input[i]);
    } catch (const std::exception &e) {
      cerr << "Error: no conversion using stol" << endl;
      exit(EXIT_FAILURE);
    }
    if (nb > INT_MAX) {
      cerr << "Error: number is bigger than INT_MAX" << endl;
      exit(EXIT_FAILURE);
    }
  }
  start(input, size);
}

bool PmergeMe::is_sorted() {
  for (int i = 1; i < vec.size(); i++)
    if (vec[i - 1] > vec[i])
      return false;
  return true;
}

void PmergeMe::start(const string *input, const int &size) {
  fill_cont(input, size);
  print(vec, vec.size(), "Before with vector:");
  cout << endl;
  print(deque, deque.size(), "Before with deque:");
  cout << endl << endl;
  if (is_sorted() == false) {
    vec_time_start = std::chrono::high_resolution_clock::now();
    merge_insertion(vec);
    vec_time_end = std::chrono::high_resolution_clock::now();
    vec_time_total = std::chrono::duration_cast<std::chrono::duration<double> >(
        vec_time_end - vec_time_start);
    deque_time_start = std::chrono::high_resolution_clock::now();
    merge_insertion(deque);
    deque_time_end = std::chrono::high_resolution_clock::now();
    deque_time_total =
        std::chrono::duration_cast<std::chrono::duration<double> >(
            deque_time_end - deque_time_start);
  }
  print(vec, vec.size(), "After with vector:");
  cout << endl;
  print(deque, deque.size(), "After with deque:");
  cout << endl
       << endl
       << "Time to process a range of " << vec.size()
       << " elements with std::vector : " << vec_time_total.count() << " us"
       << endl;
  cout << "Time to process a range of " << deque.size()
       << " elements with std::deque : " << deque_time_total.count() << " us"
       << endl;
}

void PmergeMe::fill_cont(const string *input, const int &size) {

  for (int i = 0; i < size; i++) {
    vec_time_start = std::chrono::high_resolution_clock::now();
    vec.push_back(std::stoi(input[i]));
    vec_time_end = std::chrono::high_resolution_clock::now();
    vec_time_total = std::chrono::duration_cast<std::chrono::duration<double> >(
        vec_time_end - vec_time_start);
    deque_time_start = std::chrono::high_resolution_clock::now();
    deque.push_back(std::stoi(input[i]));
    deque_time_end = std::chrono::high_resolution_clock::now();
    deque_time_total =
        std::chrono::duration_cast<std::chrono::duration<double> >(
            deque_time_end - deque_time_start);
  }
}

template <typename T>
void PmergeMe::print(const T input, const int &size, const string &str) {
  cout << str;
  for (int i = 0; i < size; i++)
    cout << " " << input[i];
  cout << endl;
}
template <typename T>

void PmergeMe::merge_insertion(T &v) {
  if (v.size() <= 10) {
    int hold, j;
    for (int i = 1; i < v.size(); i++) {
      hold = v[i];
      j = i;
      while (--j >= 0 && v[j] > hold)
        v[j + 1] = v[j];
      v[j + 1] = hold;
    }
  } else {
    int mid = v.size() / 2;
    T right(v.begin(), v.begin() + mid), left(v.begin() + mid, v.end());
    merge_insertion(right);
    merge_insertion(left);
    int i = 0, j = 0, k = 0;
    while (i < right.size() && j < left.size()) {
      if (right[i] <= left[j])
        v[k++] = right[i++];
      else
        v[k++] = left[j++];
    }
    while (i < right.size())
      v[k++] = right[i++];
    while (j < left.size())
      v[k++] = left[j++];
  }
}
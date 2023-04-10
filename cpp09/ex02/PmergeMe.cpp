
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

  for (int i = 0; i < size; i++) {
    if (input[i].find_first_not_of("0123456789", 0) != input[i].npos) {
      cerr << "Error: unauthorized character present" << endl;
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

void PmergeMe::start(const string *input, const int &size){
	print(input, size, "Before:");
	vec_time_start = std::chrono::high_resolution_clock::now();
	fill_cont(vec, input, size);
	sort(vec);
	vec_time_end = std::chrono::high_resolution_clock::now();
	map_time_start = std::chrono::high_resolution_clock::now();
	fill_cont(map, input, size);
	sort(map);
	vec_time_end = std::chrono::high_resolution_clock::now();
}

void PmergeMe::fill_cont(const string *input, const int &size){ // changer ca pour pogner le temps que sa prends

	for (int i = 0; i < size; i++){
		vec.push_back(std::stoi(input[i]));
		map.insert(std::pair<int, int>(i + 1, std::stoi(input[i])));
	}
}

template <typename T> void PmergeMe::print(const T *input, const int &size, const string &str){
	cout << str;
	for (int i = 0; i < size; i++)
		cout << " " << input[i];
	cout << endl;
	
}
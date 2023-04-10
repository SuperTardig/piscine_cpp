
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
      cerr << "Error: unauthorized character present " << input[i] << endl;
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
	fill_cont(input, size);
	vec_time_start = std::chrono::high_resolution_clock::now();
	//merge_insertion(vec);
	vec_time_end = std::chrono::high_resolution_clock::now();
  vec_time_total = std::chrono::duration_cast<std::chrono::duration<double> >(vec_time_end - vec_time_start);
  map_time_start = std::chrono::high_resolution_clock::now();
	//merge_insertion(map);
	map_time_end = std::chrono::high_resolution_clock::now();
  map_time_total = std::chrono::duration_cast<std::chrono::duration<double> >(map_time_end - map_time_start);
  //print(vec, vec.size(), "After:");
  cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vec_time_total.count() << " us" << endl; 
  cout << "Time to process a range of " << map.size() << " elements with std::map : " << map_time_total.count() << " us" << endl; 
}

void PmergeMe::fill_cont(const string *input, const int &size){ // changer ca pour pogner le temps que sa prends

	for (int i = 0; i < size; i++){
    vec_time_start = std::chrono::high_resolution_clock::now();
		vec.push_back(std::stoi(input[i]));
    vec_time_end = std::chrono::high_resolution_clock::now();
    vec_time_total = std::chrono::duration_cast<std::chrono::duration<double> >(vec_time_end - vec_time_start);
    map_time_start = std::chrono::high_resolution_clock::now();
		map.insert(std::pair<int, int>(i + 1, std::stoi(input[i])));
    map_time_end = std::chrono::high_resolution_clock::now();
    map_time_total = std::chrono::duration_cast<std::chrono::duration<double> >(map_time_end - map_time_start);
	}
}

template <typename T> void PmergeMe::print(const T *input, const int &size, const string &str){
	cout << str;
	for (int i = 0; i < size; i++)
		cout << " " << input[i];
	cout << endl;
}


#include "PmergeMe.hpp"

int main(int ac, char **av){
	if (ac > 2)
		PmergeMe merge(&av[1], ac - 1);
	else
		cerr << "Error: at least two numbers required" << endl;
	return 0;
}
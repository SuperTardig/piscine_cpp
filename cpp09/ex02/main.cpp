
#include "PmergeMe.hpp"

int main(int ac, char **av){
	if (ac > 2){
		int size = sizeof(av) / sizeof(av[0]);
		string args[size];
		for (int i = 1; i < ac - 1; i++)
			args[i - 1] = string(av[i]);
		PmergeMe merge(args, ac - 1);
	}
	else
		cerr << "Error: at least two numbers required" << endl;
	return 0;
}
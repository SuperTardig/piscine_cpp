
#include "RPN.hpp"

int main(int ac, char **av){
	if (ac == 2)
		RPN poland(av[1]);
	else
		cout << "Usage: ./RPN input_formula" << endl;
	return 0;
}

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac == 2)
		BitcoinExchange btc(av[1]);
	else
		cerr << "Usage: ./btc input_file" << endl;
	return 0;
}
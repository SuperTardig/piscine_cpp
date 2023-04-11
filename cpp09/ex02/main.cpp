
#include "PmergeMe.hpp"

int main(int ac, char **av) {
  if (ac > 2) {
    string args[ac - 1];
    for (int i = 1; i < ac; i++)
      args[i - 1] = string(av[i]);
    PmergeMe merge(args, ac - 1);
  } else
    cerr << "Error: at least two numbers required" << endl;
  return 0;
}
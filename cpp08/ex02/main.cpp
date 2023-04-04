/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:02:00 by bperron           #+#    #+#             */
/*   Updated: 2023/04/04 08:07:22 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

using std::cout;
using std::endl;

/* int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
} */

/* int main()
{
	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator it = l.begin();
	std::list<int>::iterator ite = l.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(l);
	return 0;
} */

int main()
{
	MutantStack<char> mstack;
	std::stack<char> sstack;
	std::stack<char> vstack;
	MutantStack<char>::iterator it;;
	
	vstack.push('4');
	for(char c = 'a'; c <= 'z'; c++)
		mstack.push(c);
	cout << "what is in the mutant stack" << endl;
	for(it = mstack.begin(); it != mstack.end(); it++)
	{
		std::cout << *it << " in the stack" << std::endl;
	}
	cout << endl << "test 1" << endl;
	for(it = mstack.begin(); it != mstack.end(); it++)
	{
		if (*it == 'g')
			std::cout << *it << " was found!" << std::endl;
	}
	for(it = mstack.begin(); it != mstack.end(); it++)
	{
		if (*it == '0')
			std::cout << *it << " was found!" << std::endl;
	}
	cout << endl << "test 2" << endl;
	it = mstack.end() - 1;
	std::cout << *it << std::endl;
	std::cout << mstack.top() << std::endl;
	sstack = mstack;
	cout << endl << "test 3" << endl;
	std::cout << sstack.size() << std::endl;
	std::cout << mstack.size() << std::endl;
	cout << endl << "test 4" << endl;
	mstack.swap(vstack);
	it = mstack.begin();
	std::cout << *it << std::endl;
}
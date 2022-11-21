/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:00:46 by bperron           #+#    #+#             */
/*   Updated: 2022/11/09 08:07:16 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int a = 1;

Base *generate(void){
	Base *ptr;
	srand(time(0));
	a += rand() % 100 + 1;
	srand(a);
	int hold = rand() % 3 + 1;
	switch (hold){
	case 1:
		ptr = new A;
		break;
	case 2:
		ptr = new B;
		break;
	case 3:
		ptr = new C;
		break;
	default:
		break;
	}
	return ptr;
}

void identify(Base *p){
	cout << "identify with pointer" << endl;
	if (dynamic_cast<A*>(p))
		cout << "The type is A" << endl;
	if (dynamic_cast<B*>(p))
		cout << "The type is B" << endl;
	if (dynamic_cast<C*>(p))
		cout << "The type is C" << endl;
}

void identify(Base &p){
	cout << "identify with reference" << endl;
	try{
		A a = dynamic_cast<A&>(p);
		cout << "The type is A" << endl;
		return;
	}
	catch(const std::exception& e){}
	try{
		B b = dynamic_cast<B&>(p);
		cout << "The type is B" << endl;
		return;
	}
	catch(const std::exception& e){}
	try{
		C c = dynamic_cast<C&>(p);
		cout << "The type is C" << endl;
		return;
	}
	catch(const std::exception& e){}
	
}

int main(){
	Base *hold = NULL;
	
	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;
	
	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;
	
	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;

	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl;
	
	hold = generate();
	identify(hold);
	identify(*hold);
	delete (hold);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
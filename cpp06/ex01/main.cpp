/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:19:48 by bperron           #+#    #+#             */
/*   Updated: 2022/11/08 10:58:41 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main(){
	{
		Data 		data;
		Data		*temp;
		uintptr_t	hold;

		data.nb = 10;
		cout << "Before serialization: " << data.nb << endl;
		hold = serialize(&data);
		cout << "After serialization: " << hold << endl;
		temp =  deserialize(hold);
		cout << "After deserialization: " << temp->nb << endl << endl << endl;
	}

	{
		Data 		data;
		Data		*temp;
		uintptr_t	hold;

		data.nb = INT_MIN;
		cout << "Before serialization: " << data.nb << endl;
		hold = serialize(&data);
		cout << "After serialization: " << hold << endl;
		temp =  deserialize(hold);
		cout << "After deserialization: " << temp->nb << endl << endl << endl;
	}

	{
		Data 		data;
		Data		*temp;
		uintptr_t	hold;

		data.nb = INT_MAX;
		cout << "Before serialization: " << data.nb << endl;
		hold = serialize(&data);
		cout << "After serialization: " << hold << endl;
		temp =  deserialize(hold);
		cout << "After deserialization: " << temp->nb << endl << endl << endl;
	}

	{
		Data 		data;
		Data		*temp;
		uintptr_t	hold;

		data.nb = -410;
		cout << "Before serialization: " << data.nb << endl;
		hold = serialize(&data);
		cout << "After serialization: " << hold << endl;
		temp =  deserialize(hold);
		cout << "After deserialization: " << temp->nb << endl << endl << endl;
	}

	{
		Data 		data;
		Data		*temp;
		uintptr_t	hold;

		data.nb = 46343463;
		cout << "Before serialization: " << data.nb << endl;
		hold = serialize(&data);
		cout << "After serialization: " << hold << endl;
		temp =  deserialize(hold);
		cout << "After deserialization: " << temp->nb << endl << endl << endl;
	}
}

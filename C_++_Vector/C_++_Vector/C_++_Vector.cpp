#include <iostream>
#include  <array>
#include "nvector.h"
#include <vector>
using namespace std;


int main()
{

	nList<double> myVec = {};
	myVec.push_back(20);
	cout << myVec[0] << endl; 

	/*
	 
	///Capacity
	myVec.size();

	myVec.resize(10, 200);

	myVec.capacity();

	myVec.empty();

	myVec.reserve(50);

	myVec.shrink_to_fit();



	///Element access
	myVec[2];

	myVec.at(2);

	myVec.front();

	myVec.back();

	myVec.data();



	///Modifiers
	myVec.assign(10, 90);

	myVec.push_back(99);

	myVec.pop_back();

	myVec.insert(111, 2);

	myVec.erase(2);

	myVec.clear();



	///Custom functions.
	myVec.swap_values(0, 1);

	myVec.find(20);

	*/
}


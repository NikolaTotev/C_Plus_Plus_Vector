// C_++_Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "nvector.h"
#include  <array>

using namespace std;
int main()
{	
	nList<int> myArr = {1, 2, 3, 4, 5};
	array<int, 10> stuff = { 1, 2, 3 };

	//stuff[1];
	myArr.push_back(12);
	
	//myArr.insert_at(-1, 3);

	//cout << myArr.size();

	myArr.pop_back();
	myArr.data();

	cout << myArr.end() << "End";



}


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
	nList<int, 10> myArr = {1, 2, 3, 4, 5};
	//array<int, 10> stuff = { 1, 2, 3 };

	//stuff[1];
	myArr.Add(12);


	myArr.Insert(-1, 3);
/*
	for(int i = 0; i < 5; i++)
	{
		cout << myArr[i];
	}*/


}


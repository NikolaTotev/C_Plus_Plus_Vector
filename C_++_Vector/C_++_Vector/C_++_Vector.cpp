#include <iostream>
#include  <array>
#include "nvector.h"
using namespace std;


int main()
{
	
	nList<double> myVec = { 1, 2, 3, 4 };
	myVec.push_back(54);

	//for(int i = 0; i < myVec.size(); i++)
	//{
	//	cout << myVec[i] << endl;
	//}

	myVec.pop_back();

	//for (int i = 0; i < myVec.size(); i++)
	//{
	//	cout << myVec[i] << endl;
	//}
	nList<nList<double>> myVectOfVec =
	{
	{1, 2, 3 ,3 ,4},
	{1, 2 ,3 ,4 ,5},
	{2, 3, 2, 1, 2}
	};

	nList<nList<double>> myVectOfVec2 = {};

	for(int i = 0; i < 3; i++)
	{
		myVectOfVec2.push_back(nList<double>());
	}

	cout <<	myVectOfVec[1][2];
}


//Грозьо Станиев?? Геом
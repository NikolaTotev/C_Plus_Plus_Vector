#include <iostream>
#include  <array>
#include "nvector.h"
#include <vector>
using namespace std;


int main()
{

	nList<double> myVec = { 0, 1, 2, 3, 4 };
	//myVec.push_back(54);

	//cout << myVec.size() << "SIZE" << endl;
	//cout << myVec.capacity() << "CAP" << endl;

	//myVec.push_back(25);

	//cout << myVec.size() << "SIZE" << endl;
	//cout << myVec.capacity() << "CAP" << endl;

	//myVec.push_back(23);

	//cout << myVec.size() << "SIZE"<< endl;
	//cout << myVec.capacity() << "CAP" << endl;

	//myVec.push_back(22);

	//cout << myVec.size() << "SIZE" << endl;
	//cout << myVec.capacity() << "CAP" << endl;

	//myVec.push_back(221);

	//cout << myVec.size() << "SIZE" << endl;
	//cout << myVec.capacity() << "CAP" << endl;

	//cout << myVec[0] << endl;
	//cout << myVec[1] << endl;
	//cout << myVec[2] << endl;
	//cout << myVec[3] << endl;
	//cout << myVec[4] << endl;

	//myVec.resize(20);
	//cout << myVec.capacity();
	//cout << myVec.size();
	myVec.resize(10);
	myVec.insert(900, 2);
	cout << myVec[0] << endl;
	cout << myVec[1] << endl;
	cout << myVec[2] << endl;
	cout << myVec[3] << endl;
	cout << myVec[4] << endl;
	cout << myVec[5] << endl;
	//cout << myVec[6] << endl;	
}

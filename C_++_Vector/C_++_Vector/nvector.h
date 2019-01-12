#pragma once
#include <iostream>
using namespace std;

template<class listType, size_t listSize>
class nList
{
	typedef listType* pointerToArray;
	typedef initializer_list<listType>* pointerToInit;

private:

	size_t defaultSize = (listSize!=0) ? 0:listSize;
	size_t currentSize = 0;

	//Pointer to the current array of elements
	pointerToArray current_  = nullptr;

	//Pointer for the temporary array of elements used when adding/removing elements.
	pointerToArray temp = nullptr;

	//Pointer to the initializer_list.
	pointerToInit currentInit_ = nullptr;




public:
	nList(initializer_list<listType> listToAssign)
	{		
		currentInit_ = &listToAssign;
		assignCurrentArray(currentInit_);
	};

private:
	//At the moment it just assigns the first element of currentInit to the first element of current.
	void assignCurrentArray (pointerToInit listToAssign)
	{
		current_ = new listType[currentInit_->size()];
		copy(currentInit_->begin(), currentInit_->end(), current_);
		currentSize = currentInit_->size();
		cout << current_[0];
		cout << current_[1];
		cout << current_[2];
	}

public:
	void Add(listType itemToAdd)
	{
		size_t newSize = currentSize + 1;
		currentSize += 1;

		temp = new listType[newSize];
		begin(current_);
		end(current_);
		//copy(current_, end(current_), temp);
		temp[newSize - 1] = itemToAdd;	
		delete temp;
	}

private:
	
};


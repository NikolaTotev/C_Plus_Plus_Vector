#pragma once
#include <iostream>
using namespace std;

template<class listType, size_t listSize>
class nList
{
	typedef listType* pointerToArray;
	typedef initializer_list<listType>* pointerToInit;

private:

	size_t defaultSize = (listSize != 0) ? 0 : listSize;
	size_t currentSize = 0;

	//Pointer to the current array of elements
	pointerToArray current_ = nullptr;

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

	//TODO add check if X is within the bounds of the list.
	listType& operator[] (int x) {
		return current_[x];
	}

private:
	//At the moment it just assigns the first element of currentInit to the first element of current.
	void assignCurrentArray(pointerToInit listToAssign)
	{
		current_ = new listType[currentInit_->size()];
		copy(currentInit_->begin(), currentInit_->end(), current_);
		currentSize = currentInit_->size();
	}

public:
	void Add(listType itemToAdd)
	{
		size_t newSize = currentSize + 1;
		currentSize += 1;

		temp = new listType[newSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			temp[i] = current_[i];
		}
		temp[newSize - 1] = itemToAdd;

		delete current_;
		current_ = new listType[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			current_[i] = temp[i];
		}
		delete temp;
	}

	void Remove(listType itemToRemove)
	{
		size_t newSize = currentSize - 1;


		temp = new listType[newSize];

		size_t posToRemoveAt = 0;

		for (size_t i = 0; i < currentSize; i++)
		{
			temp[i] = current_[i];
		}

		//TODO this won't work well for type float. 
		for (size_t i = 0; i < currentSize; i++)
		{
			if (current_[i] == itemToRemove)
			{
				posToRemoveAt = i;
				break;
			}
		}

		for (size_t i = posToRemoveAt; i < currentSize; i++)
		{
			temp[i] = current_[i + 1];			
		}
		currentSize -= 1;

		delete current_;
		current_ = new listType[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			current_[i] = temp[i];
		}

		delete temp;
	}

private:

};


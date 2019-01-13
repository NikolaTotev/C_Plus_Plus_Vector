#pragma once
#include <iostream>
#include <stdexcept>
#include <assert.h>

using namespace std;

//TODO Make sure it works properly for floats.
//TODO push_back error handling for all functions!
//TODO push_back input validation!
//TODO Learn to throw exceptions.

template<class listType>
class nList
{
	typedef listType* pointerToArray;
	typedef initializer_list<listType>* pointerToInit;

private:

	//	size_t defaultSize = (listSize != 0) ? 0 : listSize;
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

	void assign(pointerToArray vectorToAssign)
	{
		
	}

	/// <summary>Returns first element of the vector.
	/// </summary>
	listType front()
	{
		return  current_[0];
	}

	/// <summary>Returns last element of the vector.
	/// </summary>
	listType end()
	{
		return current_[currentSize - 1];
	}

	/// <summary>Adds item to the end of the vector.
	/// </summary>
	void push_back(listType itemToAdd)
	{
		size_t newSize = currentSize + 1;

		temp = new listType[newSize];

		for (size_t i = 0; i < newSize; i++)
		{
			temp[i] = current_[i];
		}

		temp[newSize - 1] = itemToAdd;

		currentSize += 1;

		delete current_;
		current_ = new listType[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			current_[i] = temp[i];
		}
		delete temp;
	}

	/// <summary>Removes last item in the vector.
	/// </summary>
	void pop_back()
	{
		size_t new_size = currentSize - 1;

		temp = new listType[new_size];

		for (size_t i = 0; i < new_size; i++)
		{
			temp[i] = current_[i];
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

	/// <summary>Inserts item at a given position.
	/// </summary>
	void insert_at(listType itemToInsert, int insertPosition)
	{
		size_t new_size = currentSize + 1;
		temp = new listType[new_size];

		for (size_t i = 0; i < new_size; i++)
		{
			temp[i] = current_[i];
		}

		temp[insertPosition] = itemToInsert;

		currentSize += 1;

		for (int i = insertPosition + 1; i < new_size; i++)
		{
			temp[i] = current_[i - 1];
		}

		for (int i = 0; i < new_size; i++)
		{
			cout << temp[i];
		}

		delete temp;
	}

	/// <summary>Removes item in the list based on its value.
	/// </summary>
	void remove(listType itemToRemove)
	{
		size_t new_size = currentSize - 1;


		temp = new listType[new_size];

		size_t posToRemoveAt = 0;

		for (size_t i = 0; i < currentSize; i++)
		{
			temp[i] = current_[i];
		}

		//TODO this won't work well for type float. 

		
			for (size_t i = 0; i < currentSize; i++)
			{
				if (is_same_v<listType, float>)
				{
					const float eps = 0.0001;
					if(current_[i] > eps )
				}
				else
				{
					if (current_[i] == itemToRemove)
					{
						posToRemoveAt = i;
						break;
					}
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

	/// <summary>Removes the element at a specified position.
	/// </summary>
	void remove_at(int posToRemoveAt)
	{
		size_t new_size = currentSize - 1;

		temp = new listType[new_size];

		for (size_t i = 0; i < currentSize; i++)
		{
			temp[i] = current_[i];
		}

		for (int i = posToRemoveAt; i < currentSize; i++)
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

	/// <summary>Removes all data from the array.
	/// </summary>
	void clear()
	{
		delete current_;
		current_ = new listType[0];
		currentSize = 0;
	}

	/// <summary>Finds the position a given element is located.
	/// </summary>
	int find(listType itemToFind)
	{
		for (int i = 0; i < currentSize; i++)
		{
			if (current_[i] == itemToFind)
			{
				return i;
			}
		}

		return -1;
	}

	/// <summary>Swaps the value of pos_1 with the value at pos_2 and vice versa.	
	/// </summary>
	void swap_values(int pos_1, int pos_2)
	{
		listType temp_1 = current_[pos_1];
		listType temp_2 = current_[pos_2];

		current_[pos_1] = temp_2;
		current_[pos_2] = temp_1;
	}

	/// <summary>Returns an integer equal to the size of the current vector.
	/// </summary>
	int size()
	{
		return  currentSize;
	}

	/// <summary>Returns pointer to the array used to store the elements of the vector.
	/// </summary>
	pointerToArray data()
	{
		return current_;
	}

private:

};


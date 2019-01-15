#pragma once
#include <iostream>
#include <stdexcept>
#include <assert.h>

using namespace std;

//TODO Make sure it works properly for floats.
//TODO push_back error handling for all functions!
//TODO push_back input validation!
//TODO Learn to throw exceptions.

template<class T>
class nList
{
	typedef initializer_list<T>* pointerToInit;

private:
	const double EPS = 0.001;
	//	size_t defaultSize = (listSize != 0) ? 0 : listSize;
	size_t currentSize = 0;

	//Pointer to the current array of elements
	T* _current = nullptr;

	//Pointer for the temporary array of elements used when adding/removing elements.
	T* temp = nullptr;

	//Pointer to the initializer_list.
	pointerToInit currentInit_ = nullptr;

public:
	nList(initializer_list<T> listToAssign) : currentInit_(&listToAssign)
	{
		assignCurrentArray(currentInit_);
	}

	nList() = default;

	//TODO add check if X is within the bounds of the list.
	T& operator[] (int x) {
		return _current[x];
	}

	void operator = (const nList& D) {

		delete[] _current;
		_current = new T[D.currentSize];
		for (int i = 0; i < D.currentSize; i++)
		{
			_current[i] = D._current[i];
		}
	}

private:
	//At the moment it just assigns the first element of currentInit to the first element of current.
	void assignCurrentArray(pointerToInit listToAssign)
	{
		_current = new T[currentInit_->size()];
		copy(currentInit_->begin(), currentInit_->end(), _current);
		currentSize = currentInit_->size();
	}

public:

	void assign(T* vectorToAssign)
	{

	}

	/// <summary>Returns first element of the vector.
	/// </summary>
	T front()
	{
		return  _current[0];
	}

	/// <summary>Returns last element of the vector.
	/// </summary>
	T end()
	{
		return _current[currentSize - 1];
	}

	/// <summary>Adds item to the end of the vector.
	/// </summary>
	void push_back(T itemToAdd)
	{
		size_t newSize = currentSize + 1;

		temp = new T[newSize];

		for (size_t i = 0; i < newSize; i++)
		{
			temp[i] = _current[i];
		}

		temp[newSize - 1] = itemToAdd;

		currentSize += 1;

		delete _current;
		_current = new T[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			_current[i] = temp[i];
		}
		delete temp;
	}

	/// <summary>Removes last item in the vector.
	/// </summary>
	void pop_back()
	{
		size_t new_size = currentSize - 1;

		temp = new T[new_size];

		for (size_t i = 0; i < new_size; i++)
		{
			temp[i] = _current[i];
		}


		currentSize -= 1;

		delete _current;
		_current = new T[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			_current[i] = temp[i];
		}
		delete temp;
	}

	/// <summary>Inserts item at a given position.
	/// </summary>
	void insert_at(T itemToInsert, int insertPosition)
	{
		size_t new_size = currentSize + 1;
		temp = new T[new_size];

		for (size_t i = 0; i < new_size; i++)
		{
			temp[i] = _current[i];
		}

		temp[insertPosition] = itemToInsert;

		currentSize += 1;

		for (int i = insertPosition + 1; i < new_size; i++)
		{
			temp[i] = _current[i - 1];
		}

		for (int i = 0; i < new_size; i++)
		{
			cout << temp[i];
		}

		delete temp;
	}

	/// <summary>Removes item in the list based on its value.
	/// </summary>
	void remove(T itemToRemove)
	{
		size_t new_size = currentSize - 1;


		temp = new T[new_size];

		size_t posToRemoveAt = 0;

		for (size_t i = 0; i < currentSize; i++)
		{
			temp[i] = _current[i];
		}

		//TODO this won't work well for type float. 


		for (size_t i = 0; i < currentSize; i++)
		{
			if (is_same_v<T, float>)
			{
				const float eps = 0.0001;
				if (abs(_current[i] - itemToRemove) < EPS)
				{
					posToRemoveAt = i;
					cout << posToRemoveAt;
					break;

				}
			}
			else
			{
				if (_current[i] == itemToRemove)
				{
					posToRemoveAt = i;
					break;
				}
			}

		}



		for (size_t i = posToRemoveAt; i < currentSize; i++)
		{
			temp[i] = _current[i + 1];
		}
		currentSize -= 1;

		delete _current;
		_current = new T[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			_current[i] = temp[i];
		}

		delete temp;
	}

	/// <summary>Removes the element at a specified position.
	/// </summary>
	void remove_at(int posToRemoveAt)
	{
		size_t new_size = currentSize - 1;

		temp = new T[new_size];

		for (size_t i = 0; i < currentSize; i++)
		{
			temp[i] = _current[i];
		}

		for (int i = posToRemoveAt; i < currentSize; i++)
		{
			temp[i] = _current[i + 1];
		}
		currentSize -= 1;

		delete _current;
		_current = new T[currentSize];

		for (size_t i = 0; i < currentSize; i++)
		{
			_current[i] = temp[i];
		}

		delete temp;
	}

	/// <summary>Removes all data from the array.
	/// </summary>
	void clear()
	{
		delete _current;
		_current = new T[0];
		currentSize = 0;
	}

	/// <summary>Finds the position a given element is located.
	/// </summary>
	int find(T itemToFind)
	{
		for (int i = 0; i < currentSize; i++)
		{
			if (_current[i] == itemToFind)
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
		T temp_1 = _current[pos_1];
		T temp_2 = _current[pos_2];

		_current[pos_1] = temp_2;
		_current[pos_2] = temp_1;
	}

	/// <summary>Returns an integer equal to the size of the current vector.
	/// </summary>
	int size()
	{
		return currentSize;
	}

	/// <summary>Returns pointer to the array used to store the elements of the vector.
	/// </summary>
	T* data()
	{
		return _current;
	}

private:

};


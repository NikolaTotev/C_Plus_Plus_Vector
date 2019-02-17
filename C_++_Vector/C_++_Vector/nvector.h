#pragma once
#include <iostream>
#include <stdexcept>
#include <assert.h>

using namespace std;

template<class T>
class nList
{
	typedef initializer_list<T>* pointerToInit;

private:
	const double EPS = 0.001;
	const int DEFAULT_SIZE = 1;

	size_t currentSize = 0;
	size_t currentCapacity = 0;

	//Pointer to the current array of elements
	T* _current = nullptr;

	//Pointer for the temporary array of elements used when adding/removing elements.
	T* temp = nullptr;

	int lastFreeIndex = 0;

public:
	nList(initializer_list<T> listToAssign)
	{		
		pointerToInit currentInit_ = &listToAssign;

		if (currentInit_ == nullptr || currentInit_->size() == 0)
		{
			_current = new T[DEFAULT_SIZE];
			currentCapacity = DEFAULT_SIZE;
		}
		else
		{
			assignCurrentArray(currentInit_);
		}

	}

	nList() = default;

	void operator = (const nList& D) {

		delete[] _current;
		_current = new T[D.currentSize];
		for (int i = 0; i < D.currentSize; i++)
		{
			_current[i] = D._current[i];
		}
	}

private:
	void assignCurrentArray(pointerToInit currentInit_)
	{
		_current = new T[currentInit_->size()];
		copy(currentInit_->begin(), currentInit_->end(), _current);
		currentSize = currentInit_->size();
		currentCapacity = currentInit_->size();
	}

	void reallocate(int newSize)
	{
		if (newSize != -1)
		{
			if (newSize < currentSize)
			{
				currentSize = newSize;
			}

			size_t newCapacity = newSize;

			temp = new T[newCapacity];

			for (size_t i = 0; i < currentSize; i++)
			{
				temp[i] = _current[i];
			}

			currentCapacity = newCapacity;

			delete _current;

			_current = new T[newCapacity];

			for (size_t i = 0; i < currentSize; i++)
			{
				_current[i] = temp[i];
			}

			delete[] temp;
		}
		else
		{
			size_t newCapacity = 0;

			if (currentCapacity == 0)
			{
				newCapacity = 2;
			}
			else
			{
				newCapacity = currentCapacity * 2;
			}

			temp = new T[newCapacity];

			for (size_t i = 0; i < currentSize; i++)
			{
				temp[i] = _current[i];
			}

			currentCapacity = newCapacity;

			delete _current;

			_current = new T[newCapacity];

			for (size_t i = 0; i < currentSize; i++)
			{
				_current[i] = temp[i];
			}

			delete[] temp;
		}

	}

public:
#pragma region Capacity
	/// <summary>Returns an integer equal to the size of the current vector.
	/// </summary>
	int size()
	{
		return currentSize;
	}

	/// <summary>Resizes the container so that it contains n elements.
	/// </summary>
	void resize(int newSize, T value = NULL)
	{
		if (newSize < currentSize)
		{
			reallocate(newSize);
		}

		if (newSize > currentSize)
		{
			if (newSize > currentCapacity)
			{
				reallocate(-1);
				for (int i = currentSize; i < newSize; i++)
				{
					_current[i] = value;
					currentSize++;
				}
			}
		}
	}

	/// <summary>Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
	/// </summary>
	int capacity()
	{
		return currentCapacity;
	}

	/// <summary>Returns whether the vector is empty (i.e. whether its size is 0).
	/// </summary>
	bool empty()
	{
		if (currentSize == 0)
		{
			return true;
		}
		return false;
	}

	/// <summary>Requests that the vector capacity be at least enough to contain n elements.
	/// </summary>
	void reserve(int newSize)
	{
		if (newSize > currentCapacity && newSize > currentSize)
		{
			reallocate(newSize);
		}
	}

	/// <summary>Requests the container to reduce its capacity to fit its size.
	/// </summary>
	void shrink_to_fit()
	{
		reallocate(currentSize);
	}
#pragma endregion 

#pragma region Element Access
	T& operator[] (int x) {

		assert(x < currentSize);		
		return _current[x];
	}

	/// <summary>Returns a reference to the element at position n in the vector.
	/// </summary>
	T& at(int x)
	{
		assert(x <= currentSize);
		return _current[x];
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

	/// <summary>Returns pointer to the array used to store the elements of the vector.
	/// </summary>
	T* data()
	{
		return _current;
	}
#pragma endregion 

#pragma region Modifiers
	/// <summary>Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
    /// </summary>
	void assign(int size, T value = NULL)
	{
		currentSize = size;
		for(int i = 0; i < currentSize; i++)
		{
			_current[i] = value;
		}
	}

	/// <summary>Adds item to the end of the vector.
	/// </summary>
	void push_back(T itemToAdd)
	{
		if (currentSize + 1 > currentCapacity)
		{
			reallocate(-1);			
		}

		_current[currentSize] = itemToAdd;
		currentSize++;
	}

	/// <summary>Removes last item in the vector.
	/// </summary>
	void pop_back()
	{
		currentSize -= 1;
	}
	
	/// <summary>Inserts item at a given position.
	/// </summary>
	void insert(T itemToInsert, int insertPosition)
	{

		if (currentSize + 1 > currentCapacity)
		{
			reallocate(-1);
		}

		currentSize++;
		for (int i = currentSize; i >= insertPosition; i--)
		{
			_current[i] = _current[i - 1];
		}
		_current[insertPosition] = itemToInsert;
	}

	/// <summary>Removes the element at a specified position.
	/// </summary>
	void erase(int posToRemoveAt)
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

		delete[] temp;
	}

	//TODO Swap

	/// <summary>Removes all data from the array.
	/// </summary>
	void clear()
	{
		delete _current;
		_current = new T[0];
		currentSize = 0;
	}

#pragma endregion 

#pragma region Custom
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

		delete[] temp;
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
#pragma endregion 
};


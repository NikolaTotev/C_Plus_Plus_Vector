# Welcome to StackEdit!

Hi! I'm your first Markdown file in **StackEdit**. If you want to learn about StackEdit, you can read me. If you want to play with Markdown, you can edit me. Once you have finished with me, you can create new files by opening the **file explorer** on the left corner of the navigation bar.

# My implementation of the vector in C++
This is my own version of the vector class in C++ called **nList**. Below is are all the member functions that are available. If you find any bugs feel free to open an issue and I'll look into it!

# Member functions for Capacity

## size
Returns an integer equal to the number of elements in the list.

## resize (int newSize, T value)
Resizes the current list. 
	If newSize is small than the current size starting from the back elements are deleted until the size of the list is equal to newSize. 
	If newSize is larger than the current size but less than the capacity elements are added to the back of the list until the size reaches newSize.
		If newSize is larger than the current size but more than the capacity the internal array is reallocated and elements are added to the back of the list until the size reaches newSize.

## capacity
Returns an integer equal to the current capacity of the list.

## empty
Returns a boolean value indicating if there are elements in the list.

## reserve (int newSize)
Requests that the vector capacity be at least enough to contain n elements.

## shrink_to_fit
Requests the container to reduce its capacity to fit its size.

# Member functions for Capacity

## Manage file synchronization

Since one file can be synced with multiple locations, you can list and manage synchronized locations by clicking **File synchronization** in the **Synchronize** sub-menu. This allows you to list and remove synchronized locations that are linked to your file.


# operator[]
Returns element at a given index.

## at(int index)
Returns a reference to the element at position n in the 
vector.
## front
Returns first element of the vector.

## back
Returns last element of the vector.

## data
Returns pointer to the array used to store the elements of the vector.

# Modifier member functions
## assign
Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
## push_back(T value)
Adds item to the end of the vector.
## pop_back
Removes last item in the vector.
## insert(T value, int insertPosition)
Inserts item at a given position.

## erase(int indexToErase)
Removes the element at a specified position.

## clear
Removes all elements from the list.

# Custom functions
## swap_values(int pos_1, int pos_2)
Swaps the values at the given positions. Value at pos_1 = value at pos_2 and vice versa
## find(T valueToFind)
Returns the first index at which given value is found.


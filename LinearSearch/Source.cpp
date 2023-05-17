#include <iostream>

int* InsertionSort(int* const& array, const int& size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = i; j >= 0 && array[j] > array[j + 1]; j--)
		{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
		}
	}
	return array;
}

int* LinearSearch(int* const& array, const int& size, const int &find)
{
	int first_i_index = 0; // to find the first index of the first element you are looking for
	int counter = 0; // for the number of instances of the desired number 
	for (int i = 0; i < size; i++)
	{
		if (find == array[i])
		{
			counter++;
			if ( counter == 1 ) first_i_index = i;
		}
	}
	if (counter > 0)
	{
		int* array_of_index_values = new int[counter];
		for (int i = 0, first_i_index; i < counter; i++, first_i_index++)
		{
			array_of_index_values[i] = array[first_i_index];
		}
		return array_of_index_values;
	}
	else
		return 0;
}

void FreeArray(int *array_deleted) 
{
	delete[] array_deleted;
}

int main()
{
	int number = 2;
	const int size = 3;
	int array[size] = { 3, 2, 1 };
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
		std::cout << array[i] << " ";
	LinearSearch(array, size, number);
	return 0;
}
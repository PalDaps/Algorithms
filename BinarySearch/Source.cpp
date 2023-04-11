#include <iostream>

int* BubbleSort(int* const& array, const int& size)
{
	for ( int i = 0; i < size-1; ++i)
	{ 
		for (int j = 0; j < size-1-i; ++j)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	return array;
}

int* SelectionSort(int* const& array, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		int safe_min_i = i;
		for (int j = i; j < size; j++)
		{
			if (array[safe_min_i] > array[j])
			{
				safe_min_i = j;
			}
		}
		int tmp = array[safe_min_i];
		array[safe_min_i] = array[i];
		array[i] = tmp;
	}
	return array;
}

int* InsertionSort(int* const& array, const int& size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i; j >= 0 and array[j] > array[j + 1]; j--)
		{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
		}
	}
	return array;
}

int& BinarySearch(int* const& sort_array, const int& size)
{

}


int main()
{
	const int size = 6;
	int array[size] = { 6, 5, 4, 3, 2, 1};
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
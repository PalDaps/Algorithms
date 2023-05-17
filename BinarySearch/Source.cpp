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

int BinarySearch(int* const& sort_array, const int& size, const int &find_value)
{
	int low = 0;
	int high = size - 1;
	int middle = (high + low) / 2;
	while ( low < high )
	{
		if (find_value == sort_array[middle])
		{
			return middle;
		}
		else if ( find_value > sort_array[middle] )
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
		middle = (high + low) / 2;
	}
	return -1;
}


int main()
{
	const int size = 6;
	int array[size] = { 6, 5, 0, 4, 2, 1};
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	std::cout << BinarySearch(array, 6, 0);
	return 0;
}
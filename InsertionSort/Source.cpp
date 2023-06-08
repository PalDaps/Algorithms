#include <iostream>

/*
int* InsertionSort(int* const& array, const int &size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i; j >= 0 && array[j + 1] < array[j]; j--)
		{
			int temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
		}
	}
	return array;
}
*/

// after a month
//6/8/2023

int* InsertionSort(int* const& array, const int& size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j >= 0; j--) {
			if (array[j] > array[j+1]) {
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}

		} 
	}
	return array;
}

int main()
{
	const int size = 4;
	int array[size] = {5, 4, 3 ,2};
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
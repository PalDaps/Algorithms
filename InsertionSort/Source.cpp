#include <iostream>

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

int main()
{
	const int size = 1;
	int array[size] = {1};
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
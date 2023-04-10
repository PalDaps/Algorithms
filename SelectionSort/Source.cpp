#include <iostream>

int* SelectionSort(int* const& array, const int& size)
{
	for (int j = 0; j < size; j++)
	{
		int safe_min_i = j;
		for (int i = j; i < size; i++)
		{
			if (array[safe_min_i] > array[i])
			{
				safe_min_i = i;
			}
		}
		int tmp = array[safe_min_i];
		array[safe_min_i] = array[j];
		array[j] = tmp;
	}
	return array;
}

int main()
{
	const int size = 10;
	int array[size] = {6, 3, 7, 4, 8, 2, 1, 1, 1, 0};
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	SelectionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
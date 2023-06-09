#include <iostream>

/*
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
*/

// after a month 6/8/2023
// заметил, что отладчик позволяет хорошо вспомнить код
/*
int* SelectionSort(int* const& array, const int& size) {
	for (int i = 0; i < size; i++) {
		int safe_min = i;
		for (int j = i; j < size; j++) {
			if (array[safe_min] > array[j]) {
				safe_min = j;
			}
		}
		int temp = array[safe_min];
		array[safe_min] = array[i];
		array[i] = temp;
	}
	return array;
}
*/
// after a day
// success
int* SelectionSort(int* const& array, const int& size) {
	for (int i = 0; i < size; i++) {
		int min_index = i;
		for (int j = i; j < size; j++) {
			if (array[min_index] > array[j]) {
				min_index = j;
			}
		}
		int temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
	}
	return array;
}

int main()
{
	const int size = 5;
	int array[size] = {5, 1, 2, 4, 3};
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
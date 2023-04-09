#include <iostream>

int* InsertionSort(int* const& array, const int &size)
{
	for (int i = 0; i < size - 1; i++)
	{

		if (array[i + 1] < array[i])
		{
			for ( int j = i; j>=0; j-- )
			{ 
			int temp = array[j];
			array[j] = array[j + 1]; 
			array[j + 1] = temp;
			}
		}

	}
	return array;
}

int main()
{
	const int size = 2;
	int array[size] = { 5, 4};
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
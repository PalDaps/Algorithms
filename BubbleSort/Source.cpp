#include <iostream>

int* BubbleSort(int* array, const int size)
{
	for ( int j = 0; j < size-1; j++ )
	{ 
	    for (int i = 1; i < size; i++)
	    {
	    	if (array[i - 1] > array[i])
	    	{
	    		int temp = array[i - 1];
	    		array[i - 1] = array[i];
	    		array[i] = temp;
	    	}
	    }
	}
	return array;

}

int main()
{
	int size = 0, counter = 0;
	std::cin >> size;
	counter = size;
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(array + i) = counter--;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << *(array + i) << " ";
	}
	std::cout << std::endl;
	BubbleSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << *(array + i) << " ";
	}

	delete[] array;
	return 0;
}
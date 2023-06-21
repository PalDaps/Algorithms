#include <iostream>
/*
int* BubbleSort(int* const &array, const int &size) // This means that the pointer itself cannot be modified within the function, but the contents of the array can be modified. 
{
	for ( int i = 0; i < size-1; i++ )
	{ 
	    for (int j = 0; j < size-1-i; j++) // A small optimization. Since we compare each element sequentially with all the elements of the array. Then, you can notice when we compare the first element (at the zero iteration) with all the elements of the array, then the largest element becomes at the end. Consequently, elements can be swapped i times less. Where i is the number of runs through the array.
	    {
	    	if (array[j] > array[j+1])
	    	{
	    		int temp = array[j];
	    		array[j] = array[j+1];
	    		array[j+1] = temp;
	    	}
	    }
	}
	return array;

}
*/

// after a month
/*
int* BubbleSort(int* const& array, const int& size) { // че то я не понял, зачем я так делал?
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	return array;
}
*/

 //6/8/2023 Я когда нибудь это запомню или нет?
/*
int* BubbleSort(int* const& array, const int& size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
*/

//after a day 6/9/2023
// success
//int* BubbleSort(int* const& array, const int& size) {
//	for (int i = 0; i < size-1; i++) {
//		for (int j = 0; j < size - 1 - i; j++) {
//			if (array[j] > array[j + 1]) {
//				int temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//	return array;
//}
// 6/21/2023 done!
int* BubbleSort(int* const& array, const int& size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (array[j] > array[j + 1])
				std::swap(array[j], array[j + 1]);
		}
	}
	return array;
}

int main()
{
	int h = 0101010101101001;
	int a = h << 010;
	int size = 0, counter = 0;
	std::cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> *(array + i);
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
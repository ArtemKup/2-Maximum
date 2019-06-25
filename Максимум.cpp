//#include "pch.h"
#include <iostream>

using namespace std;

void choicesSort(int*, int); 

int main(int argc, char* argv[])
{
	int size_array; // довжина масива
	cin >> size_array; // введення довжини масива

	int *sorted_array = new int[size_array]; // одиничний динамічниймасив

	for (int counter = 0; counter < size_array; counter++)
	{
		 cin >> sorted_array[counter]; // введення елементів масива
	}

	choicesSort(sorted_array, size_array); // виклик сорутування вибором максимуму

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << sorted_array[counter]  << " "; //вивід відсортованого масиву
	}
	
	delete[] sorted_array; // звільнення пам'яті
	return 0;
}

void choicesSort(int* arrayPtr, int length_array) // сортування вибором
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // тимчасова змінна(збереження значеня сортування)
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
		{
			if (arrayPtr[repeat_counter] > arrayPtr[element_counter])
			{
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}
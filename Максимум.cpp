//#include "pch.h"
#include <iostream>

using namespace std;

void choicesSort(int*, int); 

int main(int argc, char* argv[])
{
	int size_array; // ������� ������
	cin >> size_array; // �������� ������� ������

	int *sorted_array = new int[size_array]; // ��������� ��������������

	for (int counter = 0; counter < size_array; counter++)
	{
		 cin >> sorted_array[counter]; // �������� �������� ������
	}

	choicesSort(sorted_array, size_array); // ������ ����������� ������� ���������

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << sorted_array[counter]  << " "; //���� ������������� ������
	}
	
	delete[] sorted_array; // ��������� ���'��
	return 0;
}

void choicesSort(int* arrayPtr, int length_array) // ���������� �������
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // ��������� �����(���������� ������� ����������)
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
#include "Header.h"
int** Init(int** arr, int string, int columns)
{
	arr = new int* [string];
	for (int i = 0; i < string; i++)
	{
		arr[i] = new int[columns];
	}
	for (int p = 0; p < string; p++)
	{
		for (int g = 0; g < columns; g++)
		{
			arr[p][g] = rand() % 50 + 10;
		}
	}
	return arr;
}
int** Clear(int** arr, int strings)
{
	for (int i = 0; i < strings; i++)
	{
		delete[] arr[i];
	}
	return arr;
}
void PrintArr(int** arr, int strings, int columns)
{
	for (int i = 0; i < strings; i++)
	{
		for (int g = 0; g < columns; g++)
		{
			cout << arr[i][g] << "|";
		}
		cout << endl;
	}
}
// Bubble_Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void bubble_sort(int(&arr)[100], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size ; ++j)
		{
			if (arr[i] > arr[j]) /* For decreasing order use < */
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int test[100];
	for (int i = 0; i < 100; ++i)
	{
		test[i] = rand() % 100;
	}
	for (int i = 0; i < 100; ++i)
	{
		cout << test[i] << " ";
	}
	bubble_sort(test, 100);
	cout << endl;
	for (int i = 0; i < 100; ++i)
	{
		cout<< test[i] << " ";
	}
    return 0;
}


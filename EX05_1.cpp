// EX05_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}


int main()
{
	int list1[5] = { 0, 1, 2, 3, 4 };
	double list2[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	string list3[5] = { "Joe", "Ed", "Sam", "Abby", "Laura"};

	cout << linearSearch(list1, 3, 5) << endl;
	cout << linearSearch(list2, 3.3, 5) << endl;
	cout << linearSearch(list3, list3[3], 5) << endl;

    return 0;
}



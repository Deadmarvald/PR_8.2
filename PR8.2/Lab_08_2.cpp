// Lab_08_2.cpp
// Вольвенко Іван
// Лабораторна робота № 8.2
// Опрацювання літерних рядків
// Варіант 13

#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* str)
{
	char* tmp = new char[strlen(str) + 1];
	char* t = tmp;

	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || str[i - 1] == ',' || (str[i] == ' ' && (str[i+1] != ',' && str[i+1]!= ' ')))
			*t++ = str[i];
	}
	*t = 0;

	strcpy(str, tmp);

	return tmp;
}

int main()
{
	char str[228];

	cout << "Enter String:" << endl;
	cin.getline(str, 227);

	char* dest = new char[228];
	dest = Change(str);

	cout << "Modified string: " << dest << endl;

	return 0;
}
#include <iostream>
#include "Exeption.h"
#include "Zero.h"
#include "MistykeErr.h"
#include "WrongFile.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "");
	cout << "Введите проверку чего вы хотите провести: " << endl;
	cout << "1-Деление на 0: " << endl;
	cout << "2-Выход за пределы массива: " << endl;
	cout << "3-Открытие файла: " << endl;
	int i;
	cin >> i;
	try 
	{
		switch (i)
		{
		case 1:
			int a, b;
			cin >> a;
			cin >> b;
			if (b == 0)
			{
				throw Zero();
			}
			else
			{
				cout << a / b;
			}
			break;
		case 2:
			int size;
			int elem;
			cin >> size;
			int* arr;
			arr=new int[size];
			cin >> elem;
			if (elem > size - 1) 
			{
				throw MistykeErr();
			}
			else { cout << elem; }
			break;
		case 3:
			char PATH[256];
			cin >> PATH;
			FILE* f;
			if (fopen_s(&f, PATH, "r") != 0) 
			{ 
				throw WrongFile(); 
			}
			break;
		}
	}
	catch (Exeption& ex) 
	{
		ex.Error();
	}
	
}
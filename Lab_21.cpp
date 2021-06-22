#include <iostream>
#include <fstream>
#include <locale.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int temp, arr[10] = { -10,2,0,14,43,-25,18,1,-5,45 };
	int pos_arr[10], poscnt = 0;
	/* cout << "Enter the elements of the array:  \n";
	for (int i = 0; i <= 9; i++)
	{
		cin >> arr[i];

	} */
	//Finding even numbers
	for (int i = 0; i <= 9; i++)
	{
		if (arr[i] >= 0)
		{
			pos_arr[poscnt++] = arr[i];
		}

	}
	cout << "\t\tСортировка элементов массива\n";
	cout << "\n\tНачальные элементы: ";
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i] << ", ";

	}
	cout << endl;
	cout << "\n\tПоложительные элементы: ";
	for (int i = 0; i < poscnt; i++)
	{
		cout << pos_arr[i] << ", ";

	}
	cout << endl;
	bool check = false;
	// Exchange Algo
	for (int i = 0; i < poscnt; i++)
	{
		for (int j = i + 1; j < poscnt; j++)
		{
			if (pos_arr[j] > pos_arr[i])
			{
				temp = pos_arr[i];
				pos_arr[i] = pos_arr[j];
				pos_arr[j] = temp;
				bool check = true;
			}
		}
	}
	// Output Algo
	cout << "\n\tСортировка элементов в порядке убывания: ";
	if (bool check = true)
	{
		for (int i = 0; i < poscnt; i++)
		{
			cout << pos_arr[i] << ", ";
		}
	}
	cout << endl;
	return 0;
}



/* #include<iostream>
#include <stdio.h>
#include<cstdio>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main()
{
//+------------------------------------------------------------------------------------------+
//|									Example 1											|
//+------------------------------------------------------------------------------------------+
	cout << "------------------------------------------------------------------------" << endl;
	cout << "	Example 1" << endl;;
	int x;
	string c;
	cout << "Enter a string: ";
	cin >> c;

	string oborot;
	char ch;

	for (int i = c.length() - 1; i >= 0; i--)
	{
		oborot.push_back(c[i]);
	}
	cout << "Letters in direct order:  " << endl;

	for (int i = 0; i < c.length(); i++)
	{
		ch = c.at(i);
		cout << "The ASCII value of " << c[i] << " = " << int(ch) << endl;
	}
	cout << "Letters in reversed string: " << oborot << endl;
	system("pause"); */

//+------------------------------------------------------------------------------------------+
//|									Example 2											|
//+------------------------------------------------------------------------------------------+
	/*cout << "------------------------------------------------------------------------" << endl;
	cout << "	Example 2" << endl;
	
	char gwords[10];
	char temp[40];


	cout << "Enter 10 words starting with letter D: " << endl;
		
	for (int i = 0; i < 10; i++)
	{

		cin >> temp;
		fgets(temp, 10, stdout);
		if (temp[0] != 'd')  		// проверка первого символа
			cout << "Word " << i+1 << " does not start with letter D" << endl;
		else
		 {
				//strcpy(gwords, temp);
				strcpy_s(gwords, temp);
				i++;
		} 
	}

	puts("The following words match the condition:");
	for (int i = 0; i < 10; i++)
	{
		cout << gwords[i] << " ";
		//puts(gwords[i]);
	}
	cout << endl; */
	

//+------------------------------------------------------------------------------------------+
//|									Example 2											|
//+------------------------------------------------------------------------------------------+
	/* cout << "------------------------------------------------------------------------" << endl;
	cout << "	Example 2" << endl;
	char one[4] = "ura"; 	
	char two[6] = "";		
	strcat_s(two, one);	
	cout << two << endl;
	strcat_s(two, "!");	 
	cout << two << endl;
	cout << strlen(two);
	cout << endl;
	system("pause");

//+------------------------------------------------------------------------------------------+
//|									Example 3											|
//+------------------------------------------------------------------------------------------+
	cout << "------------------------------------------------------------------------" << endl;
	cout << "	Example 3" << endl;
	char s[3][5] = { "ghaj","rtrd","fgah" };	
	for (int n = 0; n < 3; n++)	
		if (strchr(s[n], 'a'))     
			{
			cout << s[n] << endl;
			}
	system("pause");
	cout << endl;

//+------------------------------------------------------------------------------------------+
//|									Example 4											|
//+------------------------------------------------------------------------------------------+
	cout << "------------------------------------------------------------------------" << endl;
	cout << "	Example 4" << endl;
	char st[100];
	int i, j, leng, wBegin = 0, wEnd = 0;
	puts("Enter a line"); 
	//gets(str);
	cin >> st;
	puts(st);
	leng = strlen(st) + 1;
	for (i = 0; i < leng; i++)
	{
		if (st[i] == ' ' || st[i] == '\0')
		{
			wEnd = i;
			if (st[i - 1] == 'k' || st[i - 1] == 'K')
			{
				cout << wBegin << " " << wEnd << endl;
			}
			{ 
				for (j = wBegin; j < wEnd; j++)
					cout << st[j] << endl;
			}
			wBegin = i + 1;
		}
	}
	system("pause");

//+------------------------------------------------------------------------------------------+
//|									Example 5											|
//+------------------------------------------------------------------------------------------+
	cout << "------------------------------------------------------------------------" << endl;
	cout << "	Example 5" << endl;

	int a, b;
	char S1[40], S2[40];
	cout << "Enter first  string without space: ";
	cin >> S1;
	cout << endl;
	cout << "Enter second string without space: ";
	cin >> S2;
	a = strlen(S1);
	b = strlen(S2);
	cout << endl;
	cout << "Length of First string = " << a << endl;
	cout << "Length of Second string = " << b << endl;

	if (a > b)
		cout << "First string is longer than second " << endl;
	else if (a < b)
		cout << "Second string is longer than first " << endl;
	else
		cout << "The length of '" << S1 << "' and '" << S2 << "' are equal" << endl;
	strcat_s(S1, S2);
	cout << S1 << endl;
	return 0;
} */
#include <iostream>
#include <stdio.h>
#include<cstdio>
#include <string>
#include< stdlib.h >
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

void menu();
void info();
int main()
{
	int y;
	system("CLS");
	cout << "		Program for showing number of integers." << endl;
	cout << "Press 1 to number of integers" << endl;
	cout << "Press 2 to show string info" << endl;
	cout << "Press 3 to exit" << endl;
	cin >> y;
	switch (y)
	{
	case 1: menu();
	case 2: info();
	case 3: exit(0);
	}
		
	return 0;
}
void menu()
{
	system("CLS");
	char s[20];
	int letters = 0;
	int n = 0;
	int len, i = 0;
	char ret;
	cout << "Enter a string" << endl;
	cin >> s;
	for (n = 0; n < 20; n++)
	{
		if ((s[n] >= 'a' && s[n] <= 'z') || (s[n] >= 'A' && s[n] <= 'Z'))
		{
			letters = letters + 1;
		}
	}
	len = strlen(s);
	cout << endl;
	cout << "Number of integers in the string " << s << " = " << len - letters << endl;
	cout << "Press x to go to main" << endl;
	
	char one [20]= "Green";
	char two[20] = "Table";
	cout << one << endl;
	cout << two << endl;
	strcat_s(two, one);
	cout << two << endl;
	cout << strlen(two) << endl;
	cout << strcmp(one,two);
	cout << endl;

	string s =  "This is a room";
	string s2 = "room";
	cout <<  strstr (s,s2) << endl;
		
	cin >> ret;
	system("pause");
	if (ret == 'x')
	{
		main();
	}
}
void info()
{
	system("CLS");
	char s[20];
	int letters = 0;
	int n = 0;
	int len, i = 0;
	char ret;
	cout << "Enter a string" << endl;
	cin >> s;
	for (n = 0; n < 20; n++)
	{
		if ((s[n] >= 'a' && s[n] <= 'z') || (s[n] >= 'A' && s[n] <= 'Z'))
		{
			letters = letters + 1;
		}
	}
	len = strlen(s);
	cout << endl;
	cout << "length of the string = " << len << endl;
	cout << endl;
	cout << "Number of Letters = " << letters << endl;
	cout << endl; 
	cout << "Number of integers in the string " << s << " = " << len - letters << endl;
	cout << "Press x to exit" << endl;
	cin >> ret;
	if (ret == 'x')
	{
		main();
	}
}
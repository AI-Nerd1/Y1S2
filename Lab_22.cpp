#include<iostream>
#include<math.h>
using namespace std;
/* double summation(double);

double summation(double x)
{
	double y = ((x + 4) / (3 * x));
	if (x !=0)
	{
		return y + summation(x-1);
	}
	else
		return x;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double x =10, result;
	result = summation(x);
	cout << "\t\t\tÐÅÊÓÐÑÈÈ" << endl;
	cout << "\n  Êîãäà çíà÷åíèå x íà÷èíàåòñÿ îò 1 äî 10 ";
	cout << "ñóììèðîâàíèå y = " << result << "\n";
	cout << endl;
} */

/* int m[] = { 1, -2, 3, 4, -4, 0 };
int rec(int);
int rec(int x) 
{
	int sum;
	for (int i = 5; i >= 0; i--)
	{
		if (m[i] == 0)
		{
			return m[i];
		}
		else
		{
			if (m > 0)
			{
				 sum = m[i];
				sum++;
			}
			return sum + rec(x - 1);
		}
	}
}

int main()
{
	int x=6 ;
	int sum = rec(x);
	cout << sum;
	return 0;
} */

/*  #include<iostream>
 
using namespace std;
 
int getSum(int x);
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "\t\t\tÐÅÊÓÐÑÈÈ" << endl;
    int n;
    cout << "\n\tÂâåäèòå öåëîå ÷èñëî:  ";
    cin >> n;
     
	cout << "\n\tÑóììà ÷èñåë îò " << n << " äî 0 = " << getSum(n) << endl;
    return 0;
}
 
int getSum(int x) {
    if(x >= 0)
        return x + getSum(x-1);
    else
        return 0;
} */

/* #include<iostream>
using namespace std;
int sum(int arr[], int n)
{
	if (n == 0) 
	{ 
		return 0; 
	}
	return arr[0] + sum(arr + 1, n - 1);
}
int main()
{
	int arr[] = { 9,8,7,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// We can take the user input as well
	/*int n;
	cin>>n;
	int arr[n];
	 for(int i=0;i<n;i++){cin>>arr[i];}
		*/
/* cout << sum(arr, n);
	return 0;
} */


/* #include <iostream>
#include <conio.h>
using namespace std;

int add(int, int, int, int, int);
int add(int a, int b, int x, int y, int z)
{	int added = a + b + x + y;
	if (z == 0)
		return added;
	else
		return(1 + add(a, b, x, y, z - 1));
}
int main()
{	setlocale(LC_ALL, "Russian");
	cout << "\t\t\tÐÅÊÓÐÑÈÈ" << endl;
	int a, b, x, y, z, result;  
	cout << "\n\tÂâåäèòå 5 öåëûå ÷èñëà: ";
	cin >> a >> b >> x >> y >> z;
	result = add(a, b, x, y, z);
	cout << "\n\tÑóììà ÷èñåë:" << result << "\n\n";
	return 0;
} */

#include <iostream>
#include <conio.h>
using namespace std;
int C(int n, int m);
int C(int n, int m)
{
	if ((m == 0) && (n > 0) || (m == n) && (n > 0))
		return 1;
	else
		if ((m > n) && (n >= 0))
			return 0;
		else
			return C(n - 1, m - 1) + C(n - 1, m);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\t\t\tÐÅÊÓÐÑÈÈ" << endl;
	int m, n, result;
	cout << "\n\tÂâåäèòå \n";
	cout << "\tm = "; cin >> m;
	cout << "\tn = "; cin >> n;
	result = C(n, m);
	cout << "\n\tCî÷åòàíèé = " << result << "\n\n";
	return 0;
}
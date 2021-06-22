/* #include <iostream>
#define n 5
using namespace std;
int vec(int [], int); //прототип функции вычисления min компоненты вектора 
int main()
{
    setlocale(LC_ALL, "Russian");
    int y[n], i, min;
    for (i = 0; i < n; i++)
    {
        cout << "\nВведите y[" << i << "]=";
        cin >> y[i];           // ввод элементов вектора
    }
    min = vec(y, n);  // вызывающая функция 
    cout << "\n\n Минимальная компонента = " << min << endl;
    system("PAUSE");
    return 0;
}
 int vec (int x[], int k)  // заголовок функции
{
    int min1 = x[0]; int i;
    for (i = 1; i < k; i++)
    {
        if (x[i] < min1) min1 = x[i];
    }
    return min1;
} */


// Программа, в которой функция mas принимает двумерный массив как параметр.
/* #include<iostream>
#include <conio.h>
#define n 2 // числострок
#define m 3 // числостолбцов
using namespace std;
int mas(int[ ][m], int, int); // прототипфункции
int main()
{
    setlocale(LC_ALL, "Russian");
    int y[n][m], i, j, min;
    system("cls");// очистка экрана
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cout << "\nВведите y[" << i << "][" << j << "]=";
            cin >> y[i][j];           // ввод массива 
        }
    min = mas(y, n, m); // обращение к функции и получение результата 
    cout << "\n\n Минимальная компонента = " << min;
    system("PAUSE");
    return 0;
}
int mas(int x[][m], int k, int d) //заголовокфункции
{
    int min1 = x[0][0]; int i, j;
    for (i = 0; i < k; i++)
        for (j = 0; j < d; j++)
        {
            if (x[i][j] < min1) min1 = x[i][j];
        }
    return min1;
} */

/* #include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    system("cls");
    int a[5], sum = 0, * p;
    int kol = 0, i;
    p = &a[0]; // инициализация указателя адресом первого элемента 
    cout << " Ввод данных в массив a[ ]\n";
    for (i = 0; i < 5; i++)
    {
        cout << " a [ " << i << " ] = ";
        cin >> *(p + i);  // разыменовывание смещенного указателя 
    }
    // расчет суммы и количества положительных элементов 
    for (i = 0; i < 5; i++)
        if (*(p + i) > 0)
        {
            sum += *(p + i);
            kol++;
        }
    // вывод исходных данных и результатов 
    cout << "\n\n\n Элемент массива  Адрес элемента массива \n";
    for (i = 0; i < 5; i++)
    {
        cout << *(p + i) << "\t\t  " << (p + i) << "\n"; // выводрезультатовс пробелами
    }
    cout << "\nсумма = " << sum << "\nколичество = " << kol;
    cout << "\n\n";
    system("PAUSE");
} */


/* #include<iostream>
#define N 2
#define M 2 
#include <conio.h>
using namespace std;
int  main()
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int a[N][M], b[M], min, * p;
    int i, j;
    p = &a[0][0]; // инициализация указателя адресом первой ячейки 
    cout << "Введите данные в массив a[“<< I <<”][“<<J<<”]:\n";
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> *(p + i * N + j);      // ввод массива
        }
    // расчет массива b[2] 
    for (j = 0; j < M; j++) // цикл по столбцам 
    {
        min = *(p + j);   // присваивание    min значения первого элемента столбца 
        for (i = 1; i < N; i++) // цикл по строкам, начиная со второго элемента 
            if ((*(p + i * N + j)) < min)    min = *(p + i * N + j);
        *(b + j) = min;
    }
    cout << "\n\n Вывод исходного массива a[ ]:";
    for (i = 0; i < N; i++)
    {
        cout << "\n";
        for (j = 0; j < M; j++)
        {
            cout << "\t" << *(p + i * M + j);
        }
    }
    cout << "\n\nВывод полученного массива b[ ]:\n";
    for (j = 0; j < M; j++)
    {
        cout << "\t" << *(b + j);
    }
    cout << "\n\n";

    system("PAUSE");
} */

#include<iostream>
#include<iomanip>
#define N 5
#define M 5
#include <conio.h>
using namespace std;
int a[N][M], b[M], max, min, * p, ave, kol;
int i, j, n, m;
void new_func(int&);

void new_func()
{
    p = &a[0][0];
    cout << "\n\tВведите данные в массив a[" << "i" << "][" << "j" << "]:" << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << "\ta[" << i << "][" << j << "]= ";
            cin >> *(p + i * N + j);
        }
    }
}
void get_elements(int (*a)[M], int min, int max)
{
    new_func();

    for (j = 0; j < M; j++)
    {
        min = *(p + j);
        max = *(p + j);

        for (i = 1; i < N; i++)
        {
            if ((*(p + i * N + j)) > max)
            {
                max = *(p + i * N + j);
            }
        }
        for (i = 1; i < N; i++)
        {
            if ((*(p + i * N + j)) < min)
            {
                min = *(p + i * N + j);
            }
        }
        ave = (min + max) / 2;
        *(b + j) = ave;
    }

}
void show_array(int b[M])
{
    cout << "\n\n \tВывод исходного массива a[]:";
    for (i = 0; i < N; i++)
    {
        cout << "\n";
        for (j = 0; j < M; j++)
        {
            cout << "\t" << *(p + i * M + j);
        }
    }
    cout << endl;
    cout << "=" << setw(80) << setfill('=') << "=" << endl;

    cout << "\n\n\tМассив среднего арифметического наибольших и наименьших элементов b[]:\n\n";
    for (j = 0; j < M; j++)
    {
        cout << "\t" << *(b + j);
    }
    cout << endl;
    kol = 0;
    for (j = 0; j < M; j++)
    {
        if (*(b + j) % 2 == 0)
        {
            kol++;
        }
    }
    cout << "=" << setfill('=') << setw(80) << "=" << endl;
    cout << "\tКоличество четных элементов массива b[] = " << kol;
    cout << "\n" << endl;
    system("PAUSE");
} 
int  main()
{
    int min=0, max=0;
    system("cls");
    setlocale(LC_ALL, "Russian");
    get_elements(a, min, max);
    show_array(b);    
    return 0;
}
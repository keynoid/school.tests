/* Дан целочисленный массив из 30 элементов. Элементы массива могут принимать значения от 0 до 1000. Опишите на русском языке или на одном из языков программирования алгоритм, который позволяет подсчитать и вывести среднее арифметическое элементов массива, имеющих нечетное значение. Гарантируется, что в исходном массиве хотя бы один элемент имеет нечетное значение. */

#include <iostream>

using namespace std;

#define N 6

int task2901(void)
{
    int a[N];
    int i, x, y;
    float s;
    s = 0;
    x = 0;
    y = 0;
    
    for (i = 0; i < N; i++)
    cin >> a[i];
    
    for (i = 0; i < N; i++)
    {
        if (a[i] % 2 != 0)
        {
            y += a[i];
            x++;
        }
    }
    s = float(y) / x;
    cout << s;
    
    return 0;
}

/* Дан массив, содержащий неотрицательные целые числа. Если сумма всех элементов массива чётная, нужно вывести количество чётных (по значению) элементов массива, если нечётная – количество нечётных.
Например, для массива из 6 элементов, равных соответственно 2, 6, 12, 17, 3, 8, ответом будет 4 – количество чётных элементов, так как общая сумма всех элементов чётна.
Напишите на одном из языков программирования программу для решения этой задачи. Исходные данные объявлены так, как показано ниже. */

#include <iostream>
using namespace std;
#define N 6
int task9209()
{
    int a[N];
    int i, k;
    k = 0;
    
    for (i = 0; i < N; i++)
        cin >> a[i];
    
    for (i = 0; i < N; i++)
    {
        if (a[i] % 2 != 0)
        {
            k++;
        }
    }
    if(k % 2 == 0)
    {
        cout << N - k;
    }
    else
    {
        cout << k;
    }
    return 0;
}
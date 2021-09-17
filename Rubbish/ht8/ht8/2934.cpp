/* Дан целочисленный массив из 25 элементов. Элементы массива могут принимать значения от 30 до 50 — количество яблок в одном ящике. Опишите на русском языке или на одном из языков программирования алгоритм, который среди ящиков с количеством яблок больше сорока находит номер ящика с самыми крупными яблоками. Гарантируется, что такой ящик один. (Вес яблок во всех ящиках одинаковый.) */

#include <iostream>
#define N 6


using namespace std;
int task2934()
{
    int arr[N];
    int i, j, min;
    min = INT_MAX;
    j = 0;
    
    for(i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] > 40 && arr[i] < min)
        {
            min = arr[i];
            j = i;
        }
    }
    cout << j + 1;
    return 0;
}
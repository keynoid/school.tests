/* ������� �� ������� ����� ��� �� ����� �� ������ ���������������� �������� ��������
������������ ���� ������������� ��������� ��������� �������������� ������� �������� 30
���������, � �������������, ��� � ������� ���� ���� �� ���� ������������� �������. */

#include <iostream>
#define N 6

using namespace std;

int task3636()
{
	int i, j, k;
	int a[N];

	for (i = 0; i < N; i++)
		cin >> a[i];
	j = 1;
	for (i = 0; i < N; i++)
	{
		if (a[i] < 0)
		{
			j *= a[i];
		}
	}
	cout << j;
	system("pause");
	return 0;
}
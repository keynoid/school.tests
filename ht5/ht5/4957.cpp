/* ��� ������, ���������� 70 ����� �����.������� �� ����� �� ������ ���������������� �����������
��������, ����������� ����� � ������� ���������� �������� ���� �����, ������������ � �������.
�������� ������ ��������� ���, ��� �������� ����.����������� ������������ ����������,
�� ��������� ����, �� ����������� ������������ ����� �� ��������� ����������. */

#include <iostream>

using namespace std;

#define N 6

int task4957()
{

	long a[N];

	long i, j, x, y;

	for (i = 0; i < N; i++)

		cin >> a[i];
	x = INT_MAX;
	y = INT_MIN;
	for (i = 0; i < N; i++)
	{
		if (a[i] > y)
		{
			y = a[i];
		}

		if (a[i] < x)
		{
			x = a[i];
		}
	}

	y -= x;

	cout << y;
	system("pause");
	return 0;
}
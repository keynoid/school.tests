/* ��� ������������� ������ �� 30 ���������.�������� ������� ����� ��������� ����� �������� ��
0 �� 10000 ������������.������� �� ������������ ����� ��� �� ����� �� ������ ����������������
��������, ����������� ����� � ������� ������������ ���������� ��������� �������, � ������ 
���� �� ������� 6. �������������, ��� � �������� ������� ���� ���� �� ���� �������, ��������
�������� �������� ���������� ������, � ��� ���� ����� ��� ���� �� ������� �� 6. */

#include <iostream>

using namespace std;

#define N 6

int task6588()
{

	long a[N];

	long i, j, p;

	for (i = 0; i<N; i++)

		cin >> a[i];
	p = 1;
	for (i = 0; i < N; i++)
	{
		if (a[i] >= 10 && a[i] <= 99 && ((((a[i] / 10 + a[i] % 10)) % 6) != 0))
		{
			p *= a[i];
		}
	}

	cout << p;
	system("pause");
	return 0;
}
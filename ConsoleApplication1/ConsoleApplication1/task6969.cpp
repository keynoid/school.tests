/* ��� ������, ���������� 2014 ������������� ����� �����.������������ ����� ���������� ��� 
��������, ������� ��������� �� ������ ���������� �� ������ �������.��������, 1 - � � 2014 -
� ��������, 2 - � � 2013 - � � �.�.������� ��������� � ������������ ���� �� ����������� :
�������� �� 1 � 2014 ������ � ��� �� �� ����� ����, ��� � �������� �� 2014 � 1 ������.
�������� �� ����� �� ������ ���������������� ���������, ������� ������������ � ������� 
���������� ������������ ���, � ������� ����� ��������� ������ 20. ��������� ������ �������
���� ����� � ���������� ���������� ������������ ���.�������� ������ ��������� ���, ��� 
�������� ����.����������� ������������ ����������, �� ��������� ����, �� ����������� �� 
������������ ����� �� ��������� ����������. */

#include <iostream>
using namespace std;
#define N 6
int task6969() 
{
	int a[N];
	int i, j, k;
	for (i = 0; i < N; i++)
		cin >> a[i];

	k = 0;

	for (i = 0; i < N / 2; i++)
	{
		if ((a[i] + a[N - i - 1]) > 20) 									
		{
			k++;	
		}
	}
	cout << k;
	system("pause");
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
Start:
	setlocale(LC_ALL, "Rus");
	int zadanie;
	cout << "������� ����� �������: ";
	cin >> zadanie;
	switch (zadanie)
	{

	case 1:
	{
		system("cls");
		cout << "������� 1." << endl;
		cout << "�������� ���������� ���� �����������-���������� � ������ �� ���� ����� ������ � ������. ���������� ����� ������, ���������� ������ �����������" << endl;
		cout << "�������:" << endl;
		srand(time(0));
		int s1, s2, sum1 = 0, sum2 = 0;
		for (int i = 1; i <= 5; i++)
		{
			s1 = 1 + rand() % 10;
			s2 = 1 + rand() % 10;
			sum1 += s1;
			sum2 += s2;
		}
		cout << "1 ��������� - " << sum1 << endl;
		cout << "2 ��������� - " << sum2 << endl;
		goto Start;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "������� 2." << endl;
		cout << "�������� ������ �� ������ ������� ������� ���� �������. ���������� ������� ������ � ������ ������. ���������� �������� � ������ ������ ����������." << endl;
		cout << "�������:" << endl;
		srand(time(0));
		int k1, k2, sum1 = 0, sum2 = 0, n;
		cout << "���-�� ��������: ";
		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			k1 = 1 + rand() % 5;
			k2 = 1 + rand() % 5;
			sum1 += k1;
			sum2 += k2;
		}
		float sr1 = sum1 / (float)n;
		float sr2 = sum2 / (float)n;
		cout.precision(3);
		cout << "1 ����� - " << sr1 << endl;
		cout << "2 ����� - " << sr2 << endl;
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "������� 3." << endl;
		cout << "� ������� 12 �������. �������� ���������� ������� (� ������� �������)  � ������� (� ��2) ������� ������. ���������� ������� ��������� ��������� �� ������� � �����." << endl;
		cout << "�������:" << endl;
		srand(time(0));
		int zhit, s, plotn;
		float sumplotn = 0;

		for (int i = 1; i <= 12; i++)
		{
			zhit = 100 + rand() % 900;
			s = 100 + rand() % 400;
			plotn = zhit / s;
			sumplotn += plotn;
		}
		float srplotn = sumplotn / 12;
		cout << "������� ��������� �� ������� " << srplotn << endl;
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "������� 4." << endl;
		cout << "� �������� ��������� �������� �����-�� ���������� �����������. ���������� ���������� ������������ ������ ����� ������: ������� ������� �������� �������� �� ����, ������ ������� ������� ���������� � � ����� �������� ������� ������ �������� � ������ �������� �� ���, � ��� �� ��������� ������� ������� �����������." << endl;
		cout << "�������:" << endl;
		int s, age, sumage = 0, k, max = 0, min = 100;
		cout << "������� ������� �������� ���: ";
		cin >> s;
		for (int i = 1; i <= s; i++)
		{
			cout << "������� " << i << " ���������� - ";
			cin >> age;
			k = age;
			sumage += age;
			if (age > max)
				max = age;
			if (age < min)
				min = age;
		}
		float sr = sumage / (float)s;
		cout << "������� ������ �������� ���������� - " << max << ", �������� - " << min << ", ������� ������� - " << sr << endl;
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "������� 5." << endl;
		cout << "�� ������ ������� ����������� ���������� ������ � �������� (� ����� ������� 15). ����� ���������� ������ ��� ��������, ��������� ������������ ������, ������� ������ ��������� � ������ ������, �� ������ � ��� �����, ���� �� ���������� ����� � ��������. ������������� ��� ������, ����� ������������ ����� ���������� ������ ������, ��� ���� �� ������." << endl;
		cout << "�������:" << endl;
		int i = 15, n = 0, x;
		do
		{
			n++;
			cout << "�������� " << i << " ��." << endl;
			cout << "������� ������ ��������� � " << n << " ������? ";
			cin >> x;
			if (x > i)
				cout << "������� ������� ���-��, ��� �������� �� ������." << endl;
			i -= x;
		} while (i > 0);
		cout << "����� �����������." << endl;
		goto Start;
		break;
	}
	case 6:
	{
		system("cls");
		cout << "������� 6." << endl;
		cout << " " << endl;
		cout << "�������:" << endl;

		goto Start;
		break;
	}
	case 7:
	{
		system("cls");
		cout << "������� 7." << endl;
		cout << " " << endl;
		cout << "�������:" << endl;

		goto Start;
		break;
	}
	case 8:
	{
		system("cls");
		cout << "������� 8." << endl;
		cout << " " << endl;
		cout << "�������:" << endl;

		goto Start;
		break;
	}
	case 9:
	{
		system("cls");
		cout << "������� 9." << endl;
		cout << " " << endl;
		cout << "�������:" << endl;

		goto Start;
		break;
	}
	case 10:
	{
		system("cls");
		cout << "������� 10." << endl;
		cout << " " << endl;
		cout << "�������:" << endl;

		goto Start;
		break;
	}
	case 11:
	{
		system("cls");
		cout << "������� 11." << endl;
		cout << " " << endl;
		cout << "�������:" << endl;

		goto Start;
		break;
	}
	break;
	}
}
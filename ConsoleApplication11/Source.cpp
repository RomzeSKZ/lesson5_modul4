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
	cout << "Введите номер задания: ";
	cin >> zadanie;
	switch (zadanie)
	{

	case 1:
	{
		system("cls");
		cout << "Задание 1." << endl;
		cout << "Известны результаты двух спортсменов-пятиборцев в каждом из пяти видов спорта в баллах. Определить сумму баллов, полученных каждым спортсменом" << endl;
		cout << "Решение:" << endl;
		srand(time(0));
		int s1, s2, sum1 = 0, sum2 = 0;
		for (int i = 1; i <= 5; i++)
		{
			s1 = 1 + rand() % 10;
			s2 = 1 + rand() % 10;
			sum1 += s1;
			sum2 += s2;
		}
		cout << "1 спортсмен - " << sum1 << endl;
		cout << "2 спортсмен - " << sum2 << endl;
		goto Start;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "Задание 2." << endl;
		cout << "Известны оценки по физике каждого ученика двух классов. Определить среднюю оценку в каждом классе. Количество учащихся в каждом классе одинаковое." << endl;
		cout << "Решение:" << endl;
		srand(time(0));
		int k1, k2, sum1 = 0, sum2 = 0, n;
		cout << "Кол-во учеников: ";
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
		cout << "1 класс - " << sr1 << endl;
		cout << "2 класс - " << sr2 << endl;
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "Задание 3." << endl;
		cout << "В области 12 районов. Известны количество жителей (в тысячах человек)  и площадь (в км2) каждого района. Определить среднюю плотность населения по области в целом." << endl;
		cout << "Решение:" << endl;
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
		cout << "Средняя плотность по области " << srplotn << endl;
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "Задание 4." << endl;
		cout << "В спортзал ежедневно приходит какое-то количество посетителей. Необходимо предложить пользователю ввести такие данные: сколько человек посетило спортзал за день, ввести возраст каждого посетителя и в итоге показать возраст самого старшего и самого молодого из них, а так же посчитать средний возраст посетителей." << endl;
		cout << "Решение:" << endl;
		int s, age, sumage = 0, k, max = 0, min = 100;
		cout << "Сколько человек посетило зал: ";
		cin >> s;
		for (int i = 1; i <= s; i++)
		{
			cout << "Возраст " << i << " посетителя - ";
			cin >> age;
			k = age;
			sumage += age;
			if (age > max)
				max = age;
			if (age < min)
				min = age;
		}
		float sr = sumage / (float)s;
		cout << "Возраст самого старшего посетителя - " << max << ", младшего - " << min << ", средний возраст - " << sr << endl;
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "Задание 5." << endl;
		cout << "На складе имеется определённое количество ящиков с яблоками (в нашем примере 15). Когда подъезжает машина для погрузки, попросить пользователя ввести, сколько ящиков загрузить в первую машину, во вторую и так далее, пока не закончатся ящики с яблоками. Предусмотреть тот случай, когда пользователь введёт количество ящиков больше, чем есть на складе." << endl;
		cout << "Решение:" << endl;
		int i = 15, n = 0, x;
		do
		{
			n++;
			cout << "Осталось " << i << " ящ." << endl;
			cout << "Сколько ящиков загрузить в " << n << " машину? ";
			cin >> x;
			if (x > i)
				cout << "Введено большее кол-во, чем осталось на складе." << endl;
			i -= x;
		} while (i > 0);
		cout << "Ящики закончились." << endl;
		goto Start;
		break;
	}
	case 6:
	{
		system("cls");
		cout << "Задание 6." << endl;
		cout << " " << endl;
		cout << "Решение:" << endl;

		goto Start;
		break;
	}
	case 7:
	{
		system("cls");
		cout << "Задание 7." << endl;
		cout << " " << endl;
		cout << "Решение:" << endl;

		goto Start;
		break;
	}
	case 8:
	{
		system("cls");
		cout << "Задание 8." << endl;
		cout << " " << endl;
		cout << "Решение:" << endl;

		goto Start;
		break;
	}
	case 9:
	{
		system("cls");
		cout << "Задание 9." << endl;
		cout << " " << endl;
		cout << "Решение:" << endl;

		goto Start;
		break;
	}
	case 10:
	{
		system("cls");
		cout << "Задание 10." << endl;
		cout << " " << endl;
		cout << "Решение:" << endl;

		goto Start;
		break;
	}
	case 11:
	{
		system("cls");
		cout << "Задание 11." << endl;
		cout << " " << endl;
		cout << "Решение:" << endl;

		goto Start;
		break;
	}
	break;
	}
}
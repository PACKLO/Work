﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int Work;
	cout << "Какое задание хотите посмотреть?: ";
	cin >> Work;
	switch (Work)
	{
	case 1: // Проверка пользователя на таблицу умножения. Программа выводит на экран два числа, пользователь должен ввести их произведение. Имеется несколько уровней сложности. Выводит оценку знаний.
		int fNum, sNum, composition, userInput1, possibility;

		cout << "Выберите уровень сложности от 1 до 3: ";
		cin >> possibility;


		srand(time(NULL));
		fNum = rand() % 100 + 1;
		sNum = rand() % 100 + 1;
		composition = fNum * sNum;
		cout << composition << endl;
		cout << fNum << endl;
		cout << sNum << endl;


		break;
	case 2: // Пользователь вводит две грацицы диапазона и число. Если число не попадает в диапазон, программа просит пользователя повторно ввести число и так до тех пор пока он не введет число правльно.
		int diapStart, diapEnd, userInput, diffirence;
		cout << "Введите начало границы диапазона: ";
		cin >> diapStart;
		cout << "Введите конец границы диапазона: ";
		cin >> diapEnd;
		cout << "Введите число которое будет внутри данного диапазона: ";
		cin >> userInput;
		diffirence = diapEnd - diapStart;
		for (int i = diapStart; i <= diapEnd; i++)
		{
			if (i = userInput)
			{
				cout << userInput << ' ' << i << endl;
				break;
			}
			else
			{
				cout << userInput << ' ' << i << endl;
			}
		}


		break;

	default:
		cout << "Неверно! Прочтите README в репозитории!";
		break;
	}
	return 0;
}
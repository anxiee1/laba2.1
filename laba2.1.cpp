// laba2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// viktr.21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int n, c, z = 0;
	cout << "Введите количество элементов: ";

	cin >> n;
	if (cin.fail())
	{
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}

	if (n < 0 or n == 0)
	{
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}


	int* p = new int[n];
	srand(time(0));


	for (int i = 0; i < n; ++i)
	{
		*(p + i) = rand() % 20 - 10;
		cout << *(p + i) << " ";


	}
	cout << "\n" << "Введите элемент: ";
	cin >> c;
	if (cin.fail()) {
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}
	if (n < 0 or n == 0) {
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}
	for (int i = 0; i < n; ++i)
	{

		if (*(p + i) == c)
		{
			cout << "\n" << "Индекс элемента равен: " << i << endl;
			++z;
		}
	}
	if (z == 0) { cout << "Такого элемента НЕТ!!!"; }
}

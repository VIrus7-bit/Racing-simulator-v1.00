#include <iostream>
#include <string>
#include "Choice.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");

	using namespace std;

	int a{}, b{}, c{}, d{}, u{}, j{}, G{};
	string ptr, temp;

	do {
		do {

			cout << "Добро пожаловать в гоночный симулятор!" << endl;
			cout << "1. Гонка для наземного транспорта" << endl;
			cout << "2. Гонка для воздушного транспорта" << endl;
			cout << "3. Гонка для наземного и воздушного транспорта" << endl;
			cout << "Выберите тип гонки: "; cin >> a;
			cout << endl; system("cls");

		} while ((a != 1) && (a != 2) && (a != 3));

		do {

			cout << "Укажите длину дистанции (должна быть положительная): "; cin >> b; cout << endl;

		} while (b <= 0);

		cout << "Должно быть зарегестрировано хотя бы 2 транспортных стедства" << endl;

		do {

			cout << "1. Зарегистрировать транспорт" << endl;
			cout << "Выберите действие: "; cin >> c; cout << endl; system("cls");

		} while (c != 1);

		Choice(a, d, b, u, ptr, temp, j);

		do {
			cout << endl << endl;
			cout << "1. Провести ещё одну гонку" << endl;
			cout << "2. Выйти" << endl;
			cout << "Выберите действие: "; cin >> G;
			system("cls");

		} while (G != 1 && G != 2);

	} while (G != 2);

	system("cls");
	system("pause");

	return EXIT_SUCCESS;
}
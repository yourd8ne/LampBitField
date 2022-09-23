#include <iostream>
#include "BitField.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int len, c = 1;
	BitField F(33);
	do {

		cout << "Меню" << endl;
		cout << "0.Выход" << endl;
		cout << "1.Создание битового поля" << endl;
		cout << "2." << endl;
		cout << "3." << endl;
		cout << "4." << endl;
		cout << "5." << endl;
		cin >> c;
		switch (c)
		{
		case 0:
		{
			c = 1;

			break;
		}
		case 1:
		{
			cout << "Введите количество лампочек" << endl;
			cin >> len;
			BitField F(len);
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			cout << "Некорректное значение" << endl;
			break;
		}
		}
	} while (c == 0);
	

}

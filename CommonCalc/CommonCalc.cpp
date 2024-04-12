#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c, e = 0;
	char t;
	cout << "Введите первое число: ";
	cin >> a;
	do
	{
		c = a;
		a = 0;
		cout << "\nВведите знак операции: ";
		cin >> t;
		if (t == 'C')
		{
			while (t == 'C')
			{
				cout << "Введите первое число: ";
				cin >> a;
				c = a;
				cout << "\nВведите знак операции: ";
				cin >> t;
			}
		}
		if (t == 'Q')
		{
			break;
		}
		while (t != '+' && t != '-' && t != '*' && t != '/')
		{
			cout << "Введён неверный знак. Введите снова: ";
			cin >> t;
		}
		a = c;
		cout << "Введите второе число: ";
		cin >> b;
		if (b == 0 && t == '/')
		{
			while (b == 0 && t == '/')
			{
				cout << "Нельзя делить на ноль. Введите новый знак и число" << endl;
				cin >> t;
				cin >> b;

			}
		}




		if (t == '*')
		{
			a = a * b;
		}
		if (t == '-')
		{
			a = a - b;
		}
		if (t == '+')
		{
			a = a + b;
		}
		if (t == '/')
		{
			a = a / b;
		}

		e = a;
		cout << "Итог: " << e << "\n\n";

	} while (t != 'Q');
	cout << "\nПрограмма завершена. Последний результат: " << e;
}

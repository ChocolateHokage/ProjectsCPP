#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "[+]\n[-]\n[*]\n[/]\n[%]\nВыберите операцию:  ";
	char oper;
	float x, y;
	cin >> oper;

	if (oper == '+')
	{
		cout << "Введите два слагаемых: ";
		cin >> x >> y;
		cout << "Результат: " << x << " + " << y << " = " << x + y;
	}
	else if (oper == '-')
	{
		cout << "Введите уменьшаемое и вычитаемое: ";
		cin >> x >> y;
		cout << "Результат: " << x << " - " << y << " = " << x - y;
	}
	else if (oper == '*')
	{
		cout << "Введите два множителя: ";
		cin >> x >> y;
		cout << "Результат: " << x << " * " << y << " = " << x * y;
	}
	else if (oper == '/')
	{
		int a, b;
		cout << "Введите делимое и делитель: ";
		cin >> a >> b;
		if (b == 0)
		{
			cout << "На ноль делить нельзя!";
		}
		else
		{
			cout << "Результат: " << a << " / " << b << " = " << a / b;
		}
	}
	else if (oper == '%')
	{

		int a, b;
		cout << "Введите делимое и делитель: ";
		cin >> a >> b;
		if (b == 0)
		{
			cout << "На ноль делить нельзя!";
		}
		else
		{
			cout << "Результат: " << a << " % " << b << " = " << a % b;
		}
	}
	else
	{
		cout << "Проверьте значение и повторите попытку";
	}
	return 0;
}
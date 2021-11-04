#include<iostream>
using namespace std;

float sum(float num1, float num2, int choise) {
	cout << "�����: " << num1 << " + " << num2 << " = " << "\x1b[92m" << num1 + num2 << "\x1b[0m";
	return choise;
}

float difference(float num1, float num2, int choise) {
	cout << "�����: " << num1 << " - " << num2 << " = " << "\x1b[92m" << num1 - num2 << "\x1b[0m";
	return choise;
}

float multiplication(float num1, float num2, int choise) {
	cout << "�����: " << num1 << " * " << num2 << " = " << "\x1b[92m" << num1 * num2 << "\x1b[0m";
	return choise;
}
float division(float num1, float num2, int choise) {
	cout << "�����: " << num1 << " / " << num2 << " = " << "\x1b[92m" << num1 / num2 << "\x1b[0m";
	return choise;
}

float SquareOfSumAB(float num1, float num2, int choise) {
	cout << "�����: (" << num1 << " + " << num2 << ")^2 = " << "\x1b[92m" << (num1 + num2) * (num1 + num2) << "\x1b[0m";
	return choise;
}

float legOfTriangle(float num1, float num2, int choise) {
	cout << "�����: ������(" << num1 << "^2 - " << num2 << "^2) = " << "\x1b[92m" << sqrt(num1 * num1 - num2 * num2) << "\x1b[0m";
	return choise;
}

float hypotenuse(float num1, float num2, int choise) {
	cout << "�����: ������(" << num1 << "^2 + " << num2 << "^2) = " << "\x1b[92m" << sqrt(num1 * num1 + num2 * num2) << "\x1b[0m";
	return choise;
}
float factorial(int num1, int choise) {
	int result = 1;
	for (int i = 2; i <= num1; i++) {
		result = result * i;
	}
	cout << "�����: !" << num1 << " = " << "\x1b[92m" << result << "\x1b[0m";
	return choise;
}
int getCorrectChoise1() {
	while (true)
	{
		cout << "�������� ��������: ";
		int choise;
		cin >> choise;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			return choise;
		}
	}
}
float getCorrectNum() {
	while (true)
	{
		cout << "������� ���������� �����: ";
		float num;
		cin >> num;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			return num;
		}
	}
}

float getCorrectZero() {
	while (true)
	{
		cout << "������� ���������� �����: ";
		float num;
		cin >> num;

		if (cin.fail() or num == 0)
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			return num;
		}
	}
}
int main() {
	setlocale(0, "");
	cout << "[+]�����������\n==================================\n\n[1] +\n[2] -\n[3] *\n[4] /\n[5] (a+b)^2\n";
	cout << "[6] ����� �������������� ������������\n[7] ���������� �������������� ������������\n[8]���������";
	cout << "\n==================================\n";
	int choise = getCorrectChoise1();
	switch (choise)
	{
	case 1: {
		cout << "������� ��� �����:\n������ �����: \n";
		float num1 = getCorrectNum();

		cout << "������ �����: \n";
		float num2 = getCorrectNum();
		sum(num1, num2, choise);
		break;
	}
	case 2: {
		float num1 = getCorrectNum();

		cout << "������ �����: \n";
		float num2 = getCorrectNum();
		difference(num1, num2, choise);
		break;
	}
	case 3: {
		cout << "������� ��� �����:\n������ �����: \n";
		float num1 = getCorrectNum();

		cout << "������ �����: \n";
		float num2 = getCorrectNum();
		multiplication(num1, num2, choise);
		break;
	}
	case 4: {
		cout << "������� ��� �����:\n������ �����: \n";
		float num1 = getCorrectNum();

		cout << "������ �����: \n";
		float num2 = getCorrectZero();
		division(num1, num2, choise);
		break;
	}
	case 5: {
		cout << "������� ��� �����:\n������ �����: \n";
		float num1 = getCorrectNum();

		cout << "������ �����: \n";
		float num2 = getCorrectNum();
		SquareOfSumAB(num1, num2, choise);
		break;
	}
	case 6: {
		cout << "������� ��� �����:\n����� ����������: \n";
		float num1 = getCorrectZero();

		cout << "����� ������� ������: \n";
		float num2 = getCorrectZero();
		legOfTriangle(num1, num2, choise);


	}
	case 7: {
		cout << "������� ��� �����:\n����� ������� ������: \n";
		float num1 = getCorrectZero();

		cout << "����� ������� ������: \n";
		float num2 = getCorrectZero();
		hypotenuse(num1, num2, choise);
		break;
	}
	case 8: {
		cout << "������� �����:\n \n";
		int num1 = getCorrectNum();
		factorial(num1, choise);
		break;
	}
	default:
		cout << "��������� �������� � ��������� �������";
		break;
	}
	return 0;
}





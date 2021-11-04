#include <iostream>
using namespace std;

int clearTerminal() {
	system("cls");
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int changeBackgroundColor(int backChoise) {
	switch (backChoise) {
	case 0: {
		system("COLOR 07");
		break;
	}
	case 1: {
		system("COLOR 17");
		break;
	}
	case 2: {
		system("COLOR 27");
		break;
	}
	case 3: {
		system("COLOR 37");
		break;
	}
	case 4: {
		system("COLOR 47");
		break;
	}
	case 5: {
		system("COLOR 57");
		break;
	}
	case 6: {
		system("COLOR 67");
		break;
	}
	case 7: {
		system("COLOR 77");
		break;
	}
	case 8: {
		system("COLOR 87");
		break;
	}
	case 9: {
		system("COLOR 97");
		break;
	}
	case 10: {
		system("COLOR a7");
		break;
	}
	case 11: {
		system("COLOR b7");
		break;
	}
	case 12: {
		system("COLOR c7");
		break;
	}
	case 13: {
		system("COLOR d7");
		break;
	}
	case 14: {
		system("COLOR e7");
		break;
	}
	case 15: {
		system("COLOR f7");
		break;
	}
	default: {
		break;
	}
	}
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int changeFontColor(int fontChoise) {
	switch (fontChoise) {
	case 0: {
		system("COLOR 00");
		break;
	}
	case 1: {
		system("COLOR 01");
		break;
	}
	case 2: {
		system("COLOR 02");
		break;
	}
	case 3: {
		system("COLOR 03");
		break;
	}
	case 4: {
		system("COLOR 04");
		break;
	}
	case 5: {
		system("COLOR 05");
		break;
	}
	case 6: {
		system("COLOR 06");
		break;
	}
	case 7: {
		system("COLOR 07");
		break;
	}
	case 8: {
		system("COLOR 08");
		break;
	}
	case 9: {
		system("COLOR 09");
		break;
	}
	case 10: {
		system("COLOR 0a");
		break;
	}
	case 11: {
		system("COLOR 0b");
		break;
	}
	case 12: {
		system("COLOR 0c");
		break;
	}
	case 13: {
		system("COLOR 0d");
		break;
	}
	case 14: {
		system("COLOR 0e");
		break;
	}
	case 15: {
		system("COLOR 0f");
		break;
	}
	default: {
		break;
	}
	}
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int getSizeOfInt() {
	cout << sizeof(int);
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int getSizeOfChar() {
	cout << sizeof(char);
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int getSizeOfDouble() {
	cout << sizeof(double);
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int getSizeOfFloat() {
	cout << sizeof(float);
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int getSizeOfBool() {
	cout << sizeof(bool);
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}

}

int showMessage() {
	cout << "������, � �������";
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}

int showSquare() {
	cout << "# # # # #\n";
	cout << "# # # # #\n";
	cout << "# # # # #\n";
	cout << "# # # # #\n";
	cout << "# # # # #\n";
	cout << "\n[0] ������� ����\n";
	int choise;
	while (true)
	{
		cout << "�������� ��������: ";
		cin >> choise;

		if (choise != 0 || cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}


int getCorrectChoise() {
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
		else
			return choise;
	}
}
int getCorrectColor() {
	while (true)
	{
		cout << "�������� ����: ";
		int choise;
		cin >> choise;

		if (cin.fail() || (choise < 0 || choise >15))
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return choise;
	}
}



int main() {
	setlocale(0, "");

	cout << "[+]��������� - ��������\n===============================================\n";
	cout << "[1] �������� �������\n[2] �������� ���� ���� �������\n[3] �������� ���� ������ �������\n";
	cout << "[4] ������� ������ ���� ������ INT\n[5] ������� ������ ���� ������ CHAR\n[6] ������� ������ ���� ������ DOUBLE\n";
	cout << "[7] ������� ������ ���� ������ FLOAT\n[8] ������� ������ ���� ������ BOOL\n[9] ������� ��������� \"������, � �������\"\n";
	cout << "[10] ������� ������� 5�5\n[0] �����\n";
	cout << "===============================================\n";

	int choise = getCorrectChoise();
	switch (choise) {
	case 0: {
		return 0;
	}
	case 1: {
		int returnedValue = clearTerminal();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 2: {
		system("cls");
		cout << "0 = ������ 8 = �����\n";
		cout << "1 = ����� 9 = ������ - �����\n";
		cout << "2 = ������� 10 = ������ - �������\n";
		cout << "3 = ������� 11 = ������ - �������\n";
		cout << "4 = ������� 12 = ������ - �������\n";
		cout << "5 = ������� 13 = ������ - �������\n";
		cout << "6 = ������ 14 = ������ - ������\n";
		cout << "7 = ����� 15 = ���� - �����\n";
		int backChoise = getCorrectColor();
		int returnedValue = changeBackgroundColor(backChoise);
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 3: {
		system("cls");
		cout << "0 = ������ 8 = �����\n";
		cout << "1 = ����� 9 = ������ - �����\n";
		cout << "2 = ������� 10 = ������ - �������\n";
		cout << "3 = ������� 11 = ������ - �������\n";
		cout << "4 = ������� 12 = ������ - �������\n";
		cout << "5 = ������� 13 = ������ - �������\n";
		cout << "6 = ������ 14 = ������ - ������\n";
		cout << "7 = ����� 15 = ���� - �����\n";
		int fontChoise = getCorrectColor();
		int returnedValue = changeFontColor(fontChoise);
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 4: {
		cout << "�����: ";
		int returnedValue = getSizeOfInt();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 5: {
		cout << "�����: ";
		int returnedValue = getSizeOfChar();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 6: {
		cout << "�����: ";
		int returnedValue = getSizeOfDouble();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 7: {
		cout << "�����: ";
		int returnedValue = getSizeOfFloat();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 8: {
		cout << "�����: ";
		int returnedValue = getSizeOfBool();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 9: {
		cout << "�����: ";
		int returnedValue = showMessage();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 10: {
		cout << "�����:\n";
		int returnedValue = showSquare();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	default: {
		cout << "��������� �������� � ��������� �������" << endl;
	}
	}

	return 0;
}
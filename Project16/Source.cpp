#include <iostream>
using namespace std;

int clearTerminal() {
	system("cls");
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "Привет, я Функция";
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
	cout << "\n[0] Главное меню\n";
	int choise;
	while (true)
	{
		cout << "Выберите действие: ";
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
		cout << "Выберите действие: ";
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
		cout << "Выберите цвет: ";
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

	cout << "[+]Программа - “Функции”\n===============================================\n";
	cout << "[1] Очищение консоли\n[2] Изменить цвет фона консоли\n[3] Изменить цвет текста консоли\n";
	cout << "[4] Вывести размер типа данных INT\n[5] Вывести размер типа данных CHAR\n[6] Вывести размер типа данных DOUBLE\n";
	cout << "[7] Вывести размер типа данных FLOAT\n[8] Вывести размер типа данных BOOL\n[9] Вывести сообщение \"Привет, я функция\"\n";
	cout << "[10] Вывести квадрат 5х5\n[0] Выход\n";
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
		cout << "0 = Черный 8 = Серый\n";
		cout << "1 = Синий 9 = Светло - синий\n";
		cout << "2 = Зеленый 10 = Светло - зеленый\n";
		cout << "3 = Голубой 11 = Светло - голубой\n";
		cout << "4 = Красный 12 = Светло - красный\n";
		cout << "5 = Лиловый 13 = Светло - лиловый\n";
		cout << "6 = Желтый 14 = Светло - желтый\n";
		cout << "7 = Белый 15 = Ярко - белый\n";
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
		cout << "0 = Черный 8 = Серый\n";
		cout << "1 = Синий 9 = Светло - синий\n";
		cout << "2 = Зеленый 10 = Светло - зеленый\n";
		cout << "3 = Голубой 11 = Светло - голубой\n";
		cout << "4 = Красный 12 = Светло - красный\n";
		cout << "5 = Лиловый 13 = Светло - лиловый\n";
		cout << "6 = Желтый 14 = Светло - желтый\n";
		cout << "7 = Белый 15 = Ярко - белый\n";
		int fontChoise = getCorrectColor();
		int returnedValue = changeFontColor(fontChoise);
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 4: {
		cout << "Ответ: ";
		int returnedValue = getSizeOfInt();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 5: {
		cout << "Ответ: ";
		int returnedValue = getSizeOfChar();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 6: {
		cout << "Ответ: ";
		int returnedValue = getSizeOfDouble();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 7: {
		cout << "Ответ: ";
		int returnedValue = getSizeOfFloat();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 8: {
		cout << "Ответ: ";
		int returnedValue = getSizeOfBool();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 9: {
		cout << "Ответ: ";
		int returnedValue = showMessage();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 10: {
		cout << "Ответ:\n";
		int returnedValue = showSquare();
		if (returnedValue == 0) {
			system("cls");
			main();
		}
		break;
	}
	default: {
		cout << "Проверьте значение и повторите попытку" << endl;
	}
	}

	return 0;
}
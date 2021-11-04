#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Переводчик\n[1]Русские слова\n[2]Английские слова\n\n[3]Выйти\n";
	int choose1;
	cin >> choose1;
	switch (choose1)
	{
	case 1:
		system("cls");
		cout << "Русские слова:\n[1]Привет\n[2]Мир\n[3]Слово\n[4]Дорога\n[5]Мяч\n[6]Нога\n[7]Компьютер\n[8]Стол\n[9]Рабочий стол\n[10]Огонь\n[11]Солнце\n[12]Вода\n[13]Земля\n[14]Воздух\n[15]машина\n\nВыберите номер слова: ";
		int choose2;
		cin >> choose2;
		switch (choose2)
		{
		case 1:
			cout << "Перевод: Привет -> Hello";
			break;
		case 2:
			cout << "Перевод: Мир -> World";
			break;
		case 3:
			cout << "Перевод: Слово -> Word";
			break;
		case 4:
			cout << "Перевод: Дорога -> Road";
			break;
		case 5:
			cout << "Перевод: Мяч -> Ball";
			break;
		case 6:
			cout << "Перевод: Нога -> foot";
			break;
		case 7:
			cout << "Перевод: Компьютер -> Computer";
			break;
		case 8:
			cout << "Перевод: Стол -> Table";
			break;
		case 9:
			cout << "Перевод: Рабочий стол -> Desktop";
			break;
		case 10:
			cout << "Перевод: Огонь -> Fire";
			break;
		case 11:
			cout << "Перевод: Солнце -> Sun";
			break;
		case 12:
			cout << "Перевод: Вода -> Water";
			break;
		case 13:
			cout << "Перевод: Земля -> Earth";
			break;
		case 14:
			cout << "Перевод: Воздух -> Air";
			break;
		case 15:
			cout << "Перевод: Машина -> Car";
			break;
		default:
			cout << "Проверьте значение и повторите попытку";
			break;
		}
		break;

	case 2:
		system("cls");
		cout << "Английские слова:\n[1]Hello\n[2]World\n[3]Word\n[4]Road\n[5]Ball\n[6]Foot\n[7]Computer\n[8]Table\n[9]Desktop\n[10]Fire\n[11]Sun\n[12]Water\n[13]Earth\n[14]Air\n[15]Car\nВыберите номер слова: ";
		int choose3;
		cin >> choose3;
		switch (choose3)
		{
		case 1:
			cout << "Перевод: Hello -> Привет";
			break;
		case 2:
			cout << "Перевод: World -> Мир";
			break;
		case 3:
			cout << "Перевод: Word -> Слово";
			break;
		case 4:
			cout << "Перевод: Road -> Дорога";
			break;
		case 5:
			cout << "Перевод: Ball -> Мяч";
			break;
		case 6:
			cout << "Перевод: Foot -> Нога";
			break;
		case 7:
			cout << "Перевод: Computer -> Компьютер";
			break;
		case 8:
			cout << "Перевод: Table -> Стол";
			break;
		case 9:
			cout << "Перевод: Desktop -> Рабочий стол";
			break;
		case 10:
			cout << "Перевод: Fire -> Огонь";
			break;
		case 11:
			cout << "Перевод: Sun -> Солнце";
			break;
		case 12:
			cout << "Перевод: Water -> Вода";
			break;
		case 13:
			cout << "Перевод: Earth -> Земля";
			break;
		case 14:
			cout << "Перевод: Air -> Воздух";
			break;
		case 15:
			cout << "Перевод: Car -> Машина";
			break;
		default:
			cout << "Проверьте значение и повторите попытку";
			break;
		}
		break;

	case 3:
		system("cls");
		break;
	default:
		cout << "Проверьте значение и повторите попытку";
		break;
	}
	return 0;
}
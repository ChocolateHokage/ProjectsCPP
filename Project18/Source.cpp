#include <iostream>

using namespace std;
//���� 1 ��� - �� - ��������� ������ �� ������� 0 � ������ � � ��������� ���� (���� ����������� �� ��������� �������) 
// ������ ����������� ���������  
//  
// 
// 
// 
// 
//��������� ������� ����
int crossColor = 0;
int roundelColor = 0;
int firstMove = 2;
string firstMovestr = "Player";
int sizeField = 1;
string sizeFieldstr = "3 X 3";
int arrField3[9]{};
int arrField4[16]{};
int arrField5[25]{};
// 1 - O
// 3 - X
//���������� ����
int getField(int sizeField) {
	switch (sizeField) {
	case 1: {
		system("cls");
		for (int i = 1; i <= 9; i++) {
			if (arrField3[i - 1] == 1) {
				cout << "  \x1b[" << roundelColor << "mO\x1b[0m  ";
			}
			else if (arrField3[i - 1] == 3) {
				cout << "  \x1b[" << crossColor << "mX\x1b[0m  ";
			}
			else {
				cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}

			if (i % 3 == 0 and i < 7) {
				cout << "\n-----------------\n";
			}
			else if (i % 3 != 0) {
				cout << "|";
			}
		}
		break;
	}
	case 2: {
		system("cls");
		for (int i = 1; i <= 16; i++) {
			if (i < 10) {
				cout << "   \x1b[90m" << i << "\x1b[0m  ";
			}
			else {
				cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}
			if (i % 4 == 0 and i < 13) {
				cout << "\n---------------------------\n";
			}
			else if (i % 4 != 0) {
				cout << "|";
			}
		}
		system("PAUSE");
		break;
	}
	case 3: {
		system("cls");
		for (int i = 1; i <= 25; i++) {
			if (i < 10) {
				cout << "   \x1b[90m" << i << "\x1b[0m  ";
			}
			else {
				cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}
			if (i % 5 == 0 and i < 21) {
				cout << "\n-----------------------------------\n";
			}
			else if (i % 5 != 0) {
				cout << "|";
			}
		}
		system("PAUSE");
		break;
	}
	default:
		return 0;
		break;
	}
}
//�������� ����� �������!!!

//���������/��� ������
int getGameMode() {
	system("cls");
	cout << "[+]Game Mode" << endl;
	cout << "==============================" << endl;
	cout << "[1]���������" << endl;
	cout << "[2]��� ������" << endl;
	cout << "[0]�����" << endl;
	cout << "==============================" << endl;
	cout << "Enter your choise: ";
	int gameModeChoise;
	cin >> gameModeChoise;
	switch (gameModeChoise)
	{
	case 1: {
		return gameModeChoise;
	}
	case 2: {
		return gameModeChoise;
	}
	case 0: {
		return 0;
	}
	default:
		return 0;
		break;
	}

}

int getPCStep(int arrSize, int arr[], int stepIcon) {
	bool freeSpace = 0;
	while (freeSpace == 0) {
		int step = rand() % arrSize;
		if (arr[step] == 1 or arr[step] == 3) {
			freeSpace = false;
		}
		else if (arr[step] == 0) {
			freeSpace = 1;
			arr[step] = stepIcon;
		}
		else {
			return 0;
		}
	}
	getField(sizeField);

	return 0;
}
int getPlayerStep(int arrSize, int arr[], int stepIcon) {
	bool freeSpace = 0;
	while (freeSpace == 0) {
		int step = 0;
		cout << "\n�������� ������: ";
		cin >> step;
		if (arr[step - 1] == 1 or arr[step - 1] == 3) {
			freeSpace = false;
		}
		else if (arr[step - 1] == 0) {
			freeSpace = 1;
			arr[step - 1] = stepIcon;

		}
		else {
			return 0;
		}
	}
	getField(sizeField);

	return 0;
}
//������ ����
int startGame() {
	int gameModeChoise = getGameMode();
	//firstMove = 1 (PC)
	//firstMove = 2 (Player)
	if (gameModeChoise == 1) {
		getField(sizeField);
		if (firstMove == 1) {
			for (int i = 1; i <= 9; i++) {
				getPCStep(9, arrField3, 3);
				getPlayerStep(9, arrField3, 1);
			}
		}
		else if (firstMove == 2) {
			for (int i = 1; i <= 9; i++) {
				getPlayerStep(9, arrField3, 3);
				getPCStep(9, arrField3, 1);
			}
		}
	}
	else if (gameModeChoise == 2) {
		getField(sizeField);
		switch (sizeField) {
		case 1: {
			int arrField3[3][3];
		}
		case 2: {
			int arrField4[4][4];
		}
		case 3: {
			int arrField5[5][5];
		}
		}
	}
	else if (gameModeChoise == 0) {
		return 0;
	}

}

//����� �����
int getCrossColors() {
	system("cls");
	cout << "[+]Colors" << endl;
	cout << "==============================" << endl;

	for (int i = 89; i <= 97; i++) {
		cout << i << " = \x1b[" << i << "m Cross_Color \x1b[0m" << endl;
	}
	cout << "==============================" << endl;
	cout << "[0]�����" << endl;
	cout << "==============================" << endl;
	cout << "\x1b[" << crossColor << "m Cross_Color \x1b[0m" << endl;
	cout << "Enter your choise: ";
	int colorsChoise;
	cin >> colorsChoise;

	if (colorsChoise == 0) {
		return 0;
	}
	else if (colorsChoise > 89 or colorsChoise < 97) {
		crossColor = colorsChoise;
		getCrossColors();
	}
}
int getRoundelColors() {
	system("cls");
	cout << "[+]Colors" << endl;
	cout << "==============================" << endl;

	for (int i = 89; i <= 97; i++) {
		cout << i << " = \x1b[" << i << "m Roundel_Color \x1b[0m" << endl;
	}
	cout << "==============================" << endl;
	cout << "[0]�����" << endl;
	cout << "==============================" << endl;
	cout << "\x1b[" << roundelColor << "m Roundel_Color \x1b[0m" << endl;
	cout << "Enter your choise: ";
	int colorsChoise;
	cin >> colorsChoise;

	if (colorsChoise == 0) {
		return 0;
	}
	else if (colorsChoise > 89 or colorsChoise < 97) {
		roundelColor = colorsChoise;
		getRoundelColors();
	}
}

//��� ������ �����
int whoseFirstmove() {
	system("cls");
	cout << "[+]����������� ����(only for single mode)" << endl;
	cout << "===============================" << endl;
	cout << "[1]PC ��������" << endl;
	cout << "[2]����� ��������" << endl;
	cout << "[0]�����" << endl;
	cout << "===============================" << endl;
	cout << "Enter your choise: " << endl;
	int firstMoveChoise;
	cin >> firstMoveChoise;
	if (firstMoveChoise == 1) {
		firstMovestr = "PC";
		firstMove = 1;
		whoseFirstmove();
	}
	else if (firstMoveChoise == 2) {
		firstMovestr = "Player";
		firstMove = 2;
		whoseFirstmove();
	}
	else if (firstMoveChoise == 0) {
		return 0;
	}
}

//������ ����
int getSizeField() {
	system("cls");
	cout << "[+]������ ����" << endl;
	cout << "==============================" << endl;
	cout << "[1] 3 X 3   " << endl;
	cout << "[2] 4 X 4   " << endl;
	cout << "[3] 5 X 5   " << endl;
	cout << "[0]�����" << endl;
	cout << "==============================" << endl;
	cout << "Enter your choise: ";
	int sizeFieldChoise;
	cin >> sizeFieldChoise;
	switch (sizeFieldChoise)
	{
	case 1: {
		sizeFieldstr = "3 X 3";
		sizeField = 1;
		getSizeField();
		break;
	}
	case 2: {
		sizeFieldstr = "4 X 4";
		sizeField = 2;
		getSizeField();
		break;
	}
	case 3: {
		sizeFieldstr = "5 X 5";
		sizeField = 3;
		getSizeField();
		break;
	}
	case 0: {

		return 0;
		break;
	}
	default:
		break;
	}


	return 0;
}
//���������
int setting() {
	system("cls");
	cout << "[+]Setting" << endl;
	cout << "==============================" << endl;
	cout << "[1]\x1b[" << crossColor << "m���� �������� \x1b[0m" << endl;
	cout << "[2]\x1b[" << roundelColor << "m���� ������ \x1b[0m" << endl;
	cout << "[3]��� ����� ������  < \x1b[7m" << firstMovestr << "\x1b[0m >" << endl;
	cout << "[4]������ ����       < \x1b[7m" << sizeFieldstr << "\x1b[0m >" << endl;
	cout << "[5]����" << endl;
	cout << "==============================" << endl;
	cout << "Enter your choise: ";
	int settingChoise;
	cin >> settingChoise;

	switch (settingChoise)
	{
		//���� ��������
	case 1: {
		getCrossColors();
		system("cls");
		setting();
		break;
	}
		  //���� ������
	case 2: {
		getRoundelColors();
		system("cls");
		setting();
		break;
	}
		  //��� ������ �����
	case 3: {
		whoseFirstmove();
		system("cls");
		setting();
		break;
	}
	case 4: {
		getSizeField();
		system("cls");
		setting();
		break;
	}
	case 5: {
		return 0;
		break;
	}
	default:
		break;
	}
}

//�������
int getRules() {
	system("cls");
	cout << "[+]�������" << endl;
	cout << "========================================================================================================================" << endl;
	cout << "��������-������ � ���������� ���� ����� ����� ������������ �� ���������� ���� 3 �� 3 ������ ��� �������� �������" << endl;
	cout << "(������ �� ������������� �����).���� �� ������� ������ �����������, ������ � ���������.� ������������ ���������" << endl;
	cout << "���� ������������ ������ � ����� �����." << endl;
	cout << "������ �� ������� ������ �� ��������� ������ ���� 3�3 �����(���� ������ ��������, ������ ������ ������). ������, " << endl;
	cout << "����������� � ��� 3 ����� ����� �� ���������, ����������� ��� ���������, ����������.������ ��� ������ �����, " << endl;
	cout << "�������� ��������." << endl;
	cout << "������ �� ���������� ������ ���������� ������� ����������� ������ ���� ��� �����(������ ��� ��������), " << endl;
	cout << "������������ �������� ���." << endl;
	cout << "========================================================================================================================" << endl;
	cout << "[0]����" << endl;
	cout << "Enter your choise: ";
	int returnMenu;
	cin >> returnMenu;
	return 0;
}

int main() {
	setlocale(0, "");

	//menu
	{
		cout << "[+]����" << endl;
		cout << "==============================" << endl;
		cout << "[1]������ ����" << endl;
		cout << "[2]���������" << endl;
		cout << "[3]�������" << endl;
		cout << "[4]�����" << endl;
		cout << "==============================" << endl;
		cout << "Enter your choise: ";
	}
	int menuChoise;
	cin >> menuChoise;
	switch (menuChoise)
	{
	case 1: {
		startGame();
		system("cls");
		main();
		break;
	}
	case 2: {
		int returnMenu = setting();
		if (returnMenu == 0) {
			system("cls");
			main();
		}
		break;
	}
	case 3: {
		getRules();
		system("cls");
		main();
		break;
	}
	default:
		system("cls");
		cout << "�� ����� ������ �����? Y/N" << endl;
		char quit;
		cin >> quit;
		if (quit == 'Y' or quit == 'y') {
			return 0;
		}
		else if (quit == 'N' or quit == 'n') {
			system("cls");
			main();
		}
	}
}
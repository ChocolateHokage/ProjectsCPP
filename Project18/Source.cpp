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
int firstMove = 1;
string firstMovestr = "Player";
int sizeField = 1;
string sizeFieldstr = "3 X 3";

//���������� ����
int getField(int sizeField) {
	switch (sizeField) {
	case 1: {
		system("cls");
		for (char i = '1'; i <= '9'; i++) {

			cout << "  \x1b[90m" << i << "\x1b[0m  ";
			if (i % 3 == 0 and i < '7') {
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
		cout << "   \x1b[90m1\x1b[0m  |   \x1b[90m2\x1b[0m  |   \x1b[90m3\x1b[0m  |   \x1b[90m4\x1b[0m  " << endl;
		cout << "---------------------------" << endl;
		cout << "   \x1b[90m5\x1b[0m  |   \x1b[90m6\x1b[0m  |   \x1b[90m7\x1b[0m  |   \x1b[90m8\x1b[0m  " << endl;
		cout << "---------------------------" << endl;
		cout << "   \x1b[90m9\x1b[0m  |  \x1b[90m10\x1b[0m  |  \x1b[90m11\x1b[0m  |  \x1b[90m12\x1b[0m  " << endl;
		cout << "---------------------------" << endl;
		cout << "  \x1b[90m13\x1b[0m  |  \x1b[90m14\x1b[0m  |  \x1b[90m15\x1b[0m  |  \x1b[90m16\x1b[0m  " << endl;
		break;
	}
	case 3: {
		system("cls");
		cout << "   \x1b[90m1\x1b[0m  |   \x1b[90m2\x1b[0m  |   \x1b[90m3\x1b[0m  |   \x1b[90m4\x1b[0m  |   \x1b[90m5\x1b[0m  " << endl;
		cout << "----------------------------------" << endl;
		cout << "   \x1b[90m6\x1b[0m  |   \x1b[90m7\x1b[0m  |   \x1b[90m8\x1b[0m  |   \x1b[90m9\x1b[0m  |  \x1b[90m10\x1b[0m  " << endl;
		cout << "----------------------------------" << endl;
		cout << "  \x1b[90m11\x1b[0m  |  \x1b[90m12\x1b[0m  |  \x1b[90m13\x1b[0m  |  \x1b[90m14\x1b[0m  |  \x1b[90m15\x1b[0m  " << endl;
		cout << "----------------------------------" << endl;
		cout << "  \x1b[90m16\x1b[0m  |  \x1b[90m17\x1b[0m  |  \x1b[90m18\x1b[0m  |  \x1b[90m19\x1b[0m  |  \x1b[90m20\x1b[0m  " << endl;
		cout << "----------------------------------" << endl;
		cout << "  \x1b[90m21\x1b[0m  |  \x1b[90m22\x1b[0m  |  \x1b[90m23\x1b[0m  |  \x1b[90m24\x1b[0m  |  \x1b[90m25\x1b[0m  " << endl;
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

int getPCStep(int arrSize, int arr[]) {
	for (int i = 0; i < arrSize; i++) {

	}
	int _;
	cin >> _;
	return 0;
}
//������ ����
int startGame() {
	int gameModeChoise = getGameMode();

	if (gameModeChoise == 1) {
		getField(sizeField);
		switch (sizeField) {
		case 1: {
			int arrField3[3]{};
			if (firstMove == 1) {
				getPCStep(3, arrField3);
			}
			else if (firstMove == 2) {

			}
		}
		case 2: {
			int arrField4[4][4];
		}
		case 3: {
			int arrField5[5][5];
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
	cout << "[+]����������� ����" << endl;
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
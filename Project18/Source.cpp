#include <iostream>
using namespace std;

int crossColor = 0;
int roundelColor = 0;
int firstMove = 2;
string firstMovestr = "Player";
string lustMovestr = "PC";
int sizeField = 3;
string sizeFieldstr = "3 X 3";
int arrField3[9]{};
int arrField4[16]{};
int arrField5[25]{};
// 1 - O
// 3 - X
// 0 - index

int checkWinner(int arr[], int sizeField) {
	for (int i = 0; i < sizeField - 2; i += sizeField) {
		for (int j = 0; j < sizeField; j++) {
			if ((arr[i + j] == 3 && arr[i + (j + 1)] == 3 && arr[i + (j + 2)] == 3) || (arr[(i + sizeField) + j] == 3 && arr[(i + (sizeField * 2)) + j] == 3 && arr[i + j] == 3) || (arr[i + j] == 3 && arr[(i + sizeField) + (j + 1)] == 3 && arr[(i + (sizeField * 2)) + (j + 2)] == 3)) {
				return 3;
			}
			else if ((arr[i + j] == 1 && arr[i + (j + 1)] == 1 && arr[i + (j + 2)] == 1) || (arr[(i + sizeField) + j] == 1 && arr[(i + (sizeField * 2)) + j] == 1 && arr[i + j] == 1) || (arr[i + j] == 1 && arr[(i + sizeField) + (j + 1)] == 1 && arr[(i + (sizeField * 2)) + (j + 2)] == 1)) {
				return 1;
			}
		}
	}
	bool freeSpace = 0;
	for (int i = 0; i < sizeField * sizeField; i++) {
		if (arr[i] == 0) {
			freeSpace = 1;
			break;
		}
		else if (arr[i] != 0)
		{
			freeSpace = 0;
		}
	}
	if (freeSpace) {
		return 0;
	}
	else if (!freeSpace) {
		return 2;
	}
}

//���������� ����
int getField(int sizeField) {
	switch (sizeField) {
	case 3: {
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
	case 4: {
		system("cls");
		for (int i = 1; i <= 16; i++) {
			if (arrField4[i - 1] == 1) {
				cout << "  \x1b[" << roundelColor << "mO\x1b[0m  ";
			}
			else if (arrField4[i - 1] == 3) {
				cout << "  \x1b[" << crossColor << "mX\x1b[0m  ";
			}
			else {
				cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}

			if (i % 4 == 0 and i < 13) {
				cout << "\n-----------------\n";
			}
			else if (i % 4 != 0) {
				cout << "|";
			}
		}
		break;
	}
	case 5: {
		system("cls");
		for (int i = 1; i <= 25; i++) {
			if (arrField5[i - 1] == 1) {
				cout << "  \x1b[" << roundelColor << "mO\x1b[0m  ";
			}
			else if (arrField5[i - 1] == 3) {
				cout << "  \x1b[" << crossColor << "mX\x1b[0m  ";
			}
			else {
				cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}

			if (i % 5 == 0 and i < 21) {
				cout << "\n-----------------\n";
			}
			else if (i % 5 != 0) {
				cout << "|";
			}
		}
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

int getEndGameMenu() {
	cout << "\n[1]������ ������\n";
	cout << "[2]� ����\n";
	cout << "Enter your choise: ";
	int endGameChoise;
	cin >> endGameChoise;
	if (endGameChoise == 1) {
		return 1;
	}
	else if (endGameChoise == 2) {
		return 0;
	}
}

int nullifyArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	return 0;
}

//������ ����
int startGame() {
	int gameModeChoise = getGameMode();
	nullifyArray(arrField3, 9);
	nullifyArray(arrField4, 16);
	nullifyArray(arrField5, 25);
	//firstMove = 1 (PC)
	//firstMove = 2 (Player)
	//���� 3�3
	if (sizeField == 3) {
		//���� ��������� ����
		if (gameModeChoise == 1) {
			getField(3);
			//���� ������ ��� ��
			if (firstMove == 1) {
				int i = 1;
				while (i <= 9) {
					getPCStep(9, arrField3, 3);
					int winner = checkWinner(arrField3, 3);
					//���� ������� �������
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//���� ������� �����
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//���� �����
					else if (winner == 2) {
						cout << "\n===================================\n���, ����� ";
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					if (i <= 4)
						getPlayerStep(9, arrField3, 1);
					winner = checkWinner(arrField3, sizeField);
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//���� �����
					else if (winner == 2) {
						cout << "\n===================================\n���, ����� ";
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
				}
			}
			//���� ������ ��� ������
			else if (firstMove == 2) {
				for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
					getPlayerStep(sizeField * sizeField, arrField3, 3);
					int winner = checkWinner(arrField3, sizeField);
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 2) {
						cout << "\n===================================\n���, ����� ";
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					getPCStep(sizeField * sizeField, arrField3, 1);
					winner = checkWinner(arrField3, sizeField);
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 2) {
						cout << "\n===================================\n���, ����� ";
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
				}
			}
		}
		//���� ��� ������ 
		else if (gameModeChoise == 2) {
			getField(sizeField);
			for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
				getPlayerStep(sizeField * sizeField, arrField3, 3);
				int winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: Player2";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				if (i <= sizeField * sizeField / 2)
					getPlayerStep(sizeField * sizeField, arrField3, 1);
				winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: Player2";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		else if (gameModeChoise == 0) {
			return 0;
		}
	}
	else if (sizeField == 4) {
		if (gameModeChoise == 1) {
			getField(4);
			//���� ������ ��� ��
			if (firstMove == 1) {
				for (int i = 1; i <= 16; i++) {
					getPCStep(16, arrField4, 3);
					int winner = checkWinner(arrField4, 3);
					//���� ������� �������
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//���� ������� �����
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					if (i <= 4)
						getPlayerStep(16, arrField4, 1);
					winner = checkWinner(arrField4, sizeField);
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
				}
			}
		}
		//���� ������ ��� ������
		else if (firstMove == 2) {
			for (int i = 1; i < 16; i++) {
				getPCStep(16, arrField4, 3);
				int winner = checkWinner(arrField4, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: " << lustMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				getPlayerStep(16, arrField4, 1);
				winner = checkWinner(arrField4, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: " << lustMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		//���� ��� ������ 
		else if (gameModeChoise == 2) {
			getField(sizeField);
			for (int i = 1; i < 16; i++) {
				getPlayerStep(16, arrField4, 3);
				int winner = checkWinner(arrField4, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: Player2";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				if (i < 16)
					getPlayerStep(16, arrField4, 1);
				winner = checkWinner(arrField4, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: Player2";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		else if (gameModeChoise == 0) {
			return 0;
		}
	}
	else if (sizeField == 5) {
		if (gameModeChoise == 1) {
			getField(3);
			//���� ������ ��� ��
			if (firstMove == 1) {
				for (int i = 1; i <= 9; i++) {
					getPCStep(9, arrField3, 3);
					int winner = checkWinner(arrField3, 3);
					//���� ������� �������
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//���� ������� �����
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					if (i <= 4)
						getPlayerStep(9, arrField3, 1);
					winner = checkWinner(arrField3, sizeField);
					if (winner == 3) {
						cout << "\n===================================\n�������: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\n�������: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
				}
			}
		}
		//���� ������ ��� ������
		else if (firstMove == 2) {
			for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
				getPCStep(sizeField * sizeField, arrField3, 3);
				int winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: " << lustMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				getPlayerStep(sizeField * sizeField, arrField3, 1);
				winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: " << lustMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		//���� ��� ������ 
		else if (gameModeChoise == 2 && sizeField == 3) {
			getField(sizeField);
			for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
				getPlayerStep(sizeField * sizeField, arrField3, 3);
				int winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: Player2";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				if (i <= sizeField * sizeField / 2)
					getPlayerStep(sizeField * sizeField, arrField3, 1);
				winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\n�������: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\n�������: Player2";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		else if (gameModeChoise == 0) {
			return 0;
		}
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
		lustMovestr = "Player";
		firstMove = 1;
		whoseFirstmove();
	}
	else if (firstMoveChoise == 2) {
		firstMovestr = "Player";
		lustMovestr = "PC";
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
		sizeField = 3;
		getSizeField();
		break;
	}
	case 2: {
		sizeFieldstr = "4 X 4";
		sizeField = 4;
		getSizeField();
		break;
	}
	case 3: {
		sizeFieldstr = "5 X 5";
		sizeField = 5;
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
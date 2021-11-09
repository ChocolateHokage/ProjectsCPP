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

//нарисовать поле
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
//крестики ходят первыми!!!

//Одиночная/два игрока
int getGameMode() {
	system("cls");
	cout << "[+]Game Mode" << endl;
	cout << "==============================" << endl;
	cout << "[1]Одиночная" << endl;
	cout << "[2]Два игрока" << endl;
	cout << "[0]Назад" << endl;
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
		cout << "\nВыберите ячейку: ";
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
	cout << "\n[1]Начать заново\n";
	cout << "[2]В меню\n";
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

//начать игру
int startGame() {
	int gameModeChoise = getGameMode();
	nullifyArray(arrField3, 9);
	nullifyArray(arrField4, 16);
	nullifyArray(arrField5, 25);
	//firstMove = 1 (PC)
	//firstMove = 2 (Player)
	//если 3х3
	if (sizeField == 3) {
		//если одиночная игра
		if (gameModeChoise == 1) {
			getField(3);
			//если первый ход ПК
			if (firstMove == 1) {
				int i = 1;
				while (i <= 9) {
					getPCStep(9, arrField3, 3);
					int winner = checkWinner(arrField3, 3);
					//если победил крестик
					if (winner == 3) {
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//если победил нолик
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//если ничья
					else if (winner == 2) {
						cout << "\n===================================\nУвы, Ничья ";
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
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//если ничья
					else if (winner == 2) {
						cout << "\n===================================\nУвы, Ничья ";
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
				}
			}
			//если первый ход игрока
			else if (firstMove == 2) {
				for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
					getPlayerStep(sizeField * sizeField, arrField3, 3);
					int winner = checkWinner(arrField3, sizeField);
					if (winner == 3) {
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 2) {
						cout << "\n===================================\nУвы, Ничья ";
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
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 2) {
						cout << "\n===================================\nУвы, Ничья ";
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
		//если два игрока 
		else if (gameModeChoise == 2) {
			getField(sizeField);
			for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
				getPlayerStep(sizeField * sizeField, arrField3, 3);
				int winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\nПобедил: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: Player2";
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
					cout << "\n===================================\nПобедил: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: Player2";
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
			//если первый ход ПК
			if (firstMove == 1) {
				for (int i = 1; i <= 16; i++) {
					getPCStep(16, arrField4, 3);
					int winner = checkWinner(arrField4, 3);
					//если победил крестик
					if (winner == 3) {
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//если победил нолик
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
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
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
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
		//если первый ход игрока
		else if (firstMove == 2) {
			for (int i = 1; i < 16; i++) {
				getPCStep(16, arrField4, 3);
				int winner = checkWinner(arrField4, sizeField);
				if (winner == 3) {
					cout << "\n===================================\nПобедил: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: " << lustMovestr;
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
					cout << "\n===================================\nПобедил: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: " << lustMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		//если два игрока 
		else if (gameModeChoise == 2) {
			getField(sizeField);
			for (int i = 1; i < 16; i++) {
				getPlayerStep(16, arrField4, 3);
				int winner = checkWinner(arrField4, sizeField);
				if (winner == 3) {
					cout << "\n===================================\nПобедил: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: Player2";
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
					cout << "\n===================================\nПобедил: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: Player2";
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
			//если первый ход ПК
			if (firstMove == 1) {
				for (int i = 1; i <= 9; i++) {
					getPCStep(9, arrField3, 3);
					int winner = checkWinner(arrField3, 3);
					//если победил крестик
					if (winner == 3) {
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					//если победил нолик
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
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
						cout << "\n===================================\nПобедил: " << firstMovestr;
						if (getEndGameMenu() == 1) {
							startGame();
						}
						else if (getEndGameMenu() == 0) {
							return 0;
						}
					}
					else if (winner == 1) {
						cout << "\n===================================\nПобедил: " << lustMovestr;
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
		//если первый ход игрока
		else if (firstMove == 2) {
			for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
				getPCStep(sizeField * sizeField, arrField3, 3);
				int winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\nПобедил: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: " << lustMovestr;
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
					cout << "\n===================================\nПобедил: " << firstMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: " << lustMovestr;
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
			}
		}
		//если два игрока 
		else if (gameModeChoise == 2 && sizeField == 3) {
			getField(sizeField);
			for (int i = 1; i <= (sizeField * sizeField + 1) / 2; i++) {
				getPlayerStep(sizeField * sizeField, arrField3, 3);
				int winner = checkWinner(arrField3, sizeField);
				if (winner == 3) {
					cout << "\n===================================\nПобедил: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: Player2";
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
					cout << "\n===================================\nПобедил: Player1";
					if (getEndGameMenu() == 1) {
						startGame();
					}
					else if (getEndGameMenu() == 0) {
						return 0;
					}
				}
				else if (winner == 1) {
					cout << "\n===================================\nПобедил: Player2";
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

//Выбор цвета
int getCrossColors() {
	system("cls");
	cout << "[+]Colors" << endl;
	cout << "==============================" << endl;

	for (int i = 89; i <= 97; i++) {
		cout << i << " = \x1b[" << i << "m Cross_Color \x1b[0m" << endl;
	}
	cout << "==============================" << endl;
	cout << "[0]Назад" << endl;
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
	cout << "[0]Назад" << endl;
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

//кто первый ходит
int whoseFirstmove() {
	system("cls");
	cout << "[+]Очередность хода(only for single mode)" << endl;
	cout << "===============================" << endl;
	cout << "[1]PC начинает" << endl;
	cout << "[2]Игрок начинает" << endl;
	cout << "[0]Назад" << endl;
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

//Размер поля
int getSizeField() {
	system("cls");
	cout << "[+]Размер поля" << endl;
	cout << "==============================" << endl;
	cout << "[1] 3 X 3   " << endl;
	cout << "[2] 4 X 4   " << endl;
	cout << "[3] 5 X 5   " << endl;
	cout << "[0]Назад" << endl;
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
//Настройки
int setting() {
	system("cls");
	cout << "[+]Setting" << endl;
	cout << "==============================" << endl;
	cout << "[1]\x1b[" << crossColor << "mЦвет крестика \x1b[0m" << endl;
	cout << "[2]\x1b[" << roundelColor << "mЦвет нолика \x1b[0m" << endl;
	cout << "[3]Кто ходит первым  < \x1b[7m" << firstMovestr << "\x1b[0m >" << endl;
	cout << "[4]Размер поля       < \x1b[7m" << sizeFieldstr << "\x1b[0m >" << endl;
	cout << "[5]Меню" << endl;
	cout << "==============================" << endl;
	cout << "Enter your choise: ";
	int settingChoise;
	cin >> settingChoise;

	switch (settingChoise)
	{
		//Цвет крестика
	case 1: {
		getCrossColors();
		system("cls");
		setting();
		break;
	}
		  //цвет нолика
	case 2: {
		getRoundelColors();
		system("cls");
		setting();
		break;
	}
		  //Кто первый ходит
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

//Правила
int getRules() {
	system("cls");
	cout << "[+]Правила" << endl;
	cout << "========================================================================================================================" << endl;
	cout << "Крестики-нолики — логическая игра между двумя противниками на квадратном поле 3 на 3 клетки или большего размера" << endl;
	cout << "(вплоть до «бесконечного поля»).Один из игроков играет «крестиками», второй — «ноликами».В традиционной китайской" << endl;
	cout << "игре используются черные и белые камни." << endl;
	cout << "Игроки по очереди ставят на свободные клетки поля 3х3 знаки(один всегда крестики, другой всегда нолики). Первый, " << endl;
	cout << "выстроивший в ряд 3 своих фигур по вертикали, горизонтали или диагонали, выигрывает.Первый ход делает игрок, " << endl;
	cout << "ставящий крестики." << endl;
	cout << "Обычно по завершении партии выигравшая сторона зачёркивает чертой свои три знака(нолика или крестика), " << endl;
	cout << "составляющих сплошной ряд." << endl;
	cout << "========================================================================================================================" << endl;
	cout << "[0]Меню" << endl;
	cout << "Enter your choise: ";
	int returnMenu;
	cin >> returnMenu;
	return 0;
}

int main() {
	setlocale(0, "");

	//menu
	{
		cout << "[+]Меню" << endl;
		cout << "==============================" << endl;
		cout << "[1]Начать игру" << endl;
		cout << "[2]Настройки" << endl;
		cout << "[3]Правила" << endl;
		cout << "[4]Выйти" << endl;
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
		cout << "Вы точно хотите выйти? Y/N" << endl;
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
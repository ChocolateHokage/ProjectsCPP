#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int arrAns[4]{};
int arrQue[15]{};
int QuesEdge = 15;
int lifes = 3;
int getCorrectChoise(int bEdge, int tEdge, int sItem) {
	while (true) {
		cout << "\nВведите ваш выбор: ";
		int choise;
		cin >> choise;
		if ((cin.fail() || choise < bEdge || choise > tEdge) && choise != sItem) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			return choise;
		}
	}
}

string quiz[15][6] = {
	{"Кто ебал Сурину?","Орлов","Николаенко","Бастрыкин","Сидельников","Сидельников"},
	{"Вопрос 2","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 3","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 4","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 5","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 6","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 7","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 8","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 9","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 10","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 11","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 12","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 13","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 14","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"},
	{"Вопрос 15","Ответ 1","Ответ 2","Ответ 3","Ответ 4","Ответ 4"}
};
int setRandom(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	bool a = 1;
	for (int i = 0; i < size; i++) {
		int randNum = rand() % size + 1;
		for (int j = 0; j < size; j++) {
			if (randNum == arr[j]) {
				a = 0;
				break;
			}
			else if (randNum != arr[j]) {
				a = 1;
			}
		}
		if (a) {
			arr[i] = randNum;
		}
		else {
			i--;
		}
	}
	return 0;
}

//int getQuestion() {
//	int quesNum = rand() % 15;
//	int ansNum;
//
//	cout << quiz[quesNum][0];
//	for (int i = 0; i < 4; i++) {
//			setRandom(arrAns);
//		cout << "\n[" << i << "]" << quiz[quesNum][ansNum];
//	}
//	return 0;
//}

int startQuiz() {
	setRandom(arrQue, 15);
	for (int i = 0; i < QuesEdge; i++) {
		system("cls");
		
		setRandom(arrAns, 4);
		cout << "Вопрос №" << i + 1 << endl;
		cout << quiz[arrQue[i] - 1][0] << endl;
		for (int j = 0; j < 4; j++) {
			cout << "[" << j + 1 << "]" << quiz[arrQue[i]-1][arrAns[j]] << endl;
		}
		int choise = getCorrectChoise(1, 4, 9);
		if (quiz[arrQue[i-1] - 1][arrAns[choise - 1]] == quiz[arrQue[i - 1] - 1][5]) {
			cout << "\n\x1b[92mПравильно!!!\x1b[0m";
		}
		else {
			lifes--;
			cout << "\n\x1b[91mНеверно!!!\x1b[0m";
		}
		cout << "\n==================\n";
		Sleep(3000);
	}
	return 0;
}

int main() {
	srand(time(0));
	setlocale(0, "");
	system("cls");
	cout << "[+] Меню\n===========================\n[1]Начать викторину\n[2]Настройки\n[4]Выход\n";
	int menuChoise;
	cin >> menuChoise;
	switch (menuChoise)
	{
	case 1: {
		system("cls");
		startQuiz();
	}
	default:
		break;
	}
	return 0;
}
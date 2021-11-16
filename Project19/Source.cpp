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
		cout << "\n������� ��� �����: ";
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
	{"��� ���� ������?","�����","����������","���������","�����������","�����������"},
	{"������ 2","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 3","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 4","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 5","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 6","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 7","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 8","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 9","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 10","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 11","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 12","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 13","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 14","����� 1","����� 2","����� 3","����� 4","����� 4"},
	{"������ 15","����� 1","����� 2","����� 3","����� 4","����� 4"}
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
		cout << "������ �" << i + 1 << endl;
		cout << quiz[arrQue[i] - 1][0] << endl;
		for (int j = 0; j < 4; j++) {
			cout << "[" << j + 1 << "]" << quiz[arrQue[i]-1][arrAns[j]] << endl;
		}
		int choise = getCorrectChoise(1, 4, 9);
		if (quiz[arrQue[i-1] - 1][arrAns[choise - 1]] == quiz[arrQue[i - 1] - 1][5]) {
			cout << "\n\x1b[92m���������!!!\x1b[0m";
		}
		else {
			lifes--;
			cout << "\n\x1b[91m�������!!!\x1b[0m";
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
	cout << "[+] ����\n===========================\n[1]������ ���������\n[2]���������\n[4]�����\n";
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
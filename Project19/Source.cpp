#include <iostream>
#include <ctime>
using namespace std;

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
//
string arrQuestions[15][5] = {
	{"������ 1","����� 1","����� 2","����� 3","����� 4"},
	{"������ 2","����� 1","����� 2","����� 3","����� 4"},
	{"������ 3","����� 1","����� 2","����� 3","����� 4"},
	{"������ 4","����� 1","����� 2","����� 3","����� 4"},
	{"������ 5","����� 1","����� 2","����� 3","����� 4"},
	{"������ 6","����� 1","����� 2","����� 3","����� 4"},
	{"������ 7","����� 1","����� 2","����� 3","����� 4"},
	{"������ 8","����� 1","����� 2","����� 3","����� 4"},
	{"������ 9","����� 1","����� 2","����� 3","����� 4"},
	{"������ 10","����� 1","����� 2","����� 3","����� 4"},
	{"������ 11","����� 1","����� 2","����� 3","����� 4"},
	{"������ 12","����� 1","����� 2","����� 3","����� 4"},
	{"������ 13","����� 1","����� 2","����� 3","����� 4"},
	{"������ 14","����� 1","����� 2","����� 3","����� 4"},
	{"������ 15","����� 1","����� 2","����� 3","����� 4"}
	};
int checkDuplicate() {

}
int getQuestion() {
	system("cls");
	srand(time(0));
	int quesNum = rand()%15;
	int ansNum;
	cout << arrQuestions[quesNum][0];
	for (int i = 1; i <= 4; i++) {
		ansNum = rand() % 4+1;
		cout << "\n["<<i<<"]" << arrQuestions[quesNum][ansNum];
	}
	return 0;
}
int startQuiz() {
	for (int i = 0; i < 15; i++) {
		getQuestion();
	}
	return 0;
}

int main() {
	setlocale(0, "");
	system("cls");
	cout << "[+] ����\n===========================\n[1]������ ���������\n[2]���������\n[4]�����\n";
	int menuChoise;
	cin >> menuChoise;
	switch (menuChoise)
	{
	case 1: {
		startQuiz();
	}
	default:
		break;
	}
	return 0;
}
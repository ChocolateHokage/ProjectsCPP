#include <iostream>
#include <ctime>
using namespace std;

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
//
string arrQuestions[15][5] = {
	{"Вопрос 1","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 2","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 3","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 4","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 5","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 6","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 7","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 8","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 9","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 10","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 11","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 12","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 13","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 14","Ответ 1","Ответ 2","Ответ 3","Ответ 4"},
	{"Вопрос 15","Ответ 1","Ответ 2","Ответ 3","Ответ 4"}
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
	cout << "[+] Меню\n===========================\n[1]Начать викторину\n[2]Настройки\n[4]Выход\n";
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
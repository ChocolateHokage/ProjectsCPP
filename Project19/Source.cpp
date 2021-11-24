
#include <iostream>
#include <ctime>
#include <string.h>
#include <Windows.h>
#include <thread>
using namespace std;

int arrAns[4]{};
int arrQue[15]{};
int lifes = 3;
int hint = 0;
int totalTime = 15 * 60;
int qAmount = 10;
int corrAnsAmount = 0;
int pointsAmount = 0;
bool endFlag = 1;
bool endFlagTime = 1;
short x;
short y;

void gotoxy(int column, int line) {
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int wherex() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD result{};
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return -1;
	return csbi.dwCursorPosition.X;
}

int wherey() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD result{};
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return -1;
	return csbi.dwCursorPosition.Y;
}


int getCorrectChoise(int bEdge, int tEdge, int sItem) {
	while (true) {
		cout << "\n\x1b[97mВведите ваш выбор: \x1b[0m";
		x = wherex();
		y = wherey();
		gotoxy(x, y);
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
	{"Каков правильный синтаксис для вывода \"Hello World\" в C++?","cout << \"Hello World\";","Console.WriteLine(\"Hello World\");","System.out.println(\"Hello World\");","print(\"Hello World\"); ","cout << \"Hello World\";"},
	{"Как вставляются комментарии в С++?","/*Это комментарий","#Это комментарий","//Это комментарий","<!--Это комментарий-->","//Это комментарий"},
	{"Какой оператор используется для остановки цикла?","return","break","stop ","exit ","break"},
	{"Какое ключевое слово используется для возврата значения из функции?","break","get","void","return","return"},
	{"С чего начинается цикл while?","while x > y {","while x > y:","while (x > y)","x > y while {","while (x > y)"},
	{"Как создать ссылочную переменную существующей переменной?","REF","*","&","ref","&"},
	{"Какой тип данных используется для создания переменной, в которой должен храниться текст?","Txt","String","myString","string","string"},
	{"Как создать переменную с числовым значением 5?","num x = 5","x = 5;","double x = 5;","int x = 5;","int x = 5;"},
	{"Как создать переменную с числом с плавающей точкой?","double x = 2.8;","byte x = 2.8","int x = 2.8;","x = 2.8","double x = 2.8;"},
	{"Какой метод можно использовать для определения длины строки?","len()","getSize()","length()","getLength","length()"},
	{"Какой заголовочный файл позволяет нам работать с объектами ввода и вывода?","#include <inputstr>","#include <iosstring>","#include <iostream>","#include <stream>","#include <iostream>"},
	{"Какой оператор используется для сравнения двух значений?","=","><","<>","==","=="},
	{"Как создаются функции в C++?","functionName[]","functionName","functionName()","(functionName)","functionName()"},
	{"Как вызываются функции в C++?","functionName[];","functionName;","functionName();","(functionName);","functionName();"},
	{"Какой метод можно использовать, чтобы найти наибольшее значение из x и y?","maxNum(x,y)","max(x,y)","maximum(x,y)","largest(x,y)","max(x,y)"}
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

void getAnswers(int i, bool isHint) {
	x = 0;
	y = 1;
	cout << "\n\x1b[95mВопрос №" << i << "\x1b[0m" << endl;
	cout << quiz[arrQue[i - 1] - 1][0] << endl;
	if (isHint) {
		int r = rand() % 4;
		while (quiz[arrQue[i - 1] - 1][arrAns[r]] == quiz[arrQue[i - 1] - 1][5]) {
			r = rand() % 4;
		}
		int a = 0;
		for (int j = 0; j < 4; j++) {
			if (((quiz[arrQue[i - 1] - 1][arrAns[j]] == quiz[arrQue[i - 1] - 1][5]) || (quiz[arrQue[i - 1] - 1][arrAns[j]] == quiz[arrQue[i - 1] - 1][arrAns[r]])) && a < 2) {
				cout << "[" << j + 1 << "]" << quiz[arrQue[i - 1] - 1][arrAns[j]] << endl;;
			}
			else {
				cout << "[" << j + 1 << "]*****************" << endl;;
			}
		}
		isHint = 0;
	}
	else {
		for (int j = 0; j < 4; j++) {
			cout << "[" << j + 1 << "]" << quiz[arrQue[i - 1] - 1][arrAns[j]] << endl;
		}
	}
}

void getEndInfo(int gHint) {
	cout << "Отвечено правильно: \x1b[92m" << corrAnsAmount << "/" << qAmount << "\x1b[0m\nИспользовано подсказок \x1b[92m" << hint - gHint << "/" << hint << "\n\x1b[0mКоличество набранных баллов : " << pointsAmount << endl;
}

void setTimer(int time) {
	COORD output;
	output.X = 0;
	output.Y = 0;
	COORD input1;
	input1.X = x;
	input1.Y = y;
	CONSOLE_CURSOR_INFO cursorinfo;
	Sleep(150);
	while (time >= 0 && endFlag) {
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), output);
		cursorinfo.bVisible = false;
		if (time % 60 < 10) {
			cout << "" << time / 60 << ":0" << time % 60;
		}
		else {
			cout << "" << time / 60 << ":" << time % 60;
		}
		gotoxy(x, y);
		Sleep(1000);

		if (time == 0) {
			endFlagTime = 0;
			return;
		}
		time--;
	}
}

int startQuiz() {
	thread t(setTimer, totalTime);
	int lifesInt = lifes;
	int gHint = hint;
	endFlag = 1;
	corrAnsAmount = 0;
	endFlagTime = 1;
	setRandom(arrQue, 15);
	for (int i = 1; i <= qAmount && endFlagTime && endFlag; i++) {
		system("cls");
		if (lifesInt > 0) {
			setRandom(arrAns, 4);
			getAnswers(i, 0);
			int choise = getCorrectChoise(1, 4, 5);
			if (choise == 5 && gHint > 0) {
				gHint--;
				system("cls");
				cout << "\nИспользована подсказка. Осталось: " << gHint << endl;
				getAnswers(i, 1);
				choise = getCorrectChoise(1, 4, 5);
			}
			else if (choise == 5 && gHint < 1) {
				system("cls");
				cout << "\nУ вас не осталось подсказок " << endl;
				getAnswers(i, 0);
				choise = getCorrectChoise(1, 4, 4);
			}
			if (quiz[arrQue[i - 1] - 1][arrAns[choise - 1]] == quiz[arrQue[i - 1] - 1][5]) {
				pointsAmount++;
				cout << "\n\x1b[92mПравильно!!!\x1b[0m\nКоличество очков: " << pointsAmount;
				corrAnsAmount++;
			}
			else {
				lifesInt--;
				cout << "\n\x1b[91mНеверно!!!\x1b[0m";
			}
			cout << "\n==================\n";
			Sleep(400);
		}
		else {
			cout << "Вы ошиблись максимальное количество раз. Игра закончена\n";
			endFlag = 0;
			getEndInfo(gHint);
			system("PAUSE");
			t.detach();
			return 0;
		}
	}
	if (endFlagTime == 0) {
		cout << "\x1b[95mВремя вышло\n\x1b[0m";
	}
	else {
		cout << "\x1b[95mВы ответили на все вопросы\n\x1b[0m";
	}
	getEndInfo(gHint);
	system("pause");
	t.detach();
	return 0;
}

void getQAmount() {
	system("cls");
	cout << "[#] \x1b[4mКоличество вопросов\x1b[0m		< \x1b[92m" << qAmount << "\x1b[0m >" << endl;
	cout << "==============================" << endl;
	cout << "\x1b[32m[1]\x1b[0m 5\n";
	cout << "\x1b[32m[2]\x1b[0m 10\n";
	cout << "\x1b[32m[3]\x1b[0m 15\n";
	cout << "==============================";
	int qAmountChoise = getCorrectChoise(1, 3, 1);
	switch (qAmountChoise) {
	case 1:
		qAmount = 5;
		break;
	case 2:
		qAmount = 10;
		break;
	case 3:
		qAmount = 15;
		break;
	default: {
		cout << "\nВы ввели неправильное значение и сломали программу";
	}
	}
}
void getLifes() {
	system("cls");
	cout << "[#] \x1b[4mКоличество прав на ошибку\n\x1b[0m\n\x1b[32m1\x1b[0m - < \x1b[92m" << lifes << "\x1b[0m > - \x1b[32m5\x1b[0m" << endl;
	cout << "==============================" << endl;
	cout << "Выбор происходит путем введения количества прав на ошибку от 1 до 5 включительно\n";
	lifes = getCorrectChoise(1, 5, 0);
}
void getHint() {
	system("cls");
	cout << "[#] \x1b[4mКоличество подсказок 50 / 50\n\x1b[0m\n\x1b[32m0\x1b[0m - < \x1b[92m" << hint << "\x1b[0m > - \x1b[32m5\x1b[0m" << endl;
	cout << "==============================\n";
	cout << "Выбор происходит путем введения количества подсказок от 0 до 5 включительно\n";
	hint = getCorrectChoise(1, 5, 0);
}
void getTime() {
	system("cls");
	cout << "[#] \x1b[4mВремя на викторину\x1b[0m\n\n\x1b[32m0\x1b[0m - < \x1b[92m" << totalTime / 60 << "\x1b[0m > - \x1b[32m15\x1b[0m" << endl;
	cout << "==============================\n";
	cout << "Выбор происходит путем введения времени в минутах от 1 до 15 включительно\n";
	totalTime = getCorrectChoise(1, 15, 0) * 60;
}
int setting() {
	system("cls");
	cout << "[#]\x1b[4mНастройки\x1b[0m" << endl;
	cout << "==============================" << endl;
	cout << "\x1b[32m[1]\x1b[0mКоличество вопросов		|  < \x1b[1m" << qAmount << "\x1b[0m >" << endl;
	cout << "\x1b[32m[2]\x1b[0mКоличество прав на ошибку	|  < \x1b[1m" << lifes << "\x1b[0m > " << endl;
	cout << "\x1b[32m[3]\x1b[0mКоличество подсказок 50/50	|  < \x1b[1m" << hint << "\x1b[0m >" << endl;
	cout << "\x1b[32m[4]\x1b[0mВремя на викторину		|  < \x1b[1m" << totalTime / 60 << "\x1b[0m >" << endl;
	cout << "\x1b[32m[5]\x1b[0mМеню" << endl;
	cout << "==============================" << endl;
	int settingChoise = getCorrectChoise(1, 5, 1);
	switch (settingChoise)
	{
	case 1: {
		getQAmount();
		system("cls");
		setting();
		break;
	}
	case 2: {
		getLifes();
		system("cls");
		setting();
		break;
	}
	case 3: {
		getHint();
		system("cls");
		setting();
		break;
	}
	case 4: {
		getTime();
		system("cls");
		setting();
		break;
	}
	case 5: {
		return 0;
		break;
	}
	default:
		return 0;
		break;
	}
}
void getRules() {
	system("cls");
	cout << "[#] \x1b[4mПравила\x1b[0m\n===========================\n\n";
	cout << "\tЗадача викторины - проверка ваших знаний. Чем больше вы дадите правильных ответов на поставленные вопросы, тем лучше.\nВыбор ответа происходит путем введения пункта выбранного вами ответа. Будьте внимательны в ответе, так как у вас есть ограниченное \nколичество прав на ошибку, которые настраиваются в Настройки --> Количество прав на ошибку.\n\n\tТакже вы можете использовать подсказку \"50 / 50\",введя \"5\" во время выбора ответа, которая сокращает количество вариантов ответа на половину. \nДля настройки наличия подсказки смотрите пункт Настройки --> Подсказка 50/50. \n\n\tВ игре присутствует таймер времени. Если вы не успеете ответить на все вопросы до конца времени, викторина считается проваленной. \nДля настройки времени перейдите в Настройки --> Время на викторину.";
	cout << "\n===========================\n\x1b[32m[1]\x1b[0mВ меню\n";
	int rulesChoise = getCorrectChoise(1, 1, 1);
	if (rulesChoise == 1) {
		return;
	}
}
int main() {
	srand(time(0));
	setlocale(0, "");
	system("cls");
	cout << "[#] \x1b[4mМеню\x1b[0m\n===========================\n\x1b[32m[1]\x1b[0mНачать викторину\n\x1b[32m[2]\x1b[0mНастройки\n\x1b[32m[3]\x1b[0mПравила\n\x1b[32m[4]\x1b[0mВыход\n";
	int menuChoise = getCorrectChoise(1, 4, 4);
	switch (menuChoise)
	{
	case 1: {
		startQuiz();
		system("cls");
		main();
		break;
	}
	case 2: {
		setting();
		system("cls");
		main();
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
		cout << "Вы точно хотите выйти? (Y/N)" << endl;
		char quit;
		while (true)
		{
			cout << "Введите ваш выбор: ";
			cin >> quit;
			if (cin.fail() || (quit != 'Y' && quit != 'y' && quit != 'N' && quit != 'n'))
			{
				cin.clear();
				cin.ignore(32767, '\n');
			}
			else {
				break;
			}
		}
		if (quit == 'Y' or quit == 'y') {
			return 0;
		}
		else if (quit == 'N' or quit == 'n') {
			system("cls");
			main();
		}
	}
}




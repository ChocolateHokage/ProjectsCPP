#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "���������:\n[1] 15*15\n[2] 20*20\n[3] 30*30\n[0] �����\n\n�������� ��������: ";

	int choise;
	cin >> choise;
	while (choise != 0) {
		cin >> choise;
		switch (choise) {
		case 1: {
			int arr[15][15] = {
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{0,0,0,0,1,1,0,0,1,0,0,0,0,0,1},
				{1,0,0,0,0,1,0,1,1,0,1,1,1,0,1},
				{1,1,1,1,0,1,0,0,1,0,1,0,1,0,1},
				{1,0,0,1,0,1,1,0,1,0,1,0,1,0,1},
				{1,0,0,1,0,0,0,0,0,0,1,0,1,0,1},
				{1,0,0,1,0,1,1,1,1,0,1,0,1,0,1},
				{1,0,0,1,1,1,0,0,1,0,1,0,1,0,1},
				{1,1,0,0,0,0,0,0,1,0,0,0,1,0,1},
				{1,1,1,1,1,1,1,1,1,0,1,1,1,0,1},
				{1,0,0,0,0,0,1,0,0,0,1,0,0,0,1},
				{1,1,0,0,0,0,1,0,1,0,1,0,0,0,0},
				{1,0,0,1,0,0,1,0,1,1,1,1,1,0,1},
				{1,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
			};

			for (int i = 0; i < 15; i++) {
				for (int j = 0; j < 15; j++) {
					if (arr[i][j] == 1) {
						cout << "# ";
					}
					else if (arr[i][j] == 0) {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 2: {
			int arr[20][20] = {
				{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				{1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,1},
				{1,0,1,0,0,0,0,0,1,0,1,1,0,0,1,0,0,0,0,1},
				{1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,1,1,1,0,1},
				{1,1,1,1,1,0,1,0,1,0,0,1,0,0,0,0,0,0,0,1},
				{1,0,0,0,1,0,1,0,1,1,1,1,0,1,1,1,0,0,0,1},
				{1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,1,0,0,1},
				{1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1},
				{1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1},
				{1,0,1,0,0,0,1,0,0,1,1,1,0,0,1,0,1,0,0,1},
				{1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,0,0,0,0,1},
				{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,1},
				{1,0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,1},
				{1,0,1,0,0,0,1,0,1,1,1,1,0,1,0,0,1,0,0,1},
				{1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,1,0,1},
				{1,1,1,1,1,0,1,1,1,0,0,1,1,1,0,0,0,1,0,1},
				{0,0,0,0,1,1,1,0,0,0,1,1,1,1,0,1,1,1,0,1},
				{1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
			};

			for (int i = 0; i < 20; i++) {
				for (int j = 0; j < 20; j++) {
					if (arr[i][j] == 1) {
						cout << "# ";
					}
					else if (arr[i][j] == 0) {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 3: {
			int arr[30][30] = {
				{1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				{1,0,0,1,1,1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1},
				{1,0,0,1,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,1},
				{1,0,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,0,1,1,0,0,0,1},
				{1,0,0,1,0,1,0,0,0,1,0,1,1,1,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,1},
				{1,0,0,0,0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,0,1,1,0,1,0,0,0,0,1},
				{1,1,1,1,0,0,1,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,0,1,1,1,1,0,1},
				{1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,1},
				{1,0,0,1,0,0,1,0,1,1,1,1,0,0,1,1,1,1,0,0,1,0,1,1,1,0,0,1,0,1},
				{1,0,1,1,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1,0,1},
				{1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1},
				{1,0,1,0,0,1,1,1,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
				{1,0,1,0,0,1,0,0,1,0,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1},
				{1,0,1,1,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1},
				{1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,0,0,1},
				{1,0,0,1,1,1,1,1,0,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,0,1},
				{1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,1,1,0,1,0,0,0,0,0,0,0,1,0,0,1},
				{1,0,1,1,0,1,0,0,1,0,1,0,1,0,0,0,1,1,1,0,0,0,0,1,1,1,1,0,0,1},
				{1,0,1,0,0,1,0,1,1,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1},
				{1,0,1,1,1,1,0,1,0,0,1,0,0,0,1,0,1,0,0,1,1,1,1,1,1,0,1,0,0,1},
				{1,0,0,0,0,0,0,1,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,0,1,0,1,1,0,1},
				{1,1,1,0,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1},
				{1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,1,1,1,0,1,0,1,0,0,1,0,1,0,0,1},
				{1,0,1,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,1},
				{1,0,0,1,0,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,1,1,1,1,0,1,1,0,0,1},
				{1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1},
				{1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,1,1,1,0,1},
				{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},

			};

			for (int i = 0; i < 30; i++) {
				for (int j = 0; j < 30; j++) {
					if (arr[i][j] == 1) {
						cout << "# ";
					}
					else if (arr[i][j] == 0) {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		}
		}
	}


}
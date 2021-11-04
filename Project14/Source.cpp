#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	const int SIZE = 10;
	int arr1[SIZE] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr1[i] << endl;
	}
	cout << endl;

	long arr2[SIZE] = { 10,11,12,13,14,15,16,17,18,19 };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr2[i] << endl;
	}
	cout << endl;

	short arr3[SIZE] = { 20,21,22,23,24,25,26,27,28,29 };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr3[i] << endl;
	}
	cout << endl;

	char arr4[SIZE] = { 'a','b','c','d','e','f','g','h','i','j' };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr4[i] << endl;
	}
	cout << endl;

	string arr5[SIZE] = { "ab","bc","cd","de","ef","fg","gh","hi","ij","jk" };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr5[i] << endl;
	}
	cout << endl;

	bool arr6[SIZE] = { 1,0,1,1,0,1,0,0,1,0 };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr6[i] << endl;
	}
	cout << endl;

	double arr7[SIZE] = { 1.11,2.22,3.33,4.44,5.55,6.66,7.77,8.88,9.99,10.11 };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr7[i] << endl;
	}
	cout << endl;

	float arr8[SIZE] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1 };
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr8[i] << endl;
	}
	cout << endl;
}

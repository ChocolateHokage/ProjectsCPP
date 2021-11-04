#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Времена года" << endl << "[1]Лето" << endl << "[2]Осень" << endl << "[3]Зима" << endl << "[4]Весна" << endl << "Выберите время года: ";
    int n;
    cin >> n;
    if (n == 1)
    {
        system("cls");
        cout << " Вы выбрали лето";
    }
    else if (n == 2)
    {
        system("cls");
        cout << " Вы выбрали осень";
    }
    else if (n == 3)
    {
        system("cls");
        cout << " Вы выбрали зиму";
    }
    else if (n == 4)
    {
        system("cls");
        cout << " Вы выбрали весну";
    }
    else
    {
        system("cls");
        cout << " Вы ввели некорректное число. Попробуйте снова";
    }
    int _;
    cin >> _;

}

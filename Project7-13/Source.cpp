#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    system("COLOR 3");
    cout << "[+]�������������� ������\n\n[1] �����\n[2] �������\n[3] �������������\n";
    cout << "[4] �����������\n[5] �������\n[6] �������\n[7] ����\n[8] ����\n\n�������� ������ : ";
    int choise;
    cin >> choise;

    while (!cin >> choise || choise < 1 && choise >8) {
        cin.clear();
        cin.ignore();
        cout << "������� �����, ��������������� ���������� ������: ";
        cin >> choise;
    }

    switch (choise)
    {
        // �����
    case 1: {
        system("cls");
        cout << "[+] �����" << endl;
        cout << "������� ����� ����� � ��������: ";
        int lenght1;
        cin >> lenght1;
        while (!cin >> lenght1 || lenght1 < 1) {
            cin.clear();
            cin.ignore();
            cout << "������� ����� ������������� �����: ";
            cin >> lenght1;
        }

        cout << "������� ������ �������� �����: ";
        char symb1;
        cin >> symb1;
        while (!cin >> symb1) {
            cin.clear();
            cin.ignore();
            cout << "������� ������, �� �������� ����� ��������� �����: ";
            cin >> symb1;
        }

        cout << "�������� ��������� �����:\n[1]�����������\n[2]�������������\n";
        int choisePosition;
        cin >> choisePosition;
        while (!cin >> choisePosition || (choisePosition != 1 && choisePosition != 2)) {
            cin.clear();
            cin.ignore();
            cout << "������� �����, ��������������� ���������� ������: ";
            cin >> choisePosition;
        }
        if (choisePosition == 1) {
            while (lenght1 != 0) {
                cout << symb1 << endl;
                lenght1--;
            }
        }
        else if (choisePosition == 2) {
            while (lenght1 != 0) {
                cout << symb1;
                lenght1--;
            }
        }
        else {
            cout << "��������� �������� � ��������� �������";
        }
        break;
    }
          // �������
    case 2: {
        system("cls");
        cout << "[+] �������" << endl;
        cout << "������� ����� ������� ��������: ";
        int lenght2;
        cin >> lenght2;
        while (!cin >> lenght2 || lenght2 < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> lenght2;
        }

        cout << "������� ������ ��������: ";
        char symb2;
        cin >> symb2;

        cout << "[1]�����\n[2]�����������\n\n�������� ��� ��������: ";
        int choisetypeSquare;
        cin >> choisetypeSquare;
        while (!cin >> choisetypeSquare || (choisetypeSquare != 1 && choisetypeSquare != 2)) {
            cin.clear();
            cin.ignore();
            cout << "������� �����, ��������������� ���������� ������: ";
            cin >> choisetypeSquare;
        }
        int glenght;
        if (choisetypeSquare == 1) {
            glenght = lenght2;
            while (glenght != 0) {
                int lenght = lenght2;
                while (lenght != 0) {
                    if ((glenght == lenght2 or glenght == 1) or (lenght == lenght2 or lenght == 1)) {
                        cout << symb2 << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                    lenght--;
                }
                cout << endl;
                glenght--;
            }
        }
        else if (choisetypeSquare == 2) {
            glenght = lenght2;
            while (glenght != 0) {
                int lenght = lenght2;
                while (lenght != 0) {
                    cout << symb2 << " ";
                    lenght--;
                }
                cout << endl;
                glenght--;
            }

        }
        break;
    }
          // �������������
    case 3: {
        system("cls");
        cout << "[+] �������������" << endl;
        cout << "������� ����� ������� 1 ��������������: ";
        int size1;
        cin >> size1;
        while (!cin >> size1 || size1 < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> size1;
        }

        cout << "������� ����� ������� 2 ��������������: ";
        int size2;
        cin >> size2;
        while (!cin >> size2 || size2 < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> size2;
        }

        cout << "������� ������ ��������: ";
        char symb3;
        cin >> symb3;

        cout << "[1]�����\n[2]�����������\n\n�������� ��� ��������������: ";
        int choisetypeRectangle;
        cin >> choisetypeRectangle;
        while (!cin >> choisetypeRectangle || (choisetypeRectangle != 1 && choisetypeRectangle != 2)) {
            cin.clear();
            cin.ignore();
            cout << "������� �����, ��������������� ���������� ������: ";
            cin >> choisetypeRectangle;
        }

        if (choisetypeRectangle == 1) {
            for (int i = 1; i <= size1; i++) {
                for (int k = 1; k <= size2; k++) {
                    if ((i == size1 or i == 1) or (k == size2 or k == 1)) {
                        cout << symb3 << " ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }
        }
        else if (choisetypeRectangle == 2) {
            for (int i = 1; i <= size1; i++) {
                for (int k = 1; k <= size2; k++) {
                    cout << symb3 << " ";
                }
                cout << endl;
            }
        }
        break;
    }
          // �����������
    case 4: {
        system("cls");
        cout << "[+] �����������" << endl;
        cout << "������� ����� ������ ������������: ";
        int height;
        cin >> height;

        while (!cin >> height || height < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> height;
        }

        cout << "������� ������ ��������: ";
        char symb4;
        cin >> symb4;

        cout << "[1]�����\n[2]�����������\n\n�������� ��� ������������: ";
        int choiseTypeTriangle;
        cin >> choiseTypeTriangle;
        while (!cin >> choiseTypeTriangle || (choiseTypeTriangle != 1 && choiseTypeTriangle != 2)) {
            cin.clear();
            cin.ignore();
            cout << "������� �����, ��������������� ���������� ������: ";
            cin >> choiseTypeTriangle;
        }
        if (choiseTypeTriangle == 1) {
            int base = (height * 2) - 1;
            int leftWay = height;
            int rightWay = height;
            for (int i = 1; i <= height and leftWay != 0 and rightWay <= base; i++) {
                for (int k = 1; k <= base; k++) {
                    if ((k == leftWay or k == rightWay) or i == height) {
                        cout << symb4 << " ";
                    }
                    else if (k != leftWay or k != rightWay) {
                        cout << "  ";
                    }
                }
                leftWay--;
                rightWay++;
                cout << endl;
            }
        }
        else if (choiseTypeTriangle == 2) {
            int base = (height * 2) - 1;
            int leftWay = height;
            int rightWay = height;
            for (int i = 1; i <= height and leftWay != 0 and rightWay <= base; i++) {
                for (int k = 1; k <= base; k++) {
                    if (k >= leftWay and k <= rightWay) {
                        cout << symb4 << " ";
                    }
                    else if (k <= leftWay or k >= rightWay) {
                        cout << "  ";
                    }
                }
                leftWay--;
                rightWay++;
                cout << endl;
            }
        }
        break;
    }
          // �������
    case 5: {
        system("cls");
        cout << "[+] �������" << endl;
        cout << "������� ������ �������: ";
        int size;
        cin >> size;

        while (!cin >> size || size < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> size;
        }

        cout << "������� ��������: ";
        char texture;
        cin >> texture;

        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {
                if (i % 2 == 0 || j % 2 == 0) {
                    cout << texture << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        break;
    }
          // �������
    case 6: {
        system("cls");
        cout << "[+] �������" << endl;
        cout << "������� ������ ��������: ";
        int size;
        cin >> size;

        while (!cin >> size || size < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> size;
        }

        cout << "������� ��������: ";
        char texture;
        cin >> texture;

        if (size % 2 == 0) {
            size++;
        }
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {
                if (j == size - j || j == i || i - 1 == size - j) {
                    cout << texture << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        break;
    }
          // ����
    case 7: {
        system("cls");
        cout << "[+] ����" << endl;
        cout << "������� ������ �����: ";
        int size;
        cin >> size;
        while (!cin >> size || size < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> size;
        }
        cout << "������� ��������: ";
        char texture;
        cin >> texture;
        if (size % 2 == 0) {
            size++;
        }
        for (int i = 1; i < size; i++) {
            for (int k = 1; k <= size; k++) {
                if (i == size / 2 || k == size / 2 + 1) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        break;
    }
          // ����
    case 8: {
        system("cls");
        cout << "[+] ����" << endl;
        cout << "������� ������ �����: ";
        int size;
        cin >> size;

        while (!cin >> size || size < 1) {
            cin.clear();
            cin.ignore();
            cout << "!!!!!!������� ����� ������������� �����: ";
            cin >> size;
        }

        cout << "������� ��������: ";
        char texture;
        cin >> texture;

        int centerX = size;
        int centerY = size;

        for (int y = 0; y < 2 * size + 1; y++) {
            for (int x = 0; x < 2 * size + 1; x++) {
                if ((int)hypot(abs(size - x), abs(size - y)) == size) { // ������� hypot ��������� ����� ���������� �������������� ������������ � �������� ������ ���� ������ x � y.����� hypot ������������ ���������� :sqrt(x*x + y*y);
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
    default: {
        cout << "��������� �������� � ��������� �������";
        break;
    }
    }
}


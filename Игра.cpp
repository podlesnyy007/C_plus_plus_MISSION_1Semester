#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    string mas[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            mas[i][j] = "?";
        }
    int x, y;
    for (int i = 1; i <= 9; i++) {
        if (i % 2 == 1) {
            cout << "Первый игрок: ";
            cin >> x >> y;
            mas[x][y] = "x";
            for (int i = 0; i < 3; i++, cout << endl)
                for (int j = 0; j < 3; j++)
                    cout << mas[i][j] << " ";
            if (mas[0][0] == "x" && mas[0][1] == "x" && mas[0][2] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][0] = "-";
                mas[0][1] = "-";
                mas[0][2] = "-";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[1][0] == "x" && mas[1][1] == "x" && mas[1][2] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[1][0] = "-";
                mas[1][1] = "-";
                mas[1][2] = "-";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[2][0] == "x" && mas[2][1] == "x" && mas[2][2] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[2][0] = "-";
                mas[2][1] = "-";
                mas[2][2] = "-";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][0] == "x" && mas[1][1] == "x" && mas[2][2] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][0] = "\\";
                mas[1][1] = "\\";
                mas[2][2] = "\\";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][2] == "x" && mas[1][1] == "x" && mas[2][0] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][2] = "/";
                mas[1][1] = "/";
                mas[2][0] = "/";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][0] == "x" && mas[1][0] == "x" && mas[2][0] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][0] = "|";
                mas[1][0] = "|";
                mas[2][0] = "|";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][1] == "x" && mas[1][1] == "x" && mas[2][1] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][1] = "|";
                mas[1][1] = "|";
                mas[2][1] = "|";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][2] == "x" && mas[1][2] == "x" && mas[2][2] == "x") {
                cout << "ПЕРВЫЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][2] = "|";
                mas[1][2] = "|";
                mas[2][2] = "|";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
        }
        else {
            cout << "Второй игрок: ";
            cin >> x >> y;
            mas[x][y] = "o";
            for (int i = 0; i < 3; i++, cout << endl)
                for (int j = 0; j < 3; j++)
                    cout << mas[i][j] << " ";
            if (mas[0][0] == "o" && mas[0][1] == "o" && mas[0][2] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][0] = "-";
                mas[0][1] = "-";
                mas[0][2] = "-";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[1][0] == "o" && mas[1][1] == "o" && mas[1][2] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ" << endl;
                mas[1][0] = "-";
                mas[1][1] = "-";
                mas[1][2] = "-";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[2][0] == "o" && mas[2][1] == "o" && mas[2][2] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ" << endl;
                mas[2][0] = "-";
                mas[2][1] = "-";
                mas[2][2] = "-";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][0] == "o" && mas[1][1] == "o" && mas[2][2] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ" << endl;
                mas[0][0] = "\\";
                mas[1][1] = "\\";
                mas[2][2] = "\\";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][2] == "o" && mas[1][1] == "o" && mas[2][0] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ" << endl;
                mas[0][2] = "/";
                mas[1][1] = "/";
                mas[2][0] = "/";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][0] == "o" && mas[1][0] == "o" && mas[2][0] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][0] = "|";
                mas[1][0] = "|";
                mas[2][0] = "|";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][1] == "o" && mas[1][1] == "o" && mas[2][1] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][1] = "|";
                mas[1][1] = "|";
                mas[2][1] = "|";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
            if (mas[0][2] == "o" && mas[1][2] == "o" && mas[2][2] == "o") {
                cout << "ВТОРОЙ ИГРОК ПОБЕДИЛ!" << endl;
                mas[0][2] = "|";
                mas[1][2] = "|";
                mas[2][2] = "|";
                for (int i = 0; i < 3; i++, cout << endl)
                    for (int j = 0; j < 3; j++)
                        cout << mas[i][j] << " ";
                break;
            }
        }
        if (i == 9)
            cout << "ПОБЕДИЛА ДРУЖБА!";
    }
}

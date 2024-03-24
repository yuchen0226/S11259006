#include <iostream>
using namespace std;

// �D�حn�D���禡
void inputTime(int& hours, int& minutes);
void convertTime(int& hours, char& period);
void outputTime(int hours, int minutes, char period);

int main(void) {
    char choice;

    do {
        int hours, minutes;
        char period;

        // ��J�ɶ�
        inputTime(hours, minutes);

        // �ഫ�ɶ�
        convertTime(hours, period);

        // ��X12�p�ɨ�ɶ�
        outputTime(hours, minutes, period);

        // �ݥΤ�O�_�n�~��
        cout << "\nDo you want to convert another time? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

// ��J�ɶ����禡
void inputTime(int& hours, int& minutes) {
    cout << "Enter the time in 24-hour notation (HH:MM): ";
    cin >> hours;
    cin.ignore(); // �����_��
    cin >> minutes;
}

// �N�ɶ��q24�p�ɨ��ഫ��12�p�ɨ�禡
void convertTime(int& hours, char& period) {
    if (hours >= 12) {
        period = 'P';
        if (hours > 12) {
            hours -= 12;
        }
    }
    else {
        period = 'A';
        if (hours == 0) {
            hours = 12;
        }
    }
}

// ��X12�p�ɨ�ɶ����禡
void outputTime(int hours, int minutes, char period) {
    cout << "The time in 12-hour notation is: " << hours << ":";

    if (minutes < 10) {
        cout << "0"; // ���Ƥ����e�[�s
    }
    cout << minutes << " ";

    if (period == 'A') {
        cout << "A.M.";
    }
    else {
        cout << "P.M.";
    }
}
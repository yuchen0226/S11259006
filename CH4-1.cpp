#include <iostream>
using namespace std;

// 題目要求之函式
void inputTime(int& hours, int& minutes);
void convertTime(int& hours, char& period);
void outputTime(int hours, int minutes, char period);

int main(void) {
    char choice;

    do {
        int hours, minutes;
        char period;

        // 輸入時間
        inputTime(hours, minutes);

        // 轉換時間
        convertTime(hours, period);

        // 輸出12小時制時間
        outputTime(hours, minutes, period);

        // 問用戶是否要繼續
        cout << "\nDo you want to convert another time? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

// 輸入時間的函式
void inputTime(int& hours, int& minutes) {
    cout << "Enter the time in 24-hour notation (HH:MM): ";
    cin >> hours;
    cin.ignore(); // 忽略冒號
    cin >> minutes;
}

// 將時間從24小時制轉換為12小時制的函式
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

// 輸出12小時制時間的函式
void outputTime(int hours, int minutes, char period) {
    cout << "The time in 12-hour notation is: " << hours << ":";

    if (minutes < 10) {
        cout << "0"; // 單位數分鐘前加零
    }
    cout << minutes << " ";

    if (period == 'A') {
        cout << "A.M.";
    }
    else {
        cout << "P.M.";
    }
}
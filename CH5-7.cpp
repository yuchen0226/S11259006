#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    // 初始化一個陣列，用於存儲每個成績的計數
    int gradesCount[6] = { 0 };

    // 向量用於存儲輸入的成績
    vector<int> grades;

    cout << "Enter the grades (from 0 to 5, enter -1 to finish):\n";

    // 輸入循環以輸入成績
    int grade;
    while (true) {
        cin >> grade;
        if (grade == -1) // 如果輸入-1，退出循環
            break;
        else if (grade >= 0 && grade <= 5) { // 檢查輸入的成績是否有效
            grades.push_back(grade);
            gradesCount[grade]++; // 增加相應成績的計數
        }
        else {
            cout << "Invalid grade entered. Grades must be between 0 and 5.\n";
        }
    }

    // 輸出直方圖
    for (int i = 0; i < 6; ++i) {
        cout << gradesCount[i] << " grade(s) of " << i << endl;
    }

    return 0;
}

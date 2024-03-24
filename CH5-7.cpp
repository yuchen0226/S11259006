#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    // ��l�Ƥ@�Ӱ}�C�A�Ω�s�x�C�Ӧ��Z���p��
    int gradesCount[6] = { 0 };

    // �V�q�Ω�s�x��J�����Z
    vector<int> grades;

    cout << "Enter the grades (from 0 to 5, enter -1 to finish):\n";

    // ��J�`���H��J���Z
    int grade;
    while (true) {
        cin >> grade;
        if (grade == -1) // �p�G��J-1�A�h�X�`��
            break;
        else if (grade >= 0 && grade <= 5) { // �ˬd��J�����Z�O�_����
            grades.push_back(grade);
            gradesCount[grade]++; // �W�[�������Z���p��
        }
        else {
            cout << "Invalid grade entered. Grades must be between 0 and 5.\n";
        }
    }

    // ��X�����
    for (int i = 0; i < 6; ++i) {
        cout << gradesCount[i] << " grade(s) of " << i << endl;
    }

    return 0;
}

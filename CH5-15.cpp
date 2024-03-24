#include <iostream>
#include <cstdlib> // �Ω� rand() �M srand()
#include <ctime>   // �Ω� time()
using namespace std;

int main(void) {
    // �H���ƥͦ������ؤl
    srand(time(nullptr));

    // ��ڪ� PIN �X
    int actualPIN = 54321;

    // �Ω�s�x�C�Ӧ�ƪ��H���ƪ��}�C
    int randomDigits[10];

    // ���C�Ӧ�Ʊq 0 �� 9 ���t�H����
    for (int i = 0; i < 10; ++i) {
        randomDigits[i] = rand() % 10; // �ͦ� 0 �� 9 ���H����
    }

    // ��X�H����
    cout << "Random digits assigned to each digit from 0 to 9:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Digit " << i << ": " << randomDigits[i] << endl;
    }

    // ��J�Τ᪺�^��
    cout << "\nEnter the random numbers corresponding to your PIN (5 digits):\n";
    int userResponse;
    cin >> userResponse;

    // �ˬd�Τ᪺�^���O�_�P��� PIN �X�ۤǰt
    if (userResponse == actualPIN) {
        cout << "\nAuthentication successful. Welcome!\n";
    }
    else {
        cout << "\nAuthentication failed. Access denied.\n";
    }

    return 0;
}

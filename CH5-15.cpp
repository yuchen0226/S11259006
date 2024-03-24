#include <iostream>
#include <cstdlib> // 用於 rand() 和 srand()
#include <ctime>   // 用於 time()
using namespace std;

int main(void) {
    // 隨機數生成器的種子
    srand(time(nullptr));

    // 實際的 PIN 碼
    int actualPIN = 54321;

    // 用於存儲每個位數的隨機數的陣列
    int randomDigits[10];

    // 為每個位數從 0 到 9 分配隨機數
    for (int i = 0; i < 10; ++i) {
        randomDigits[i] = rand() % 10; // 生成 0 到 9 的隨機數
    }

    // 輸出隨機數
    cout << "Random digits assigned to each digit from 0 to 9:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Digit " << i << ": " << randomDigits[i] << endl;
    }

    // 輸入用戶的回應
    cout << "\nEnter the random numbers corresponding to your PIN (5 digits):\n";
    int userResponse;
    cin >> userResponse;

    // 檢查用戶的回應是否與實際 PIN 碼相匹配
    if (userResponse == actualPIN) {
        cout << "\nAuthentication successful. Welcome!\n";
    }
    else {
        cout << "\nAuthentication failed. Access denied.\n";
    }

    return 0;
}

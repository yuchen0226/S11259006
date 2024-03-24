#include <iostream>
#define KILO_PER_MILE 1.61
using namespace std;
double convertToMPH(int min, int sec);    //將分鐘和秒轉換為英里/小時
double convertToMPH(double kph);          //將公里/小時轉換為英里/小時

int main(void) {
	int min, sec;
	double kph, mph;
	char choice;
	do {
		cout << "Enter minutes and seconds separated by space ex:(5 30) that you run in a mile>>";
		cin >> min >> sec;   // 輸入分鐘和秒
		while (sec > 60) {
			cout << "Seconds error. Enter seconds again>>";
			cin >> sec;
		}
		mph = convertToMPH(min, sec);	            
		cout << "After counting,the mph is " << mph << "\n\n";

		cout << "Enter any kph you want to covert to mph>>";
		cin >> kph;
		mph = convertToMPH(kph);				    
		cout << "The " << kph << " kph convert to mph is " << mph << endl; 

		cout << "Enter y(Y) to test again or any key to exit >>";
		cin >> choice;                              
	} while (choice == 'y' || choice == 'Y');       // 如果選項為 'y' 或 'Y'，則重新測試

	system("pause");
	return 0;
}

double convertToMPH(int min, int sec)
{
	double hour;
	hour = (min + sec / 60.0) / 60.0;
	return (1 / hour);
}

double convertToMPH(double kph)
{
	return kph / KILO_PER_MILE;
}

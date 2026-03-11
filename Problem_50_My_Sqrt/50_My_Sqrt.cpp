#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

float MyCeil(float Number) {
	int integerPart = (int)Number;

	if (Number < 0 || Number == integerPart)
		return integerPart;
	else
		return integerPart + 1;
}
double MySqrt1(double Num) {
	for (double i = 0; i < Num; i += 0.01) {
		if (i * i == Num) {
			
			return i;
		}
	}
}
double MySqrt(double Number) {
	return pow(Number, 0.5);
}

int main() {
	//srand((unsigned)time(NULL));

	float Number = ReadNumber("Please enter a float number?  ");

	cout << "My Sqrt Result : " << MySqrt(Number) << endl;

	cout << "C++ sqrt Result: " << sqrt(Number) << endl;

	return 0;


}

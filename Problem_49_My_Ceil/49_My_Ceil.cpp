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
		return integerPart ;
	else
		return integerPart + 1 ;
}

int main() {
	//srand((unsigned)time(NULL));

	float Number = ReadNumber("Please enter a float number?  ");

	cout << "My MyCeil Result : " << MyCeil(Number) << endl;

	cout << "C++ ceil Result: " << ceil(Number) << endl;

	return 0;


}

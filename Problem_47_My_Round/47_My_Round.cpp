#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}
double GetFraction(double num)
{
	int integerPart = (int)num;
	double fraction = num - integerPart;
	if (fraction < 0)
		fraction = -fraction;
	return fraction;
}
float MyRound(float Number) {
	float fractionPart = GetFraction(Number);
	if (fractionPart >= 0.5) {
		if (Number > 0) {
			return (int)Number + 1;
		}
		else {
			return (int)Number - 1;
		}
	}
	return (int)Number;
}
int main() {
	//srand((unsigned)time(NULL));

	float Number = ReadNumber("Please enter a float number?  ");
	int builtInRound = round(Number);
	
	cout << "My Round Result :  " << MyRound(Number) << endl;
	cout << "C++ Round Result : " << builtInRound << endl;
	return 0;
}

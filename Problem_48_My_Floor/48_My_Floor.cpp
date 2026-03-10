#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

float MyFloor(float Number) {
    int integerPart = (int)Number;
	// If the number is positive or zero, return its integer part. 
	// If the number is negative and has a fractional part, subtract 1 to get the floor value.
    if (Number >= 0 || Number == integerPart) 
        return integerPart;
    else  
        return integerPart - 1;
}

int main() {
	//srand((unsigned)time(NULL));

	float Number = ReadNumber("Please enter a float number?  ");
	int builtInRound = floor(Number);
	
	cout << "My Floor Result :  " << MyFloor(Number) << endl;
	cout << "C++ Floor Result : " << builtInRound << endl;

	return 0;
}

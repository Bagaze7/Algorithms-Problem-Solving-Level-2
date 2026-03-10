#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
    float Number = 0;
   
        cout << Message << endl;
        cin >> Number;

    return Number;
}

float MyABS(float Number) {
	if (Number >= 0) {
		return Number; 
	}
	return -Number; 
}
int main() {
    //srand((unsigned)time(NULL));
	float Number = ReadNumber("Please enter a number ? ");
	cout << "The absolute value of " << Number << " is: " << MyABS(Number) << endl;
 
    return 0;
}

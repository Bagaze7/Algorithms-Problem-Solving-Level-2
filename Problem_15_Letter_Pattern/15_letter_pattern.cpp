#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the number from the user.
    } while (Number <= 0);        // Continue prompting if the number is not positive.

    return Number;  // Return the validated positive number.
}


void PrintLetters(int Num) {
    int plus = Num + 64;
    for (int i = 65; i <= plus; i++) {
        for (int j = 65; j <= i; j++) {
            cout << (char)i;
        }
        cout << endl;
    }
}
int main()
{
	// Read a positive number from the user and print the corresponding letter pattern.
    PrintLetters(ReadPositiveNumber("Please enter a positive number? "));

    return 0;
}

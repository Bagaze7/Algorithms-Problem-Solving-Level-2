
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


void PrintLetters() {
	int i = 65; // ASCII value for 'A'
	int j = 65; // ASCII value for 'A'
	int k = 65; // ASCII value for 'A'
	while (i <= 90)
	{
		while (j <= 90)
		{
			while (k <= 90)
			{
				cout << char(i) << char(j) << char(k) << endl; // Print the current combination of letters.
				k++; // Move to the next letter for the third position.
			}
			j++; // Move to the next letter for the second position.
			k = 65; // Reset the third position to 'A' for the next iteration of the second position.
		}
		i++; // Move to the next letter for the first position.
		j = 65; // Reset the second position to 'A' for the next iteration of the first position.
		cout << "\n____________________________\n";

	}
}
int main() {
	cout << "kdfhkhdf";
}
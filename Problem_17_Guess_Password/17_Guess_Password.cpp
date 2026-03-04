
#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string Message)
{
	string Password;
	cout << Message;
	cin >> Password;
	return Password;
}


void PrintLetters(string Password) {
	int i = 65; // ASCII value for 'A'
	int j = 65; // ASCII value for 'A'
	int k = 65; // ASCII value for 'A'
	string word = ""; // Variable to store the current combination of letters.
	int Counter = 0; // Counter to keep track of the number of trials.
	while (i <= 90)
	{
		while (j <= 90)
		{
			while (k <= 90)
			{
				cout << char(i) << char(j) << char(k) << endl; // Print the current combination of letters.
				word.append(1, char(i));
				word.append(1, char(j));
				word.append(1, char(k));
				Counter++; // Increment the trial counter.
				if (word == Password) // Check if the generated word matches the password.
				{
					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << Counter << " Trial(s)\n";
					return; // Exit the function after finding the password.
				}
				k++; // Move to the next letter for the third position.
				word = ""; // Reset the word for the next combination.
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
	string Password = ReadPassword("Please enter a 3-letter password (e.g., ABC): ");
	PrintLetters(Password);
	return 0;
}
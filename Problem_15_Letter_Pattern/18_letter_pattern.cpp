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
string ReadText()
{
    string Text;  // Declare a string variable to store the input text.

    cout << "Please enter Text?\n"; // Prompt the user for input.
    getline(cin, Text);              // Read an entire line from standard input.

    return Text; // Return the entered text.
}
string encryptedLetter(string word) {
	string result = "";
	
    for (int i = 0; i < word.length(); i++) {
		result += (char)(word[i] + 2);
		
	}
	return result;
}
string decryptedLetter(string word) {
	string result = "";
    for (int i = 0; i < word.length(); i++) {
        result += (char)(word[i] - 2);

    }
	return result;
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
    string word = ReadText();
    cout << encryptedLetter(word) << endl;
    cout << decryptedLetter(encryptedLetter(word)) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
    cout << "\n"; // Print a newline after reading the number.
    cout << "\n"; // Print an additional newline for better formatting.
}


int RandomNumber(int From, int To)
{
    // Generate a random number in the range [From, To]:
    // rand() % (To - From + 1) yields a number between 0 and (To - From), then adding From shifts the range.
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void CreateArray(int arr[100], int arrLength) {


    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); // Fill the array with random numbers between 1 and 100.
    }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // Print each element of the array followed by a space.
    }
    cout << "\n"; // Print a newline after printing all elements.
    cout << "\n"; // Print an additional newline for better formatting.
}

bool IsNumberInArray(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == Number) {
			return true; // Return true if the number is found in the array.
		}
	}
	return false; // Return false if the number is not found in the array.
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter number of elements:");

    CreateArray(arr, arrLength);
    cout << "Array 1 elements:" << endl;
    PrintArray(arr, arrLength);
    int Number = ReadPositiveNumber("Please enter a number to search for");
    cout << "Number you are looking for is: " << Number << endl; // Print the number that the user is searching for.
    
	if (IsNumberInArray(arr, arrLength, Number)) {
		cout << "yES, The number is found :-)" << endl; // Print a message if the number is found in the array.
	}
	else {
		cout << "No, The number is not found :-(" << endl; // Print a message if the number is not found in the array.
	}

    return 0;
}
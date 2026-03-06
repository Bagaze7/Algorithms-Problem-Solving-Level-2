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
        cout << arr[i] << " " ; // Print each element of the array followed by a space.
    }
    cout << "\n"; // Print a newline after printing all elements.
	cout << "\n"; // Print an additional newline for better formatting.
}
int FindNumberPosition(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == Number) {
			return i; // Return the index of the first occurrence of the number.
		}
	}
	return -1; // Return -1 if the number is not found in the array.
		
}
void PrintNumberPosition(int Position) {
    if (Position != -1) {
        cout << "The number is found at index: " << Position << endl; // Print the index where the number is found.
    }
    else {
        cout << "The number is not found in the array." << endl; // Print a message if the number is not found.
    }
}
int FindNumberOrder(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == Number) {
			return i + 1; // Return the order (1-based index) of the first occurrence of the number.
		}
	}
	return -1; // Return -1 if the number is not found in the array.
}
void PrintNumberOrder(int Order) {
	if (Order != -1) {
		cout << "The number is found at order: " << Order << endl; // Print the order where the number is found.
	}
	else {
		cout << "The number is not found in the array." << endl; // Print a message if the number is not found.
	}
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
	int Position = FindNumberPosition(arr, arrLength, Number);
	cout << "Number you are looking for is: " << Number << endl; // Print the number that the user is searching for.
    if (Position == -1)
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number found at position: " << Position << endl;
        cout << "The number found its order  : " << Position + 1 << endl;
    }

    return 0;
}
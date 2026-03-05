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
}


int RandomNumber(int From, int To)
{
    // Generate a random number in the range [From, To]:
    // rand() % (To - From + 1) yields a number between 0 and (To - From), then adding From shifts the range.
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void CreateArray(int arr[100], int arrLength) {


    for (int i = 1; i <= arrLength; i++) {
        arr[i] = i; 
    }
}
void ShuffleArray(int SecondArr[100], int arrLength) {
    for (int i = 1; i <= arrLength; i++) {
        int Num = RandomNumber(1, arrLength); // Generate a random index within the bounds of the array.
        for (int j = 1; j <= arrLength; j++) {
            if (SecondArr[j] == Num) { // Check if the generated number is already in the second array.
                Num = RandomNumber(1, arrLength); // If it is, generate a new random number.
                j = 0; // Reset the loop to check the new number against all elements again.
            }
            else if (j == arrLength) { // If we have checked all elements and the number is not found, we can add it to the second array.
                SecondArr[i] = Num; // Assign the unique random number to the second array at index i.
            }
        }
    }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 1; i <= arrLength; i++) {
        cout << arr[i] << " "; // Print each element of the array followed by a space.
    }
    cout << "\n"; // Print a newline after printing all elements.
}







int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
	int secondArr[100];
    int arrLength = ReadPositiveNumber("Please enter the number of elements in the array: ");
    CreateArray(arr, arrLength);
    cout << "Array 1 elements:" << endl;
    PrintArray(arr, arrLength);
	ShuffleArray(secondArr, arrLength);
    PrintArray(secondArr, arrLength);

    return 0;
}
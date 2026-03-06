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


    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); // Fill the array with random numbers between 1 and 100.
    }
}
void ReverseArray(int arr[100],int SecondArr[100], int arrLength) {
    int count = 0;
    for (int i = arrLength - 1; i >= 0; i--) {
        SecondArr[count] = arr[i];
        count++;
     }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // Print each element of the array followed by a space.
    }
    cout << "\n"; // Print a newline after printing all elements.
}







int main()
{
    srand((unsigned)time(NULL));

    int SecondArr[100];
    int arr[100];
    int arrLength = ReadPositiveNumber("Please enter the number of elements in the array: ");
    CreateArray(arr, arrLength);
    ReverseArray(arr, SecondArr, arrLength);
    cout << "Array 1 elements:" << endl;
    PrintArray(arr, arrLength);
    cout << "Array 2 elements:" << endl;
    PrintArray(SecondArr, arrLength);
    
    return 0;
}
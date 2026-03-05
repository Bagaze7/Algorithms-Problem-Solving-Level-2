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
void PrintArrayy(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // Print each element of the array followed by a space.
    }
    cout << "\n"; // Print a newline after printing all elements.
}






void SumArrays(int FirstArray[100], int SecondArray[100],int ThirdArray[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		ThirdArray[i] = FirstArray[i] + SecondArray[i]; // Copy the sum of corresponding elements from the first and second arrays to the third array.
	}
}   

int main()
{
    srand((unsigned)time(NULL));

    int SecondArr[100];
	int ThirdArr[100];
    int arr[100];
    int arrLength = ReadPositiveNumber("Please enter the number of elements in the array: ");
    int secondArrLength;
    CreateArray(arr, arrLength);
	CreateArray(SecondArr, arrLength);
	SumArrays(arr, SecondArr, ThirdArr, arrLength);
    cout << "Array 1 elements:" << endl;
    PrintArrayy(arr, arrLength);
    cout << "Array 2 elements:" << endl;
	PrintArrayy(SecondArr, arrLength);
	cout << "Array 3 elements (sum of Array 1 and Array 2):" << endl;
	PrintArrayy(ThirdArr, arrLength);
    return 0;
}
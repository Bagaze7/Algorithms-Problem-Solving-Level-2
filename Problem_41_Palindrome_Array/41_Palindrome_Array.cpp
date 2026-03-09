#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;  // Set the number of elements in the array to 6.

    // Manually assign values to each element in the array.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {
	for (int i = arrLength - 1; i >= 0; i--) {
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
	}
}
bool isPalindrome(int arrSource[100], int arrDestination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arrSource[i] != arrDestination[i]) {
            return false;
        }
    }
	return true;
        
}
bool isPalindrome1(int arrSource[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arrSource[i] != arrSource[arrLength - i - 1]) {
            return false;
        }
    }
    return true;

}
void PrintPalindromeResult(bool isPalindrome) {
	if (isPalindrome) {
		cout << "The array is a palindrome.\n";
	}
	else {
		cout << "The array is not a palindrome.\n";
	}
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArray(arr, arrLength);
    int arr2[100];
    int arr2Length = 0;
	CopyArrayInReverseOrder(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Prime numbers:\n";
    PrintArray(arr2, arr2Length);
	PrintPalindromeResult(isPalindrome(arr, arr2, arrLength));
    PrintPalindromeResult(isPalindrome1(arr, arrLength));

    return 0;
}

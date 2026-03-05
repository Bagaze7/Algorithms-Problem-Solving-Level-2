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
void CreateArray(int arr[100], int& arrLength) {
    do {
        cout << "\nEnter number of elements:\n";
        cin >> arrLength;
    } while (arrLength > 100);

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); // Fill the array with random numbers between 1 and 100.
    }
}
void PrintArrayy(int arr[100], int arrLength) {
    cout << "Array 1 elements:" << endl;
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // Print each element of the array followed by a space.
    }
    cout << "\n"; // Print a newline after printing all elements.
}


void CopyArray(int source[100], int destination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        destination[i] = source[i]; // Copy each element from the source array to the destination array.
    }
}
bool isPrime(int number) {
    if (number <= 1) return false; // 0 and 1 are not prime numbers.
    for (int i = 2; i <= number / 2; i++) { // Check divisibility from 2 to number/2.
        if (number % i == 0) {
            return false; // If the number is divisible by any of these, it's not prime.
        }
    }
    return true; // If no divisors found, it's a prime number.
}
int GetPrimeNumbers(int arr[100], int arrLength, int SecondArr[100]) {
    int count = 0;
    for (int i = 0; i < arrLength; i++) {
        if (isPrime(arr[i])) {
            SecondArr[count] = arr[i]; // If the current element is prime, add it to the second array.
            count++; // Increment the count of prime numbers found.
        }
    }
    return count;
}
void PrintSecondArray(int SecondArr[100], int arrLength) {
    if (arrLength == 0) {
        cout << "No prime numbers found in the array." << endl; // If no prime numbers were found, print a message.
        return;
    }
    else {
        cout << "Prime numbers Array 2 : " << endl;
        for (int i = 0; i < arrLength; i++) {
            cout << SecondArr[i] << " "; // Print each prime number in the second array followed by a space.
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int SecondArr[100];
    int arr[100];
    int arrLength;
    int secondArrLength;
    CreateArray(arr, arrLength);
    PrintArrayy(arr, arrLength);
    PrintSecondArray(SecondArr, GetPrimeNumbers(arr, arrLength, SecondArr));
    return 0;
}
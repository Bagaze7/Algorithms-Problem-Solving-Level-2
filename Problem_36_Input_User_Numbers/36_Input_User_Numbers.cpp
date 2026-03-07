#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number?\n";
    cin >> Number;
    return Number;
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


enum YesNo
{
	No = 0,
	Yes = 1
};

YesNo AskToContinue()
{
	int Choice;
	cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
	cin >> Choice;
	return (YesNo)Choice;
}
void AddElement(int arr[], int& arrLength, int Number)
{
    arr[arrLength] = Number;
    arrLength++;
}
void FillArray(int arr[], int& arrLength)
{
    do {
        AddElement(arr, arrLength, ReadNumber());
    } while (AskToContinue() == Yes);
}
int AddNumberToArray(int arr[100])
{
    int counter = 0;
	int checker = 0;
    do {
    int Num = ReadNumber();
	arr[counter] = Num;
	counter++;
    cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
	cin >> checker;

	} while (checker != 0);
	return counter;
	
  
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArray(arr, arrLength);

    cout << "\nArray Length: " << arrLength << "\n";
    cout << "Array Elements: ";
    PrintArray(arr, arrLength);


  

    return 0;
}
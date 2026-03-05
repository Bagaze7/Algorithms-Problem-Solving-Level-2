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


int main()
{
    srand((unsigned)time(NULL));

	cout << RandomNumber(1, 100) << endl; // Generate and print a random number between 1 and 100.
	cout << RandomNumber(1, 100) << endl; // Generate and print another random number between 1 and 100.
	cout << RandomNumber(1, 100) << endl; // Generate and print yet another random number between 1 and 100.
    return 0;
}
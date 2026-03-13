#include <iostream>
using namespace std;

enum enChoice
{
	Stone = 1,
	Paper = 2,
	Scissors = 3
};
struct stGameResult {
	int ComputerWins = 0;
	int Player1Wins = 0;
	int Draw = 0;
	int GameRounds = 0;
};
float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

string Result(int ComputerChoice, int UserChoice, stGameResult& GameResult)
{
	if (ComputerChoice == enChoice::Stone && UserChoice == enChoice::Scissors)
	{
		GameResult.ComputerWins++;
		return "Computer";
	}
	else if (ComputerChoice == enChoice::Scissors && UserChoice == enChoice::Paper)
	{
		GameResult.ComputerWins++;
		return "Computer";
	}
	else if (ComputerChoice == enChoice::Paper && UserChoice == enChoice::Stone)
	{
		GameResult.ComputerWins++;
		return "Computer";
	}
	else if (ComputerChoice == UserChoice)
	{
		GameResult.Draw++;
		return "No Winner";
	}
	else
	{
		GameResult.Player1Wins++;
		return "Player1";
	}
}
string conversion(int Choice)
{
	switch (Choice)
	{
	case enChoice::Stone:
		return "Stone";
	case enChoice::Paper:
		return "Paper";
	case enChoice::Scissors:
		return "Scissors";
	default:
		return "Invalid Choice";
	}
}
void PrintRoundResult(int ComputerChoice, int UserChoice, int NumberOfRound, stGameResult& GameResult)
{
	string RoundWinner = Result(ComputerChoice, UserChoice, GameResult);

	if (RoundWinner == "Player1")
		system("color A0"); // Green background, black text
	else if (RoundWinner == "No Winner")
		system("color 60"); // Yellow background, black text
	else {
		system("color 40"); // Red background, black text
		cout << "\a"; // Beep sound
	}
	cout << "_____________Round[" << NumberOfRound << "]_____________ " << endl << endl;
	cout << "Player1  Choice: " << conversion(UserChoice) << endl;
	cout << "Computer Choice: " << conversion(ComputerChoice) << endl;
	cout << "Round Winner   : [" << RoundWinner << "]" << endl;
	cout << "__________________________________\n" << endl;

}
string FinalWinner(stGameResult& GameResult) {
	if (GameResult.Player1Wins == GameResult.ComputerWins)
		return "No Winner";
	else if (GameResult.ComputerWins > GameResult.Player1Wins)
		return "Computer";
	else return "Player1";
}
void FinalResult(stGameResult& GameResult) {

	// Determine the final winner
	string winner = FinalWinner(GameResult);

	// Change screen color based on the winner
	if (winner == "Computer") {
		system("color 40"); // Red background, black text
		cout << "\a"; // Beep sound
	}
	else if (winner == "Player1") {
		system("color A0"); // Green background, black text
	}
	else {
		system("color 60"); // Yellow background, black text
	}

	// Display final results
	cout << "_____________________________________________________________\n" << endl;
	cout << "                      +++ G a m e  O v e r +++                      " << endl;
	cout << "_____________________________________________________________\n" << endl;
	cout << "___________________________[Game Results]____________________\n" << endl;
	cout << "Game Rounds        : " << GameResult.GameRounds << endl;
	cout << "Player1 Won Times  : " << GameResult.Player1Wins << endl;
	cout << "Computer Won Times : " << GameResult.ComputerWins << endl;
	cout << "Draw times         : " << GameResult.Draw << endl;
	cout << "Final Winner       : " << winner << endl;
	cout << "_____________________________________________________________\n" << endl;
}

void Round() {
	stGameResult GameResult;
	int RoundCounter = 1;
	char PlayAgain = 'Y';
	do {
		system("cls");
		system("color 07"); // Default color
		int NumberOfRounds = ReadNumber("How many rounds 1 to 10 ?  ");
		GameResult.GameRounds = NumberOfRounds;
		while (NumberOfRounds <= 0)
		{
			cout << "Invalid Number of Rounds, Please enter a positive number." << endl;
			cin >> NumberOfRounds;
		}
		while (NumberOfRounds > 0)
		{
			cout << "\n\n";
			int ComputerChoice = rand() % 3 + 1;
			cout << "Round [" << RoundCounter << "] begins: \n" << endl;
			cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ";
			int UserChoice = 0;
			cin >> UserChoice;
			while (UserChoice < 1 || UserChoice > 3)
			{
				cout << "Invalid Choice, Please enter 1 for Stone, 2 for Paper, 3 for Scissors" << endl;
				cin >> UserChoice;
			}
			cout << endl;
			PrintRoundResult(ComputerChoice, UserChoice, RoundCounter, GameResult);
			NumberOfRounds--;
			RoundCounter++;

		}
		FinalResult(GameResult);
		cout << "\n\n";
		cout << "Do you want to play again ? Y/N? ";
		cin >> PlayAgain;
		RoundCounter = 1;
		GameResult.ComputerWins = 0;
		GameResult.Player1Wins = 0;
		GameResult.Draw = 0;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
	srand((unsigned)time(NULL));
	Round();
	return 0;
}
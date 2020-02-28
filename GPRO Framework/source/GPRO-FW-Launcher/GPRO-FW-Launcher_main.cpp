// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <ctime>
#include "TylerBellewGP-FW/random.h"
using namespace std;
int main()
{
	char retry = 'y';
	int guessLeft = 5;
	int random;
	int guess;
	int check;

	if (retry == 'y')
	{
		cout << "Guess a number between 1 and 10" << endl;
		random = randomNumber(time(0));
		while (guessLeft > 0)
		{
			cout << "You have " << guessLeft << " guesses left." << endl;
			cin >> guess;
			check = 100;
			check = checkGuess(guess, random, guessLeft);
			guess = 100;
			if (check == 0)
				cout << "Lower..." << endl;
			else if (check == 2)
				cout << "Higher..." << endl;
			else if (check == 1)
			{
				cout << "CORRECT" << endl;
				break;
			}
			else
				cout << "Invalid Guess!" << endl;
			cin.clear();
			cin.ignore();
		}

		if (guessLeft > 0)
		{
			cout << "YOU WIN! The Number was " << random << "." << endl;
			cout << "Do you want to play again ?(y/n)" << endl;
			cin >> retry;
			guessLeft = 3;
		}
		else if (guessLeft <= 0)
		{
			cout << "YOU LOSE! The Number was " << random << "." << endl;
			cout << "Do you want to play again ?(y/n)" << endl;
			cin >> retry;
			guessLeft = 3;
		}
	}
	else
		return EXIT_SUCCESS;
}

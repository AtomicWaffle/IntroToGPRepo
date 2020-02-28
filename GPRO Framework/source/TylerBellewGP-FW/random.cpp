
#include <random>
using namespace std;

int randomNumber(int seed)
{
	srand(seed);

	return (rand() % 10) + 1;
}

int checkGuess(int guess, int number, int &guessesLeft)
{
	int retVal;
	if (guess > 10 || guess < 1)
	{
		retVal = -1;
	}
	else if (guess > number)
	{
		retVal = 0;
		guessesLeft--;
	}
	else if (guess < number)
	{
		retVal = 2;
		guessesLeft--;
	}
	else if (guess = number)
	{
		retVal = 1;
	}
	else
		retVal = -1;
	return retVal;
}
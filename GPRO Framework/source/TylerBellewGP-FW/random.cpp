
#include <random>
using namespace std;

int randomNumber(int seed)
{
	srand(seed);

	return (rand() % 10) + 1;
}
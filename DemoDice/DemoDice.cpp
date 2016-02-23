#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class Dice
{
private: 
	int rollCount;

public:
	Dice(void);
	int roll(void);
	int rollNumber();
};

Dice::Dice(){
	rollCount = 0;
	srand(time(NULL));
}

int Dice::rollNumber(){
	return rollCount;
}

int Dice::roll(){
	return (rand() % 6) + 1;
}

int main(){
	Dice MyDice;

	cout << "Dice has rolled: " << MyDice.rollNumber() << endl;
	cout << "Dice shows: " << MyDice.roll() << endl;

	cout << "Dice has rolled: " << MyDice.rollNumber() << endl;
	cout << "Dice shows: " << MyDice.roll() << endl;
}
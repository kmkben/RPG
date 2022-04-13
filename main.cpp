#include <iostream>

#include "character.hpp"

using namespace std;

int main() 
{
	Character kwaito, emkay;

	emkay.attack(kwaito);
	kwaito.drinkLifePotion(20);
	emkay.attack(kwaito);
	kwaito.attack(emkay);
	emkay.changeWeapon("Double axe Venomous of death", 40);
	emkay.attack(kwaito);

	cout << "Emkay" << endl;
	emkay.printState();
	cout << endl;

	cout << "Kwaito" << endl;
	kwaito.printState();
	cout << endl;

	return 0;
}

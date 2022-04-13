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

	return 0;
}

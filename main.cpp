#include <iostream>

#include "character.hpp"

using namespace std;

int main() 
{
	Character ben("Ben", "Sharp Sword", 40);
	Character kwaito("Kwaito", "Crocobur", 25);
	Character emkay("Emkay", "Needle", 20);

	ben.attack(emkay);
	emkay.drinkLifePotion(20);
	ben.attack(emkay);
	emkay.attack(ben);
	ben.changeWeapon("Double-Edged sword of death", 50);
	ben.attack(kwaito);
	ben.attack(emkay);

	ben.printState();
	kwaito.printState();
	emkay.printState();

	kwaito.magicalAttack(emkay);
	ben.attack(kwaito);
	kwaito.attack(emkay);


	ben.printState();
	kwaito.printState();
	emkay.printState();

	kwaito.drinkLifePotion(40);
	kwaito.attack(ben);
	ben.drinkLifePotion(40);
	ben.magicalAttack(kwaito);
	kwaito.attack(ben);
	ben.attack(kwaito);

	ben.printState();
	kwaito.printState();
	emkay.printState();

	return 0;
}

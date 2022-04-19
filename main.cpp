#include <iostream>

#include "character.hpp"
#include "warrior.hpp"
#include "magician.hpp"

using namespace std;

int main() 
{
	Character ben("Ben", "Sharp Sword", 40);
	Character kwaito("Kwaito", "Crocobur", 25);
	Character emkay("Emkay", "Needle", 20);

	Warrior kedian("Kedian");
	Magician bassi("Bassi");

	ben.introduceYourself();
	kwaito.introduceYourself();
	kedian.introduceYourself();
	emkay.introduceYourself();
	bassi.introduceYourself();


	/*ben.attack(emkay);
	//ben.punch(kwaito);
	emkay.drinkLifePotion(20);
	ben.attack(emkay);
	emkay.attack(ben);
	ben.changeWeapon("Double-Edged sword of death", 50);
	ben.attack(kwaito);
	ben.attack(emkay);

	ben.printState();
	kwaito.printState();
	emkay.printState();

	kwaito.punch(emkay);
	ben.attack(kwaito);
	kwaito.attack(emkay);


	ben.printState();
	kwaito.printState();
	emkay.printState();

	kwaito.drinkLifePotion(40);
	kwaito.attack(ben);
	ben.drinkLifePotion(40);
	ben.punch(kwaito);
	kwaito.attack(ben);
	ben.attack(kwaito);

	ben.printState();
	kwaito.printState();
	emkay.printState();*/

	return 0;
}

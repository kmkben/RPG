#include "warrior.hpp"

using namespace std;


Warrior::Warrior() : Character()
{
}

Warrior::Warrior(string name) : Character(name)
{
}

Warrior::Warrior(string name, string weaponName, int weaponDamage) : Character(name, weaponName, weaponDamage)
{
}

void Warrior::hittingWithAHammer()
{
}

void Warrior::introduceYourself() const
{
	Character::introduceYourself();

	cout << "I am a warrior" << endl;
}

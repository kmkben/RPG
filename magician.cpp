#include "magician.hpp"

using namespace std;

Magician::Magician() : Character(), m_mana(100)
{
}

Magician::Magician(string name) : Character(name), m_mana(100)
{
}

Magician::Magician(string name, string weaponName, int weaponDamage) : Character(name, weaponName, weaponDamage), m_mana(100)
{
}



void Magician::throwFireBall() const
{
}

void Magician::throwIceBall() const
{
}

void Magician::introduceYourself() const
{
	Character::introduceYourself();

	cout << "I am a magician" << endl;

}

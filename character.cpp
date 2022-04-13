#include "character.hpp"

using namespace std;

Character::Character() : m_life(100), m_mana(100), m_weapon("Rusty sword", 10)
{
}

Character::Character(string weaponName, int weaponDamage) : m_life(100), m_mana(100), m_weapon(weaponName, weaponDamage)
{
}

Character::~Character()
{
}

void Character::receiveDamage(int nbDamage)
{
	m_life -= nbDamage;

	if (m_life < 0)
	{
		m_life = 0;
	}
}

void Character::attack(Character &target)
{
	target.receiveDamage(m_weapon.getDamage());
}

void Character::drinkLifePotion(int potion)
{
	m_life += potion;

	if (m_life > 100)
	{
		m_life = 100;
	}
}

void Character::changeWeapon(string name, int damage)
{
	m_weapon.change(name, damage);
}

bool Character::isAlive() const
{
	return (m_life > 0);
}


void Character::printState() const 
{
	cout << "\tLife: " << m_life << endl;
	cout << "\tMana: " << m_mana << endl;
	cout << "\t";
	m_weapon.print();
}

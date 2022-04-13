#include "character.hpp"

using namespace std;

Character::Character() : m_life(100), m_mana(100), m_weaponName("Rusty sword"), m_weaponDamage(10)
{
}

Character::Character(string weaponName, int weaponDamage) : m_life(100), m_mana(100), m_weaponName(weaponName), m_weaponDamage(weaponDamage)
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
	target.receiveDamage(m_weaponDamage);
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
	m_weaponName = name;
	m_weaponDamage = damage;
}

bool Character::isAlive() const
{
	return (m_life > 0);
}

#include "weapon.hpp"

using namespace std;


Weapon::Weapon() : m_name("Rusty Sword"), m_damage(10)
{
}

Weapon::Weapon(string name, int damage) : m_name(name), m_damage(damage)
{
}

void Weapon::change(string name, int damage)
{
	m_name = name;
	m_damage = damage;
}

string Weapon::getName() const
{
	return m_name;
}

void Weapon::setName(string name)
{
	m_name = name;
}

int Weapon::getDamage() const
{
	return m_damage;
}

void Weapon::setDamage(int damage)
{
	m_damage = damage;
}


void Weapon::print() const
{
	cout << "Weapon: " << m_name << "Damages: " << m_damage << ")" << endl;
}

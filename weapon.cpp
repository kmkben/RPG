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

void Weapon::print() const
{
	cout << "Weapon: " << m_name << "Damages: " << m_damage << ")" << endl;
}

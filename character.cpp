#include "character.hpp"

using namespace std;

Character::Character() : m_name("No Name"), m_life(100), m_weapon(nullptr)
{
	m_weapon = new Weapon(); 
}

Character::Character(string name) : m_name(name), m_life(100), m_weapon(nullptr)
{
	m_weapon = new Weapon("Rusty Sword", 10);
}

Character::Character(string name, string weaponName, int weaponDamage) : m_name(name), m_life(100), m_weapon(nullptr) 
{
	m_weapon = new Weapon(weaponName, weaponDamage);

}

Character::Character(Character const& character) : m_name(character.m_name), m_life(character.m_life), m_weapon(nullptr)
{
	m_weapon = new Weapon(*(character.m_weapon));		
}

Character::~Character()
{
	delete m_weapon;
}

Character& Character::operator=(Character const& character)
{
	if(this != &character)
	{
		m_name = character.m_name;
		m_life = character.m_life;
		//m_mana = character.m_mana;

		delete m_weapon;

		m_weapon = new Weapon(*(character.m_weapon));
	}

	return *this;
}

void Character::receiveDamage(int nbDamage)
{
	cout << m_name << " suffers " << nbDamage << " points of damage" << endl;

	m_life -= nbDamage;

	if (m_life < 0)
	{
		m_life = 0;
		cout << m_name << " is dead.\n" << endl;
	}
	else
	{
		cout << m_name << " has " << m_life << " point of life.\n" << endl;
	}
}

void Character::attack(Character &target)
{
	cout << m_name << " attaks " << target.getName() << "\n" << endl;

	target.receiveDamage(m_weapon->getDamage());
}

/*void Character::magicalAttack(Character &target)
{
	if (m_mana > 0)
	{
		const int mana = 10;
		cout << m_name << " attack " << target.getName() << ".\n" << endl;
		
		if (m_mana > 10)
			target.receiveDamage(mana);
		else 
			target.receiveDamage(m_mana);

		m_mana -= mana;

		if (m_mana < 0)
		{
			m_mana = 0;

			cout << m_name << " doesn't have any Mana. So you can't anymore attack magically in the future.\n" << endl;
		}

	}
	else
	{
		cout << "You don't have any Mana so you can't attack magically\n" << endl;
	}
}*/

void Character::punch(Character &target) const 
{
	cout << m_name << " is punching " << target.getName() << "\n" << endl;

	target.receiveDamage(10);
}

void Character::drinkLifePotion(int potion)
{
	cout << m_name << " drinks a potion for " << potion << " point of life." << endl;

	m_life += potion;

	if (m_life > 100)
	{
		m_life = 100;
	}

	cout << m_name << " has " << m_life << " point of life.\n" << endl;
}

void Character::changeWeapon(string name, int damage)
{
	cout << m_name << " change weapon to : " << endl;
	m_weapon->change(name, damage);
	cout << "\t" ;
	m_weapon->print();
	cout << "\n" << endl;
}

bool Character::isAlive() const
{
	return (m_life > 0);
}

string Character::getName() const
{
	return m_name;
}

void Character::setName(string name)
{
	m_name = name;
}


void Character::printState() const 
{
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << m_name << endl;
	cout << "---------------------" << endl;
	cout << "\tLife: " << m_life << endl;
	//cout << "\tMana: " << m_mana << endl;
	cout << "\t";
	m_weapon->print();
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << endl;
}

void Character::introduceYourself() const
{
	cout << "--------------------------------------------------" << endl;
	cout << "I am " << m_name << "." << endl;
	cout << "I still have " << m_life << " points of life.a" << endl;
	//cout << "--------------------------------------------------" << endl;
}

#ifndef DEF_CHARACTER
#define DEF_CHARACTER


#include <string>

#include "weapon.hpp"


class Character 
{
	public:
		Character();
		Character(std::string, int);
		~Character();
		void receiveDamage(int);
		void attack(Character& );
		void drinkLifePotion(int);
		void changeWeapon(std::string, int);
		bool isAlive() const;
		void printState() const;


	private:
		int m_life;
		int m_mana;
		Weapon m_weapon;
		//std::string m_weaponName;
		//int m_weaponDamage;
};


#endif //DEF_CHARACTER

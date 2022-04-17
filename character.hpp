#ifndef DEF_CHARACTER
#define DEF_CHARACTER


#include <string>

#include "weapon.hpp"


class Character 
{
	public:
		Character();
		Character(std::string);
		Character(std::string, std::string, int);
		Character(Character const&);
		
		~Character();

		Character& operator=(Character const&);

		void receiveDamage(int);
		void attack(Character& );
		void magicalAttack(Character&);
		void drinkLifePotion(int);
		void changeWeapon(std::string, int);
		bool isAlive() const;
		void printState() const;

		std::string getName() const;
		void setName(std::string);


	private:
		std::string m_name;
		int m_life;
		int m_mana;
		Weapon *m_weapon;
		//std::string m_weaponName;
		//int m_weaponDamage;
};


#endif //DEF_CHARACTER

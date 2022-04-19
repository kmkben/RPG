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
		void punch(Character& ) const;

		void drinkLifePotion(int);

		void changeWeapon(std::string, int);

		bool isAlive() const;
		void printState() const;

		void introduceYourself() const;

		std::string getName() const;
		void setName(std::string);


	protected:
		std::string m_name;
		int m_life;
		//int m_mana;
		Weapon *m_weapon;
};


#endif //DEF_CHARACTER

#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>


class Weapon
{

	public:
		Weapon();
		Weapon(std::string, int);
		void change(std::string, int);

		std::string getName() const;
		void setName(std::string);
		int getDamage() const;
		void setDamage(int );

		void print() const;


	private:
		std::string m_name;
		int m_damage;
};


#endif  //DEF_WEAPON

#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>


class Weapon
{

	public:
		Weapon();
		Weapon(std::string, int);
		change(std::string, int);
		void print() const;


	private:
		std::string m_name;
		int m_damage;
};


#endif  //DEF_WEAPON

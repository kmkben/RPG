#ifndef DEF_WARRIOR
#define DEF_WARRIOR

#include <iostream>
#include <string>

#include "character.hpp"


class Warrior : public Character 
{
	public:
		Warrior();
		Warrior(std::string);
		Warrior(std::string, std::string, int);

		void hittingWithAHammer();

		void introduceYourself() const;
};

#endif //DEF_WARRIOR

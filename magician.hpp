#ifndef DEF_MAGICIAN
#define DEF_MAGICIAN

#include <iostream>
#include <string>

#include "character.hpp"

class Magician : public Character
{
	public:
		Magician();
		Magician(std::string);
		Magician(std::string, std::string, int);
		//Magician(Magician const&);

		void throwFireBall() const;
		void throwIceBall() const;

		void introduceYourself() const;


	private:
		int m_mana;
};

#endif //DEF_MAGICIAN

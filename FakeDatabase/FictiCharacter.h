#pragma once
#include <string>
class FictiCharacter
{
	
public:
	std::string commonName;
	
private:
	std::string realname;
	double cash;
	int age;
	std::string bday;

	enum PersonType
	{
		Criminal,
		Hero,
		Vigilante,
		Civilian,
		Soldier,
		Official
	};
};


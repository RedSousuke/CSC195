#pragma once
class Person
{
private:
	int age = 34;
	std::string favoriteColor = "orange";
	bool hasPhone = true;
public:
	int sayAge();
	void chsckPhone();
	std::string speakOutLoud();
};


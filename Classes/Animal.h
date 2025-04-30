#pragma once
class Animal
{
public:
	Animal() { SetEyes(3); };
	void Travel();
	int GetEyes() {return m_eyes;};
	void SetEyes(int number) { m_eyes = number; };
protected:
	int m_eyes;
};


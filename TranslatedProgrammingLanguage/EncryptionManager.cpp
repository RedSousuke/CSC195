#include "EncryptionManager.h"
#include <string>
#include "ConsoleUI.h"
void run()
{
	mainMenu();
	//placeholder
}

void mainMenu()
{
	while (true)
	{
		int selection = 0;
		switch (selection)
		{
			case 1:
				break;
			default:
				return;
		}
	}
}

void addEncryption()
{
	int selection = 0;
	switch (selection)
	{
		case 1:
			break;
		default:
			return;
	}
}

std::string displayOptions()
{
	
	enum encMethod
	{
		encrypt,
		decrypt,
		none
	};
	encMethod selection = none;
	std::string request = "";
	if (request._Equal("decrypt"))
	{
		selection = decrypt;
	}
	else if (request._Equal("encrypt"))
	{
		selection = encrypt;
	}
	switch (selection)
	{
		case encrypt:
			break;
		case decrypt:
			break;
		default:
			return "Main Menu";
	}
}

void listEncryptions()
{
	//placeholder
}

void messageChoice()
{

}


std::string encrypt()
{

}

std::string decrypt()
{

}

void dropEncryptions()
{

}
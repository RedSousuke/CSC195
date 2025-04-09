#pragma once

class EncryptionManager
{
	std::string message = "";
	// placeholder for array of encryptable items
public :
	void run();
private:
	void mainMenu();
	void addEncryption();
	std::string displayOptions;
	void listEncryptions();
	void messageChoice();
	std::string encrypt();
	std::string decrypt();
	void dropEncryptions();
};


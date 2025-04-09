#include "ConsoleUI.h"
#include <string>
#include <iostream>

using namespace std;

string ConsoleUI::BLACK = "\u001B[30m";
string ConsoleUI::RED = "\u001B[31m";
string ConsoleUI::GREEN = "\u001B[32m";
string ConsoleUI::YELLOW = "\u001B[33m";
string ConsoleUI::BLUE = "\u001B[34m";
string ConsoleUI::PURPLE = "\u001B[35m";
string ConsoleUI::CYAN = "\u001B[36m";
string ConsoleUI::WHITE = "\u001B[37m";
string ConsoleUI::BACKGROUND_BLACK = "\u001B[40m";
string ConsoleUI::BACKGROUND_RED = "\u001B[41m";
string ConsoleUI::BACKGROUND_GREEN = "\u001B[42m";
string ConsoleUI::BACKGROUND_YELLOW = "\u001B[43m";
string ConsoleUI::BACKGROUND_BLUE = "\u001B[44m";
string ConsoleUI::BACKGROUND_PURPLE = "\u001B[45m";
string ConsoleUI::BACKGROUND_CYAN = "\u001B[46m";
string ConsoleUI::BACKGROUND_WHITE = "\u001B[47m";
string ConsoleUI::RESET = "\u001B[0m";


void ConsoleUI::writeLnYellow(string text)
{
	cout << ConsoleUI::YELLOW + text + RESET;
}
void ConsoleUI::writeLnBlue(string text)
{
	cout << ConsoleUI::BLUE + text + RESET;
}
void ConsoleUI::writeLnRed(string text)
{
	cout << ConsoleUI::RED + text + RESET;
}
void ConsoleUI::writeLnGreen(string text)
{
	cout << ConsoleUI::GREEN + text + RESET;
}
void ConsoleUI::writeLnPurple(string text)
{
	cout << ConsoleUI::PURPLE + text + RESET;
}
void ConsoleUI::writeLnCyan(string text)
{
	cout << ConsoleUI::CYAN + text + RESET;
}
void ConsoleUI::writeLnWhite(string text)
{
	cout << ConsoleUI::WHITE + text + RESET;
}
void ConsoleUI::writeLnBlack(string text)
{
	cout << ConsoleUI::BLACK + text + RESET;
}

string ConsoleUI::getStringWithColor(string text, color color)
{
	return getColorText(color) + text + RESET;
}

char ConsoleUI::getCharInput(string message)
{
	return getCharInput(message, DEFAULT);
}

char ConsoleUI::getCharInput(string message, color color)
{
	char response = '\0';
	do
	{
		string responseS = getStringInput(message, false, color);
		if (responseS.length() > 0)
		{
			response = responseS[0];
		}
	} while (response == '\0');
	return response;
}

bool ConsoleUI::getBoolInput(string message, string positive, string negative)
{
	return getBoolInput(message,positive,negative,DEFAULT);
}

bool ConsoleUI::getBoolInput(string message, string positive, string negative, color color)
{
	bool response = false;
	bool isValidResponse = false;
	do
	{
		string responseS = getStringInput(message, false, color);
		if (true)
		{

		}
	} while (!isValidResponse);
	return false;
}

double ConsoleUI::getDoubleInput(string message)
{
	return 0.0;
}

double ConsoleUI::getDoubleInput(string message, color color)
{
	return 0.0;
}

float ConsoleUI::getFloatInput(string message)
{
	return 0.0f;
}

float ConsoleUI::getFloatInput(string message, color color)
{
	return 0.0f;
}

long ConsoleUI::getLongInput(string message)
{
	return 0;
}

long ConsoleUI::getLongInput(string message, color color)
{
	return 0;
}

int ConsoleUI::getIntInput(string message)
{
	return 0;
}

int ConsoleUI::getIntInput(string message, int min, int max)
{
	return 0;
}

int ConsoleUI::getIntInput(string message, color color)
{
	return 0;
}

int ConsoleUI::getIntInput(string message, int min, int max, color color)
{
	return 0;
}

string ConsoleUI::getStringInput(string message)
{
	return string();
}

string ConsoleUI::getStringInput(string message, bool allowEmpty)
{
	return string();
}

string ConsoleUI::getStringInput(string message, bool allowEmpty, color color)
{
	return string();
}

void ConsoleUI::write(string message)
{
}

void ConsoleUI::write(string message, color color)
{
}

void ConsoleUI::writeLn(string message)
{
}

void ConsoleUI::writeLn(string message, color color)
{
}

void ConsoleUI::writeLn(string message, color color, backcolor backcolor)
{
}

string ConsoleUI::getColorText(color color)
{
	return string();
}

string ConsoleUI::getBackColorText(backcolor backcolor)
{
	return string();
}

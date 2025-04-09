
#pragma once
#include <string>
using namespace std;
class ConsoleUI
{
public:
	static string BLACK;
	static string RED;
	static string GREEN;
	static string YELLOW;
	static string BLUE;
	static string PURPLE;
	static string CYAN;
	static string WHITE;
	static string BACKGROUND_BLACK;
	static string BACKGROUND_RED;
	static string BACKGROUND_GREEN;
	static string BACKGROUND_YELLOW;
	static string BACKGROUND_BLUE;
	static string BACKGROUND_PURPLE;
	static string BACKGROUND_CYAN;
	static string BACKGROUND_WHITE;
	static string RESET;

	enum color
	{
		black,
		red,
		green,
		yellow,
		blue,
		purple,
		cyan,
		white,
		DEFAULT
	};
	enum backcolor
	{
		black,
		red,
		green,
		yellow,
		blue,
		purple,
		cyan,
		white,
		DEFaULt
	};

	void writeLnYellow(string text);
	void writeLnBlue(string text);
	void writeLnRed(string text);
	void writeLnGreen(string text);
	void writeLnPurple(string text);
	void writeLnCyan(string text);
	void writeLnWhite(string text);
	void writeLnBlack(string text);
	string getStringWithColor(string text, color color);
	char getCharInput(string message);
	char getCharInput(string, color color);
	bool getBoolInput(string message, string positive, string negative);
	bool getBoolInput(string message, string positive, string negative, color color);
	double getDoubleInput(string message);
	double getDoubleInput(string message,color color);
	float getFloatInput(string message);
	float getFloatInput(string message, color color);
	long getLongInput(string message);
	long getLongInput(string message, color color);
	int getIntInput(string message);
	int getIntInput(string message,int min, int max);
	int getIntInput(string message, color color);
	int getIntInput(string message,int min, int max, color color);
	string getStringInput(string message);
	string getStringInput(string message,bool allowEmpty);
	string getStringInput(string message,bool allowEmpty, color color);
	void write(string message);
	void write(string message, color color);
	void writeLn(string message);
	void writeLn(string message, color color);
	void writeLn(string message, color color, backcolor backcolor);
	string getColorText(color color);
	string getBackColorText(backcolor backcolor);
};
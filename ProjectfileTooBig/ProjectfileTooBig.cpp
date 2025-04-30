#include <iostream>
#include <fstream>
#include <string>
#include <vector>
void Write(std::string& text, std::ostream& ostream)
{
    ostream << text << std::endl;
}
void Read(std::string& text, std::istream& istream)
{
    std::getline(istream, text);
}
int main()
{
    std::string text = "words words words \n";
    std::cout << text;
    std::getline(std::cin, text);
    Write(text, std::cout);
}



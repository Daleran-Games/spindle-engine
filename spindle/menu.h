#pragma once
#include <iostream>
#include <string>

class menu
{
public:
	menu(std::string name);
	~menu();
	
protected:
	std::string name;
	std::string roomDescription;
};


#pragma once
#include <string>
#include <iostream>


class Card
{
public:
	Card();
	~Card();

private:
	std::string name;
	int power;
	enum line
	{
		FRONTLINE,
		ARCHER,
		SEIGE
	};
	std::string description;
	std::string power;

};


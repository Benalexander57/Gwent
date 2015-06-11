#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "Card.h"


class Player
{
public:
	Player();
	~Player();

private: 
	std::string name;
	int power;
	std::vector<Card> deck;
	std::vector<Card> hand;
	std::vector<Card> discardPile;
};


#pragma once
#include <random>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Visuals.h"

class GameSetup
{
public:
	void game_setup(int s_s, bool c_s, sf::RenderWindow& window);
private:
	int rnd_number();
};


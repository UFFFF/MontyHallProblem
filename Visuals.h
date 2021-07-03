#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
class Visuals
{
public:
	Visuals();
	void vs_s();
	void vw_p();
	void vl_p();
	void draw_all(sf::RenderWindow& window);
	void update(int s_s, float w_p, float l_p);
private:
	sf::Font m_font;
	sf::Text m_s_s, m_w_p, m_l_p;
};


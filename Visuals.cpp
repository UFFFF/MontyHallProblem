#include "Visuals.h"

Visuals::Visuals()
{
	if (!m_font.loadFromFile("Font/OpenSans-Regular.ttf"))
	{
		std::cout << "couldnt load font" << std::endl;
	}
}

void Visuals::vs_s()
{
	m_s_s.setFont(m_font);
	m_s_s.setFillColor(sf::Color::Green);
	m_s_s.setCharacterSize(35);
	m_s_s.setPosition(sf::Vector2f(350, 20));
	m_s_s.setString("Samples: ");
}

void Visuals::vw_p()
{
	m_w_p.setFont(m_font);
	m_w_p.setFillColor(sf::Color::Green);
	m_w_p.setCharacterSize(35);
	m_w_p.setPosition(sf::Vector2f(550, 200));
	m_w_p.setString("Win Percentage: ");
}

void Visuals::vl_p()
{
	m_l_p.setFont(m_font);
	m_l_p.setFillColor(sf::Color::Green);
	m_l_p.setCharacterSize(35);
	m_l_p.setPosition(sf::Vector2f(20, 200));
	m_l_p.setString("Lose Percentage: ");
}

void Visuals::draw_all(sf::RenderWindow& window) {
	window.draw(m_l_p);
	window.draw(m_w_p);
	window.draw(m_s_s);
}

void Visuals::update(int s_s, float w_p, float l_p)
{
	m_s_s.setString("Samples: " + std::string(std::to_string(s_s)));
	m_w_p.setString("Win Percentage: " + std::string(std::to_string(w_p)));
	m_l_p.setString("Lose Percentage: " + std::string(std::to_string(l_p)));
}

#include "GameSetup.h"

void GameSetup::game_setup(int s_s, bool c_s, sf::RenderWindow& window)
{
	int win = 0, lose = 0;
	float win_p = 0, lose_p = 0;

	Visuals v;
	v.vl_p();
	v.vs_s();
	v.vw_p();

	window.setFramerateLimit(60);

	for (unsigned int i = 0; i < s_s; i++) {

		int computer_d = rnd_number();
		std::cout << computer_d << std::endl;

		int winning_d = rnd_number();
		std::cout << winning_d << std::endl;

		if (c_s) {
			if (winning_d != 2 && computer_d != 2) {
				if (computer_d == 0) {
					computer_d = 1;
				}
				else if (computer_d == 1) {
					computer_d = 0;
				}
			}
			else if (winning_d != 1 && computer_d != 1) {
				if (computer_d == 0) {
					computer_d = 2;
				}
				else if (computer_d == 2) {
					computer_d = 0;
				}
			}
			else if (winning_d != 0 && computer_d != 0) {
				if (computer_d == 1) {
					computer_d = 2;
				}
				else if (computer_d == 2) {
					computer_d = 1;
				}
			}
		}

		if (computer_d == winning_d) {
			win++;
		}
		else {
			lose++;
		}
		win_p = (static_cast<float>(win) / static_cast<float>(i)) * 100;
		lose_p = (static_cast<float>(lose) / static_cast<float>(i)) * 100;

		if (s_s != i) {
			window.clear();
			v.update(i, win_p, lose_p);
			v.draw_all(window);
			window.display();
		}
		else {
			break;
		}
	}
}


int GameSetup::rnd_number()
{
	std::random_device rd;
	std::mt19937 r_n(rd());
	std::uniform_int_distribution<> dis(0, 2);
	return dis(r_n);
}

#include <iostream>
#include <string>
#include "GameSetup.h"

int input() {
    double s_s;
    std::cout << "######################################" << std::endl;
    std::cout << "###       Monty Hall Problem       ###" << std::endl;
    std::cout << "######################################" << std::endl;
    std::cout << "set sample size: ";
    std::cin >> s_s;
    return s_s;
}

bool c_switch() {
    std::string a;
    std::cout << "######################################" << std::endl;
    std::cout << "###     do you want to switch?     ###" << std::endl;
    std::cout << "######################################" << std::endl;
    std::cout << "###     Yes(Y)    ###    No(N)     ###" << std::endl;
    std::cout << "######################################" << std::endl;
    std::cout << ":  ";
    std::cin >> a;
    if (a == "Y") {
        return true;
    }
    else if (a == "N") {
        return false;
    }
}

int main() {
    int s_s = input();
    bool c_s = c_switch();
    GameSetup gs;
    sf::RenderWindow window(sf::VideoMode(1000, 400), "Monty Hall Problem");
    gs.game_setup(s_s, c_s, window);
    while (1) {
        window.display();
    }
	return 0;
}
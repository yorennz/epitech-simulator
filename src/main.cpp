#include <iostream>
#include <vector>

#include "SFML.hpp" // temporary because the goal is to optimize \
                    the compilation by including only needed library
#include "Window.hpp"
#include "Player.hpp"

int epitech_simulator(int ac, char * const * const av)
{
    Window window("Epitech Simulator", 800, 600, 32);
    Player player(sf::Color::Red, sf::Vector2f(100, 100), 10); // constructor which take COLOR, SIZE, and SPEED of the player \
                                                               temporary because the goal is to take one parameter to retrieve datas from file

    while (window.isOpen()) {
        window.events();
        player.events();
        window.display();
        player.draw(window.get());
    }
    return 0;
}

int main(int ac, char * const * const av)
{
    return epitech_simulator(ac, av);
}

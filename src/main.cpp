#include <iostream>
#include <vector>

#include "SFML.hpp" // temporaire (le but étant d'inclure \
                   le strict nécessaire dans chaque fichiers
#include "Window.hpp"
#include "Player.hpp"

void check_keys_pressed(Player& player)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        player.move(0, -3);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        player.move(-3, 0);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        player.move(0, 3);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        player.move(3, 0);
    return;
}

int epitech_simulator(int ac, char * const * const av)
{
    Window window("Epitech Simulator", 800, 600, 32);
    Player player;

    while (window.isOpen()) {
        window.events();
        check_keys_pressed(player);
        window.display();
        player.draw(window.get());
    }
    return 0;
}

int main(int ac, char * const * const av)
{
    return epitech_simulator(ac, av);
}

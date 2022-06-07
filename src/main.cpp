#include "Config.hpp"
#include "Window.hpp"
#include "Player.hpp"

int epitech_simulator(int ac, char * const * const av)
{
    Config config;
    Window window;
    Player player; // constructor which take COLOR, SIZE, and SPEED of the player \
                   temporary because the goal is to take one parameter to retrieve datas from file

    window.create("Epitech Simulator", sf::VideoMode(800, 600, 32),
                  sf::Style::Default);
    player.create(sf::Color::Red, sf::Vector2f(100, 100), 10);
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

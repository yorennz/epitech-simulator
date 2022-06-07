#include <iostream>
#include <vector>

#include "SFML.hpp" // temporaire (le but étant d'inclure \
                   le strict nécessaire dans chaque fichiers
#include "Player.hpp"

void check_events(sf::Window& window, sf::Event& event)
{
    if (event.type == sf::Event::Closed)
        window.close();
    return;
}

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
    sf::RenderWindow window;
    sf::Event event;
    sf::VideoMode video_mode(800, 600, 32);
    Player player;

    window.create(video_mode, "Epitech Simulator", sf::Style::Default);
    window.setFramerateLimit(60);
    while (window.isOpen()) {
        window.clear(sf::Color::Black);
        player.draw(window);
        window.display();
        check_keys_pressed(player);
        while (window.pollEvent(event))
            check_events(window, event);
    }
    return 0;
}

int main(int ac, char * const * const av)
{
    return epitech_simulator(ac, av);
}

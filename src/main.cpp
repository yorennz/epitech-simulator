/*
** EPITECH PROJECT, 2022
** main
** File description:
** main function that check error handling and load the game
*/

#include <iostream>
#include <SFML/Window.hpp>

void check_events(sf::Window& window, sf::Event& event)
{
    if (event.type == sf::Event::Closed)
        window.close();
}

void epitech_simulator(int ac, char * const * const av)
{
    sf::Window window;
    sf::Event event;

    window.create(sf::VideoMode(800, 600), "My window");
    while (window.isOpen()) {
        window.display();
        while (window.pollEvent(event))
            check_events(window, event);
    }
    return;
}

int main(int ac, char * const * const av)
{
    epitech_simulator(ac, av);
    return 0;
}
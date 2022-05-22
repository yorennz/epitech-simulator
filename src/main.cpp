/*
** EPITECH PROJECT, 2022
** main
** File description:
** main function that check error handling and load the game
*/

#include <SFML/Window.hpp>

void check_events(sf::Window& window, sf::Event& event)
{
    if (event.type == sf::Event::Closed)
        window.close();
    return;
}

int epitech_simulator(int ac, char * const * const av)
{
    sf::Window window;
    sf::Event event;
    sf::VideoMode video_mode(800, 600, 32);

    window.create(video_mode, "Epitech Simulator");
    window.setFramerateLimit(60);
    while (window.isOpen()) {
        window.display();
        while (window.pollEvent(event))
            check_events(window, event);
    }
    return 0;
}

int main(int ac, char * const * const av)
{
    return epitech_simulator(ac, av);
}

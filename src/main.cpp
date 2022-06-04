#include <iostream>
#include <vector>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/Main.hpp>

void check_events(sf::Window& window, sf::Event& event)
{
    if (event.type == sf::Event::Closed)
        window.close();
    return;
}

void check_keys_pressed(sf::RectangleShape& rectangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
        rectangle.move(sf::Vector2f(0, -1));
        rectangle.setFillColor(sf::Color::Magenta);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
        rectangle.move(sf::Vector2f(-1, 0));
        rectangle.setFillColor(sf::Color::Blue);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        rectangle.move(sf::Vector2f(0, 1));
        rectangle.setFillColor(sf::Color::Green);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        rectangle.move(sf::Vector2f(1, 0));
        rectangle.setFillColor(sf::Color::Yellow);
    }
    return;
}

int epitech_simulator(int ac, char * const * const av)
{
    sf::RenderWindow window;
    sf::Event event;
    sf::VideoMode video_mode(800, 600, 32);
    sf::RectangleShape rectangle;

    rectangle.setSize(sf::Vector2f(100, 100));
    rectangle.setFillColor(sf::Color::Red);
    window.create(video_mode, "Epitech Simulator", sf::Style::Default);
    window.setFramerateLimit(120+120);
    while (window.isOpen()) {
        window.clear(sf::Color::Black);
        window.draw(rectangle);
        window.display();
        check_keys_pressed(rectangle);
        while (window.pollEvent(event))
            check_events(window, event);
    }
    return 0;
}

int main(int ac, char * const * const av)
{
    return epitech_simulator(ac, av);
}

#pragma once

#include <string>

#include <SFML/Graphics.hpp>

class Window
{
    public:

    // Constructors

    Window(void);
    Window(std::string const& title, sf::VideoMode const& videoMode,
           unsigned int const& style);

    // Methods

    void create(std::string const& title, sf::VideoMode const& videoMode,
                unsigned int const& style);
    void close(void);
    bool isOpen(void);
    void resize(int const& width, int const& height);
    void events(void);
    void display(void);
    sf::RenderWindow &get(void);

    private:

    // Attributes

    std::string m_title;
    sf::RenderWindow m_window;
    sf::Event m_event;
    sf::View m_view;
};

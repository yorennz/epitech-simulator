#pragma once

#include "SFML.hpp"

class Window
{
    public:

    // Constructors

    Window(std::string const& title, unsigned int const& width,
           unsigned int const& height, unsigned int const& bitsPerPixel = 32);

    // Methods

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

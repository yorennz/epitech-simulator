#include <string>

#include "Window.hpp"

Window::Window(std::string const& title, unsigned int const& width,
               unsigned int const& height, unsigned int const& bitsPerPixel):
    m_title(title)
{
    m_window.create(sf::VideoMode(width, height, bitsPerPixel), m_title, sf::Style::Default);
    m_window.setFramerateLimit(60);
    m_view = m_window.getDefaultView();
}

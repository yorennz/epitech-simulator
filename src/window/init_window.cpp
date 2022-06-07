#include "Window.hpp"

Window::Window(void)
{
}

Window::Window(std::string const& title, sf::VideoMode const& videoMode,
               unsigned int const& style)
{
    Window::create(title, videoMode, style);
}

#include "Window.hpp"

void Window::close(void)
{
    m_window.close();
    return;
}

bool Window::isOpen(void)
{
    return m_window.isOpen();
}

void Window::resize(int const& width, int const& height)
{
    m_view.setSize(sf::Vector2f(width, height));
    m_window.setView(m_view);
    return;
}

void Window::events(void)
{
    while(m_window.pollEvent(m_event)) {
        if (m_event.type == sf::Event::Closed)
            Window::close();
        if (m_event.type == sf::Event::Resized)
            Window::resize(m_event.size.width, m_event.size.height);
    }
    return;
}

void Window::display(void)
{
    m_window.display();
    m_window.clear(sf::Color::Black);
}

sf::RenderWindow &Window::get(void)
{
    return m_window;
}

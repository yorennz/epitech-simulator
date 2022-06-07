#include "Player.hpp"

Player::Player(void):
    m_color(sf::Color::Green), m_size(100, 100)
{
    m_shape.setSize(m_size);
    m_shape.setFillColor(m_color);
}

Player::Player(sf::Color const& color, float const& width, float const& height):
    m_color(color), m_size(sf::Vector2f(width, height))
{
    m_shape.setSize(m_size);
    m_shape.setFillColor(m_color);
}

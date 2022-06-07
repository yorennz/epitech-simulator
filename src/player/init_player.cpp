#include "Player.hpp"

Player::Player(void):
    m_color(sf::Color::Green), m_size(100, 100)
{
    m_shape.setSize(m_size);
    m_shape.setFillColor(m_color);
}

Player::Player(sf::Color const& color, sf::Vector2f size, float const& speed):
    m_color(color), m_size(size), m_speed(speed)
{
    m_shape.setSize(m_size);
    m_shape.setFillColor(m_color);
}

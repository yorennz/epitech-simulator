#include "Player.hpp"

void Player::create(sf::Color const& color, sf::Vector2f const& size,
                    float const& speed)
{
    m_color = color;
    m_size = size;
    m_speed = speed;
    m_shape.setFillColor(m_color);
    m_shape.setSize(m_size);
}

void Player::events(void)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        Player::move(0, -m_speed);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        Player::move(-m_speed, 0);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        Player::move(0, m_speed);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        Player::move(m_speed, 0);
    return;
}

void Player::move(float const& x, float const& y)
{
    m_shape.move(sf::Vector2f(x, y));
    return;
}

void Player::draw(sf::RenderWindow &window) const
{
    window.draw(m_shape);
    return;
}

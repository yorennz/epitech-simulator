#include "Player.hpp"

#include <iostream>

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

#include "Player.hpp"

Player::Player(void)
{
};

Player::Player(sf::Color const& color, sf::Vector2f const& size, float const& speed)
{
    Player::create(color, size, speed);
};

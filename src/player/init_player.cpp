#include "Player.hpp"
#include <iostream>

Player::Player(void)
{
    Player::create(sf::Color::Cyan, sf::Vector2f(100, 100), 10);
};

Player::Player(sf::Color const& color, sf::Vector2f const& size, float const& speed)
{
    std::cout << "ayow" << std::endl;
    Player::create(color, size, speed);
};

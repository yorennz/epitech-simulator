#pragma once

#include "SFML.hpp"

class Player
{
    public:

    Player();
    Player(sf::Color const& color, float const& width, float const& height);
    void move(float const& x, float const& y);
    void draw(sf::RenderWindow &window) const;

    private:

    sf::RectangleShape m_shape;
    sf::Vector2f m_size;
    sf::Color m_color;
};

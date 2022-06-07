#pragma once

#include "SFML.hpp"

class Player
{
    public:

    // Constructors

    Player();
    Player(sf::Color const& color, float const& width, float const& height);

    // Methods

    void move(float const& x, float const& y);
    void draw(sf::RenderWindow &window) const;

    private:

    // Attributes

    sf::Vector2f m_size;
    sf::Color m_color;
    sf::RectangleShape m_shape;
 };

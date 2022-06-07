#pragma once

#include "SFML.hpp"

class Player
{
    public:

    // Constructors

    Player();
    Player(sf::Color const& color, sf::Vector2f size, float const& speed);

    // Methods

    void events(void);
    void move(float const& x, float const& y);
    void draw(sf::RenderWindow &window) const;

    private:

    // Attributes

    sf::Vector2f m_size;
    sf::Color m_color;
    sf::RectangleShape m_shape;
    float m_speed;
 };

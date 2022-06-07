#pragma once

#include "SFML.hpp"

class Player
{
    public:

    // Constructors

    Player(void);
    Player(sf::Color const& color, sf::Vector2f const& size, float const& speed);

    // Methods

    public:

    void create(sf::Color const& color, sf::Vector2f const& size, float const& speed);
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

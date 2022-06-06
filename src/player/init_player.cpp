#include "Player.hpp"

#include <iostream>

Player::Player(void) //: \    m_color(sf::Color::Green), m_width(100), m_height(100)
{
    std::cout << "ayow" << std::endl;
    m_color = sf::Color::Green;
    m_size = sf::Vector2f(100, 100);
    m_shape.setPosition(10, 10);
    m_shape.setSize(m_size);
    m_shape.setFillColor(m_color);
}

Player::Player(sf::Color const& color, float const& width, float const& height) //: \    m_color(color), m_width(width), m_height(height)
{
    std::cout << width << "x" << height << std::endl;
    m_color = color;
    m_size = sf::Vector2f(width, height);
    m_shape.setSize(m_size);
    m_shape.setFillColor(m_color);
}

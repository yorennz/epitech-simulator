#pragma once

#include <string>

#include <SFML/Graphics.hpp>

/*
  enum of indexes macros linked to 'keys' attribute which will
  retrieve all key settings of the player read from a file
  (usage: 'keys[UP_KEY] = sf::Keyboard::Z);...'
*/

enum keys_list {
    UP_KEY,
    DOWN_KEY,
    LEFT_KEY,
    RIGHT_KEY
};

/*
  window struct which contains all datas needed by class Window
*/

struct window {
    sf::VideoMode mode;
    unsigned int style;
    unsigned int fps;
};

class Config
{
    public:

    // Constructors

    Config(void);

    // Methods

    void create(void);
    std::string find(std::string keyword, std::string fileName);
    void replace(std::string newKeyword, std::string keyword,
                 std::string fileName);

    private:

    // Attributes

    window m_window;

    // not sure of the usage of a static list
    int keys[4]; // usage: 'if (sf::Event::isKeyPressed(keys[LEFT_KEY])) {...'
};

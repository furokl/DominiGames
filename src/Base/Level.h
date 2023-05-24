#ifndef LEVEL_H
#define LEVEL_H

#include "Base/Actor.h"

class Level
{
private:
    std::vector<Actor> m_actors;

public:
    Level(const sf::Vector2f& const level_window, const sf::Vector2f& const level_offset = sf::Vector2f())
    {
    }
};

#endif LEVEL_H
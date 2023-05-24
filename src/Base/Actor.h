#ifndef ACTOR_H
#define ACTOR_H

class Actor
{
protected:
    sf::Vector2f m_pos;

public:
    Actor(sf::Vector2f pos = sf::Vector2f())
        : m_pos(pos)
    {
        init_draw();
    }
    virtual ~Actor()
    {
    }

    virtual void init_draw()
    {

    }
};

#endif ACTOR_H
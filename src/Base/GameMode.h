#ifndef GAMEMODE_H
#define GAMEMODE_H

#include "Base/Level.h"

class GameMode
{
private:
    std::unique_ptr<Level> m_level;

public:
    GameMode(Level&& level)
        : m_level(std::make_unique<Level>(level))
    {
    }
};

#endif GAMEMODE_H
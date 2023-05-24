#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>
#include <array>
#include <memory>
#include "Base/GameInstance.h"
#include "Base/GameMode.h"

int main()
{
    GameInstance gi (sf::VideoMode(1200, 800), "DominosGames");
    Level lvl (sf::Vector2f(500, 500));
    GameMode gm (std::move(lvl));
    return EXIT_SUCCESS;
} 
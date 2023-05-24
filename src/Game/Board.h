#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <array>
#include <SFML/Graphics.hpp>
#include "../Base/Actor.h"

constexpr int board_lenght = 8;
constexpr int board_size = board_lenght * board_lenght;
struct cell_t
{
    std::string m_name;
    sf::RectangleShape m_mash;

    cell_t(const char* name)
        : m_name(name)
    {
    }
};

typedef std::array<std::array<cell_t, board_lenght>, board_lenght> board_t;
class Board : public Actor
{
private:
    board_t m_board;

public:
    Board(sf::Vector2f pos = sf::Vector2f());
    virtual void init_draw();
    void draw_board(sf::RenderWindow& window);
};

#endif BOARD_H
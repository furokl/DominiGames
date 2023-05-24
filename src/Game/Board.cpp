#include "Board.h"

Board::Board(sf::Vector2f pos)
    : Actor(pos),
      m_board{ {
      { "a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1" },
      { "a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2" },
      { "a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3" },
      { "a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4" },
      { "a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5" },
      { "a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6" },
      { "a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7" },
      { "a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8" }
    } }
{
    init_draw();
}

void Board::init_draw()
{
    int chColor_i{};
    int chPos_y{ (int)m_pos.y };
    for (auto& i : m_board)
    {
        ++chColor_i;
        int chPos_x{ (int)m_pos.x };
        chPos_y = chPos_y + 65;
        for (auto& cell : i)
        {
            ++chColor_i;
            (chColor_i % 2) ?
                cell.m_mash.setFillColor(sf::Color(16, 16, 16)) :
                cell.m_mash.setFillColor(sf::Color(32, 32, 32));

            chPos_x = chPos_x + 65;
            cell.m_mash.setPosition(sf::Vector2f(chPos_x, chPos_y));
            cell.m_mash.setSize(sf::Vector2f(65, 65));
        }
    }
}

void Board::draw_board(sf::RenderWindow& window) {
    for (auto& i : m_board) {
        for (auto& cell : i) {
            window.draw(cell.m_mash);
        }
    }
}
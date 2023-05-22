#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>
#include <unordered_map>

class World
{
private:
    std::unordered_map<std::string, int> m_board = {
        {"1a", 0},  {"2a", 1},  {"3a", 2},  {"4a", 3},  {"5a", 4},  {"6a", 5},  {"7a", 6},  {"8a", 7},
        {"1b", 8},  {"2b", 9},  {"3b", 10}, {"4b", 11}, {"5b", 12}, {"6b", 13}, {"7b", 14}, {"8b", 15},
        {"1c", 16}, {"2c", 17}, {"3c", 18}, {"4c", 19}, {"5c", 20}, {"6c", 21}, {"7c", 22}, {"8c", 23},
        {"1d", 24}, {"2d", 25}, {"3d", 26}, {"4d", 27}, {"5d", 28}, {"6d", 29}, {"7d", 30}, {"8d", 31},
        {"1e", 32}, {"2e", 33}, {"3e", 34}, {"4e", 35}, {"5e", 36}, {"6e", 37}, {"7e", 38}, {"8e", 39},
        {"1f", 40}, {"2f", 41}, {"3f", 42}, {"4f", 43}, {"5f", 44}, {"6f", 45}, {"7f", 46}, {"8f", 47},
        {"1g", 48}, {"2g", 49}, {"3g", 50}, {"4g", 51}, {"5g", 52}, {"6g", 53}, {"7g", 54}, {"8g", 55},
        {"1h", 56}, {"2h", 57}, {"3h", 58}, {"4h", 59}, {"5h", 60}, {"6h", 61}, {"7h", 62}, {"8h", 63}
    };

public:
    World()
    {
        auto begin = m_board.begin();
        auto end = m_board.end();
        /*  for (auto i : m_board)
          {
              std::cout << i.second << "sf";
          }*/
        sf::RectangleShape poh(sf::Vector2f(50, 50));
        poh.setFillColor(sf::Color(239, 239, 239));     // 101010 efefef(239)
    }

    void draw_desk(sf::RenderWindow& window) {

    }
};

class Draw
{

};

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Jopa");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        //window.draw(poh);
        window.display();
    }
    return EXIT_SUCCESS;
} 
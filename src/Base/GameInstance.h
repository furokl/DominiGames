#include <memory>
#include <SFML/Graphics.hpp>

class GameInstance
{
private:
    std::unique_ptr<sf::RenderWindow> m_window;

public:
    GameInstance(sf::VideoMode&& videomode, std::string&& name);
};
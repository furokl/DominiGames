#include "GameInstance.h"

// Дымчато-белый (ПЕРЕНЕСТИ)
const sf::Color white_f5f5f5(245, 245, 245);

GameInstance::GameInstance(sf::VideoMode&& videomode, std::string&& name)
    : m_window(std::make_unique<sf::RenderWindow>(videomode, name))
{
    m_window->setFramerateLimit(60);

    while (m_window->isOpen())
    {
        sf::Event event;
        while (m_window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                m_window->close();
        }

        m_window->clear(white_f5f5f5);
        m_window->display();
    }
}
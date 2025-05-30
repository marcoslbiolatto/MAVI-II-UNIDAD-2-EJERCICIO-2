#ifndef SFMLRENDERER_H
#define SFMLRENDERER_H

#include <SFML/Graphics.hpp>
#include "Game.h"

class SFMLRenderer {
public:
    SFMLRenderer(Game& game);
    void Render(sf::RenderWindow& window);

private:
    Game& game;
    sf::CircleShape ballShape;
    sf::RectangleShape leftWallShape;
    sf::RectangleShape rightWallShape;
    sf::RectangleShape floorShape;
    sf::RectangleShape ceilingShape;
};

#endif

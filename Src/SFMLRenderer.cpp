#include "SFMLRenderer.h"

SFMLRenderer::SFMLRenderer(Game& game) : game(game) {
    ballShape.setRadius(30.0f);
    ballShape.setFillColor(sf::Color::Yellow);
    ballShape.setOrigin(30.0f, 30.0f);

    // 🔹 Bordes visibles en los extremos de la pantalla
    leftWallShape.setSize(sf::Vector2f(10.0f, 600.0f));
    leftWallShape.setFillColor(sf::Color::Blue);
    leftWallShape.setPosition(50, 0);

    rightWallShape.setSize(sf::Vector2f(10.0f, 600.0f));
    rightWallShape.setFillColor(sf::Color::Blue);
    rightWallShape.setPosition(740, 0);

    floorShape.setSize(sf::Vector2f(800.0f, 10.0f));
    floorShape.setFillColor(sf::Color::Red);
    floorShape.setPosition(0, 590);

    ceilingShape.setSize(sf::Vector2f(800.0f, 10.0f));
    ceilingShape.setFillColor(sf::Color::Red);
    ceilingShape.setPosition(0, 0);
}

void SFMLRenderer::Render(sf::RenderWindow& window) {
    b2Vec2 ballPos = game.GetBall()->GetPosition();
    float scale = 30.0f;

    ballShape.setPosition(ballPos.x * scale + 400, 600 - ballPos.y * scale);

    // 🔹 Dibujar bordes antes de la pelota
    window.draw(leftWallShape);
    window.draw(rightWallShape);
    window.draw(floorShape);
    window.draw(ceilingShape);
    window.draw(ballShape);
}

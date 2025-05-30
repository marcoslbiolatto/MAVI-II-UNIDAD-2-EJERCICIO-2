#include "Game.h"

Game::Game() {
    world = Box2DHelper::CreateWorld();

    // Barreras alrededor de la pantalla
    leftWall = Box2DHelper::CreateStaticBox(world, -12.0f, 0.0f, 1.0f, 20.0f);
    rightWall = Box2DHelper::CreateStaticBox(world, 12.0f, 0.0f, 1.0f, 20.0f);
    floor = Box2DHelper::CreateStaticBox(world, 0.0f, -10.0f, 24.0f, 1.0f);
    ceiling = Box2DHelper::CreateStaticBox(world, 0.0f, 10.0f, 24.0f, 1.0f);

    // Crear la pelota en el centro
    ball = Box2DHelper::CreateDynamicBall(world, 0.0f, 0.0f, 1.0f);
    ball->SetBullet(true);

    // 🔹 Aplicar velocidad inicial en diagonal
    ball->SetLinearVelocity(b2Vec2(3.0f, 2.0f));
}

void Game::Update() {
    world->Step(1.0f / 60.0f, 8, 3);
}

b2Body* Game::GetBall() { return ball; }

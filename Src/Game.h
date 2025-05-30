#ifndef GAME_H
#define GAME_H

#include "Box2DHelper.h"

class Game {
public:
    Game();
    void Update();
    b2Body* GetBall();

private:
    b2World* world;
    b2Body* ball;
    b2Body* leftWall;
    b2Body* rightWall;
    b2Body* floor;
    b2Body* ceiling;
};

#endif

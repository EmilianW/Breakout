#pragma once

#include <SFML/Graphics.hpp>
#include "CONSTANTS.h"
#include <box2d/box2d.h>

class Paddle
{
public:
    Paddle(sf::RenderWindow* window, b2WorldId worldId);
    ~Paddle();

    void moveLeft(float dt);
    void moveRight(float dt);
    void update(float dt);
    void render();
    sf::FloatRect getBounds() const;
    void setWidth(float coeff, float duration);

private:
    
    sf::RenderWindow* _window;
    sf::RectangleShape _sprite;
    float _width = PADDLE_WIDTH;
    bool _isAlive;
    float _timeInNewSize = 0.0f;
    b2BodyId _bodyId;
};

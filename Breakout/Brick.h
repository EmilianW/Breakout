#pragma once
#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

class Brick {
public:
    Brick(float x, float y, float width, float height, b2WorldId worldId);
    void render(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;

private:
    sf::RectangleShape _shape;
    bool _isDestroyed;
    b2BodyId _bodyId;
};
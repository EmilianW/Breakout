#include "Brick.h"

Brick::Brick(float x, float y, float width, float height, b2WorldId worldId)
    : _isDestroyed(false)
{
    _shape.setPosition(x, y);
    _shape.setSize(sf::Vector2f(width, height));
    _shape.setFillColor(sf::Color::Red);

    b2BodyDef bodyDef = b2DefaultBodyDef();
    bodyDef.type = b2_dynamicBody;
    float x = _shape.getPosition().x + width / 2;
    float y = _shape.getPosition().y + height / 2;
    bodyDef.position = b2Vec2{x, y};
    _bodyId = b2CreateBody(worldId, &bodyDef);

    b2Polygon dynamicBox = b2MakeBox(width, height);
    b2ShapeDef shapeDef = b2DefaultShapeDef();
    shapeDef.density = 1.0f;
    shapeDef.friction = 0.3f;

    b2CreatePolygonShape(_bodyId, &shapeDef, &dynamicBox);
}

void Brick::render(sf::RenderWindow& window)
{
    if (!_isDestroyed) {
        window.draw(_shape);
    }
}

sf::FloatRect Brick::getBounds() const
{
    return _shape.getGlobalBounds();
}

#pragma once
#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

class Box2DHelper
{
public:
    
    static b2Vec2 SFVectorToB2Vector(sf::Vector2f vector)
    {
        return b2Vec2{vector.x, vector.y};
    }
    
};

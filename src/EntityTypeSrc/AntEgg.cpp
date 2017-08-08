#include "EntityTypesHeader/AntEgg.h"
#include <iostream>

AntEgg::AntEgg(TileMap *tileMap, AntHill *antHill, int eggType)
    :Ant(tileMap, antHill, 2)
    ,m_eggType(eggType)
    ,m_hatchingCoolDown(500)
{
    m_shape.setRadius(0.8*tailleTileLargeur);
    paintEntite();
    m_shape.setFillColor(sf::Color::White);
    setNextAction();
}

AntEgg::AntEgg(int x, int y, TileMap *tileMap, AntHill *antHill, int eggType)
    :Ant(x, y, tileMap, antHill, 2)
    ,m_eggType(eggType)
    ,m_hatchingCoolDown(1000)
{
    m_shape.setRadius(0.8*tailleTileLargeur);
    paintEntite();
    m_shape.setFillColor(sf::Color::White);
    setNextAction();
}

void AntEgg::setNextAction()
{
}
bool AntEgg::nextStep()
{
    m_hatchingCoolDown--;
    if (m_hatchingCoolDown == 0)
    {
        m_antHill->addAnt(getCoord(), m_eggType);
        return true;
    }
    return false;
}

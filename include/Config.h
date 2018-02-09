#ifndef INCLUDECONFIG_H
#define INCLUDECONFIG_H

#include <include/rapidjson/document.h>

class Config
{
public:
    Config();

    void setConfig(rapidjson::Document& document);
    void loadConfig(const std::string& configFileName);

    /// Queen
    int m_queenHatchingTime;
    int m_queenLayingCost;
    int m_queenLayingCD;
    int m_queenSize;

    /// Air
    float m_airThermalCond;

    /// Dirt
    float m_dirtThermalCond;

    /// Stone
    float m_stoneThermalCond;

    /// Food
    int m_foodGrowthRate;

    /// Mushroom
    int m_mushroomMaxCare;
    int m_mushroomDecayLimit;
    int m_mushroomDecayRate;
    int m_mushroomFlatGrowthRate;

};

#endif // INCLUDECONFIG_H

#ifndef IA_H
#define IA_H

#include <vector>
#include <array>

#include "TileMap.h"
#include "AntHill.h"

class AntHillAI
{
    public:
        AntHillAI();
        AntHillAI(AntHill* antHill);
        void update();
        void addBlock(int blockType, std::pair<int,int> coord, int blockValue = 0, std::string aStructureTag = "");

    private:
        AntHill* m_antHill;
        TileMap* m_tileMap;

        void expandStorage(std::string aStructureTag);
        std::array<std::vector<int>,8> getStructure(int blockType);
        void buildStructure(Tile tile);
        void addBlock(Tile tile);

};

#endif // IA_H

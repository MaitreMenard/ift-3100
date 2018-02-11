#pragma once

#include "ofMain.h"

class BattleTag
{
private:
    float width;
    float height;

public:
    BattleTag();
    void draw(float xOffset, float yOffset, float zOffset);
};
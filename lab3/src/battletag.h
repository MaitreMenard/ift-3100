#pragma once

#include "ofMain.h"
#include "polygon.h"

class BattleTag
{
private:
    float width;
    float height;
    int borderWidth;

    int nameFontSize;
    ofTrueTypeFont nameFont;

    int numberFontSize;
    ofTrueTypeFont numberFont;

    int hpFontSize;
    ofTrueTypeFont hpFont;

    ofColor hpGreen;

public:
    BattleTag();
    void draw(float xOffset, float yOffset, float zOffset);
};
#pragma once

#include "ofMain.h"
#include "polygon.h"

class BattleTag
{
private:
    float width;
    float height;
    int borderWidth;

    int largeFontSize;
    int mediumFontSize;
    int smallFontSize;

    ofTrueTypeFont largeFont;
    ofTrueTypeFont mediumFont;
    ofTrueTypeFont smallFont;

    ofColor hpGreen;

    void drawBorder();
    void writeText();
    void drawHpBar();

public:
    BattleTag();
    void draw(float xOffset, float yOffset, float zOffset);
};
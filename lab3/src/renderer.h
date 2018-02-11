#pragma once

#include "ofMain.h"
#include "battletag.h"
#include "porygon.h"

class Renderer
{
private:
    ofTrueTypeFont ironFont;
    Porygon porygon;
    BattleTag battleTag;

public:
    Renderer();
    void setup();
    void update();
    void draw();
};

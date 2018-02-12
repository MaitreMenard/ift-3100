#pragma once

#include "ofMain.h"
#include "battletag.h"
#include "porygon.h"

class Renderer
{
private:
    Porygon porygon;
    BattleTag battleTag;
    ofTrueTypeFont regularFont;
    ofTrueTypeFont unownFont;

public:
    Renderer();
    void setup();
    void update();
    void draw();
};

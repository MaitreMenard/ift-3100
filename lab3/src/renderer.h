#pragma once

#include "ofMain.h"
#include "porygon.h"

class Renderer
{
private:
    ofTrueTypeFont ironFont;
    Porygon porygon;

public:
    Renderer();
    void setup();
    void update();
    void draw();
};

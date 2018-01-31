#pragma once

#include "ofMain.h"

class Renderer
{
private:
    ofImage image;

public:
    void setup();
    void update();
    void draw();
};
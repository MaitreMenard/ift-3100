#pragma once

#include "ofMain.h"

class Renderer
{
private:
    float time_current;
    float time_last;
    float time_elapsed;
public:
    void setup();
    void update();
    void draw();
};
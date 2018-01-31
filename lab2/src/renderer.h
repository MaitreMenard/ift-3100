#pragma once

#include "ofMain.h"

class Renderer
{
private:
    ofImage images[9];  //FIXME: extract the 9 as a static constant
    int imageWidth;
    int imageHeight;
    int verticalOffset;
    int horizontalOffset;

public:
    Renderer();
    void setup();
    void update();
    void draw();
};
#pragma once

#include "ofMain.h"

class Porygon
{
private:
    int lineWidth;
    ofColor lightPink;
    ofColor darkPink;
    ofColor lightCyan;
    ofColor darkCyan;

    void drawTail();
    void drawLeftLeg();
    void drawBody();
    void drawRightLeg();
    void drawHead();

public:
    Porygon();
    void draw();
};

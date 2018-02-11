#pragma once

#include "ofMain.h"

class Polygon
{
public:
    static void drawPolygon(ofVec2f* vertices, int nbVertex);
    static void drawFramedPolygon(ofVec2f* vertices, int nbVertex, int borderWidth, ofColor fillColor);
};
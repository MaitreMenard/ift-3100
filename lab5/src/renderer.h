#pragma once
#include "ofMain.h"
#include "ofxAssimpModelLoader.h"
#include "cube.h"
#include "transform.h"

#define NB_STARS 100

class Renderer
{
private:
    struct Star
    {
        ofPoint position;
        int radius;
        ofColor color;
    };

    float windowCenterX;
    float windowCenterY;

    ofLight light;

    Star stars[NB_STARS];
    ofxAssimpModelLoader model;
    Cube cube;

    void configureLighting();
    void placeStars();
    void drawBackGround();

public:
    Transform transform;
    void setup();
    void update();
    void draw();

    void screenShot(const string fileName);
};

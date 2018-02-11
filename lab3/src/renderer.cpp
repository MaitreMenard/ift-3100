#include "renderer.h"

Renderer::Renderer()
{
    
}

void Renderer::setup()
{
    ofSetFrameRate(60);
    //ironFont.load("fonts/metal-lord/METALORD.ttf", 30);
}

void Renderer::update()
{

}

void Renderer::draw()
{
    ofClear(255);

    porygon.draw(10.0f, 10.0f, 0.0f);

    ofNoFill();
    ofSetColor(ofColor::black);
    ofSetLineWidth(5);
    ofDrawRectangle(800, 30, 375, 200);
}

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
    porygon.draw();
}
#include "renderer.h"

void Renderer::setup()
{
    ofSetFrameRate(60);

    image.load("ride-the-lightning.jpg");

    ofSetWindowShape(image.getWidth(), image.getHeight());
}

void Renderer::update()
{

}

void Renderer::draw()
{
    ofClear(0);

    ofSetColor(255);

    image.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
}

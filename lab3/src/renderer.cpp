#include "renderer.h"

Renderer::Renderer()
{
    regularFont.load("fonts/PokemonGB.ttf", 28);
    unownFont.load("fonts/PokemonUnownGB.ttf", 30);
}

void Renderer::setup()
{
    ofSetFrameRate(60);
}

void Renderer::update()
{

}

void Renderer::draw()
{
    ofClear(255);

    porygon.draw(10, 10, 0);

    battleTag.draw(800, 45, 0);

    regularFont.drawString("par:", 840, 690);
    unownFont.drawString("maxime menard", 640, 740);
}

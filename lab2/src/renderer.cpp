#include "renderer.h"

Renderer::Renderer()
{
    imageWidth = 256;
    imageHeight = 256;
    horizontalOffset = 32;
    verticalOffset = 32;
}

void Renderer::setup()
{
    ofSetFrameRate(60);

    images[0].load("darude.jpg");
    images[1].load("smash-mouth.jpg");
    images[2].load("darude.jpg");
    images[3].load("smash-mouth.jpg");
    images[4].load("rick-astley.jpg");
    images[5].load("smash-mouth.jpg");
    images[6].load("darude.jpg");
    images[7].load("smash-mouth.jpg");
    images[8].load("darude.jpg");

    float windowWidth = 3 * imageWidth + 4 * horizontalOffset;
    float windowheight = 3 * imageHeight + 4 * verticalOffset;
    ofSetWindowShape(windowWidth, windowheight);
}

void Renderer::update()
{

}

void Renderer::draw()
{
    ofClear(0);

    ofSetColor(255);

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            int x = (i + 1) * horizontalOffset + i * imageWidth;
            int y = (j + 1) * verticalOffset + j * imageHeight;
            images[j*3+i].draw(x, y, imageWidth, imageHeight);
        }
    }
}

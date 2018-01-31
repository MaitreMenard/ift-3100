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

    for (int i = 0; i < 9; i++)
    {
        images[i].load("ride-the-lightning.jpg");
    }

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

#include "renderer.h"

void Renderer::setup()
{
    ofSetFrameRate(60);
    ofNoFill();
    ofSetLineWidth(lineWidth);
    ofSetColor(90, 202, 23);
}

void Renderer::update()
{

}

void Renderer::draw()
{
    ofClear(255);
    ofPushMatrix();
    ofRotate(-90);
    ofTranslate(-766, 512);

    for (int i = 0; i < sequence.size(); i++)
    {
        interpretCharacter(sequence[i]);
    }

    ofPopMatrix();
}

void Renderer::interpretCharacter(char& character)
{
    switch (character)
    {
    case 'F':
        ofDrawLine(0, 0, stepLength, 0);
        ofTranslate(stepLength, 0);
        break;
    case '+':
        ofRotate(-rotationAngleInDegrees);
        break;
    case '-':
        ofRotate(rotationAngleInDegrees);
        break;
    case '[':
        ofPushMatrix();
        break;
    case ']':
        ofPopMatrix();
        break;
    default:
        break;
    }
}

void Renderer::setSequence(std::string sequence)
{
    this->sequence = sequence;
}

#pragma once
#include <string>
#include "ofMain.h"

class Renderer
{
private:
    int stepLength = 5;
    int rotationAngleInDegrees = 30;
    int lineWidth = 3;
    std::string sequence;

    void interpretCharacter(char& character);

public:
    void setup();
    void update();
    void draw();

    void setSequence(std::string sequence);
};

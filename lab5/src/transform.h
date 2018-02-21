#pragma once
#include "ofMain.h"

class Transform
{
private:
    ofVec3f position;
    ofQuaternion rotation;
    ofVec3f scale;

public:
    ofVec3f getPosition();
    void getRotate(float& angle, float& x, float& y, float& z);

    void translate(float dx, float dy, float dz);
    void translate(ofVec3f translation);
    void rotate(float degrees, float x, float y, float z);
};

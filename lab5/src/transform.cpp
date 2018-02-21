#include "transform.h"

ofVec3f Transform::getPosition()
{
    return position;
}

void Transform::getRotate(float & angle, float & x, float & y, float & z)
{
    rotation.getRotate(angle, x, y, z);
}

void Transform::translate(float dx, float dy, float dz)
{
    position.x += dx;
    position.y += dy;
    position.z += dz;
}

void Transform::translate(ofVec3f translation)
{
    position += translation;
}

void Transform::rotate(float degrees, float x, float y, float z)
{
    rotation *= ofQuaternion(degrees, ofVec3f(x, y, z));
}

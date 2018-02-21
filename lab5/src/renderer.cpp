#include "renderer.h"

void Renderer::setup()
{
    ofSetFrameRate(60);

    configureLighting();

    model.loadModel("millenium-falcon.obj");

    placeStars();
}

void Renderer::update()
{
    windowCenterX = ofGetWidth() / 2.0f;
    windowCenterY = ofGetHeight() / 2.0f;
}

void Renderer::draw()
{
    drawBackGround();
    ofEnableDepthTest();
    ofPushMatrix();

    ofVec3f currentPosition = transform.getPosition();
    ofTranslate(windowCenterX + currentPosition.x, windowCenterY + currentPosition.y, 0 + currentPosition.z);

    float angle, x, y, z;
    transform.getRotate(angle, x, y, z);
    ofRotate(angle, x, y, z);

    cube.draw();

    model.setPosition(0, 0, 0);
    model.setRotation(0, 0, 1, 0, 0);
    model.setScale(-1, 1, 1);
    model.draw(OF_MESH_FILL);

    ofPopMatrix();
    ofDisableDepthTest();
}

void Renderer::screenShot(const string fileName)
{
    ofImage image;

    image.grabScreen(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

    image.save(fileName);
}

void Renderer::configureLighting()
{
    ofEnableLighting();

    light.setAmbientColor(ofColor(100, 100, 100));
    light.setDiffuseColor(ofColor(255, 255, 255));
    light.setDirectional();

    ofVec3f xAxis(1, 0, 0);
    ofVec3f yAxis(0, 1, 0);
    ofVec3f zAxis(0, 0, 1);
    ofQuaternion q;
    q.makeRotate(0, xAxis, 180, yAxis, 0, zAxis);
    light.setOrientation(q);
    light.enable();

}

void Renderer::placeStars()
{
    for (int i = 0; i < NB_STARS; i++)
    {
        stars[i].position.x = ofRandom(ofGetWidth());
        stars[i].position.y = ofRandom(ofGetHeight());
        stars[i].radius = ofRandom(1, 3);
        stars[i].color = ofColor(255, 255, ofRandom(130, 256));
    }
}

void Renderer::drawBackGround()
{
    ofClear(ofColor::black);
    ofFill();
    for (int i = 0; i < NB_STARS; i++)
    {
        ofSetColor(stars[i].color);
        ofDrawCircle(stars[i].position, stars[i].radius);
    }
}

#pragma once
#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class ofApp : public ofBaseApp
{
private:
    ofCamera camera;
    ofxAssimpModelLoader corridor;
    ofBoxPrimitive box;

    const ofVec3f initialCameraPosition = ofVec3f(-147, 45, 210);
    const float initialFOV = 60;
    const float dollyZoomSpeed = 0.3;

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
};

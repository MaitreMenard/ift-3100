#pragma once
#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class ofApp : public ofBaseApp
{
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

private:
    const ofVec3f initialCameraPosition = ofVec3f(0, 0, 10);

    ofCamera camera;
    ofLight pointLight;

    ofBoxPrimitive floor;
    ofBoxPrimitive leftWall;
    ofBoxPrimitive backWall;
    ofBoxPrimitive rightWall;
    ofBoxPrimitive ceiling;

    ofxAssimpModelLoader milleniumFalcon;
    ofxAssimpModelLoader xWing;

    void takeScreenShot();
};

#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp
{
private:
    const ofVec3f initialCameraPosition = ofVec3f(0, 1, 5);

    ofCamera camera;
    ofBoxPrimitive floor;
    ofSpherePrimitive sphere;

    ofLight light;
    ofLight spotLight;
    ofLight spotLight2;

    ofMaterial sphereMaterial;

    void setupFloor();
    void setupSphere();
    void takeScreenShot();

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

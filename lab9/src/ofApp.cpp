#include "ofApp.h"

void ofApp::setup()
{
    ofSetFrameRate(60);
    ofEnableDepthTest();
    //ofDisableArbTex();
    //ofEnableAlphaBlending();

    camera.setNearClip(0.1f);
    camera.setPosition(initialCameraPosition);
    camera.setFov(initialFOV);

    corridor = ofxAssimpModelLoader();
    corridor.loadModel("corridor/REO_RPD_corridor.obj");
    corridor.setRotation(0, 180, 0, 0, 1);

    box.set(10, 30, 10);
    box.setPosition(initialCameraPosition + ofVec3f(0, -30, -120));
    box.rotate(45, ofVec3f(0, 1, 0));

    box.setSideColor(1, ofColor::red);
    box.setSideColor(2, ofColor::yellow);
    box.setSideColor(5, ofColor::green);
    box.setSideColor(6, ofColor::blue);
}

void ofApp::update()
{

}

void ofApp::draw()
{
    ofClear(0);

    camera.begin();
    corridor.draw(OF_MESH_FILL);
    box.draw();
    camera.end();
}

void ofApp::keyPressed(int key)
{
    switch (key)
    {
    case '+':
        camera.dolly(-1);
        break;
    case '-':
        camera.dolly(1);
        break;
    case 356:   // left arrow
        camera.pan(5);
        break;
    case 357:   // up arrow
        camera.tilt(5);
        break;
    case 358:   // right arrow
        camera.pan(-5);
        break;
    case 359:   // down arrow
        camera.tilt(-5);
        break;
    case 'w':
        camera.boom(1);
        break;
    case 'a':
        camera.truck(-1);
        break;
    case 's':
        camera.boom(-1);
        break;
    case 'd':
        camera.truck(1);
        break;
    case 'r':
        camera.setPosition(initialCameraPosition);
        camera.setOrientation(ofVec3f(0));
        camera.setFov(initialFOV);
        break;
    case ' ':
        camera.dolly(-dollyZoomSpeed);
        camera.setFov(camera.getFov() + dollyZoomSpeed);
        break;
    default:
        break;
    }
}

void ofApp::keyReleased(int key)
{

}

void ofApp::mouseMoved(int x, int y)
{

}

void ofApp::mouseDragged(int x, int y, int button)
{

}

void ofApp::mousePressed(int x, int y, int button)
{

}

void ofApp::mouseReleased(int x, int y, int button)
{

}

void ofApp::mouseEntered(int x, int y)
{

}

void ofApp::mouseExited(int x, int y)
{

}

void ofApp::windowResized(int w, int h)
{

}

void ofApp::gotMessage(ofMessage msg)
{

}

void ofApp::dragEvent(ofDragInfo dragInfo)
{

}

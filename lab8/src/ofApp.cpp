#include "ofApp.h"

void ofApp::setup()
{
    ofSetFrameRate(60);
    ofEnableDepthTest();
    //ofDisableArbTex();
    //ofEnableAlphaBlending();

    camera.setNearClip(0.1f);
    camera.setPosition(-147, 45, 210);

    corridor = ofxAssimpModelLoader();
    corridor.loadModel("corridor/REO_RPD_corridor.obj");
    corridor.setRotation(0, 180, 0, 0, 1);
}

void ofApp::update()
{

}

void ofApp::draw()
{
    ofClear(0);

    camera.begin();
    corridor.draw(OF_MESH_FILL);
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
    default:
        break;
    }
    ofLog() << camera.getPosition();
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

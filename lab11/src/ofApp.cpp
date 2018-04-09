#include "ofApp.h"

void ofApp::setup()
{
    ofSetFrameRate(60);
    ofEnableDepthTest();
    ofDisableArbTex();
    ofEnableAlphaBlending();
    ofEnableLighting();
    ofSetSmoothLighting(true);

    camera.setNearClip(0.1f);
    camera.setPosition(initialCameraPosition);

    //pointLight.setSpotlight();
    pointLight.setPointLight();
    pointLight.setDiffuseColor(ofColor(255, 255, 255));
    pointLight.setPosition(0, 4.5, 0);
    //pointLight.lookAt(ofVec3f(0, -1, 0));
    //pointLight.setSpotlightCutOff(10);

    floor.set(10);
    floor.setResolution(100);
    floor.setPosition(0, -10, 0);
    floor.setSideColor(floor.SIDE_TOP, ofColor::white);

    leftWall.set(10);
    leftWall.setResolution(100);
    leftWall.setPosition(-10, 0, 0);
    leftWall.setSideColor(leftWall.SIDE_RIGHT, ofColor::red);

    backWall.set(10);
    backWall.setResolution(100);
    backWall.setPosition(0, 0, -10);
    backWall.setSideColor(leftWall.SIDE_FRONT, ofColor::white);

    rightWall.set(10);
    rightWall.setResolution(100);
    rightWall.setPosition(10, 0, 0);
    rightWall.setSideColor(leftWall.SIDE_LEFT, ofColor::green);

    ceiling.set(10);
    ceiling.setResolution(100);
    ceiling.setPosition(0, 10, 0);
    ceiling.setSideColor(leftWall.SIDE_BOTTOM, ofColor::white);
}

void ofApp::update()
{

}

void ofApp::draw()
{
    ofClear(0);

    camera.begin();
    pointLight.enable();

    floor.draw();
    leftWall.draw();
    backWall.draw();
    rightWall.draw();
    ceiling.draw();

    pointLight.disable();
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
        camera.setOrientation(ofVec3f(0, 0, 0));
    case ' ':
        takeScreenShot();
        ofLog() << "Screenshot taken";
    default:
        break;
    }
}

void ofApp::takeScreenShot()
{
    ofImage image;
    image.grabScreen(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
    image.save("../lab11.png");
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

#include "ofApp.h"

void ofApp::setup()
{
    ofSetFrameRate(60);
    ofEnableDepthTest();
    ofEnableLighting();
    ofSetSmoothLighting(true);

    camera.setNearClip(0.1f);
    camera.setPosition(initialCameraPosition);

    light.setDiffuseColor(ofColor(255, 255, 255));
    light.setDirectional();

    ofVec3f xAxis(1, 0, 0);
    ofVec3f yAxis(0, 1, 0);
    ofVec3f zAxis(0, 0, 1);
    ofQuaternion q;
    q.makeRotate(1, xAxis, 180, yAxis, 0, zAxis);
    light.setOrientation(q);

    spotLight.setSpotlight();
    spotLight.setDiffuseColor(ofColor(46, 7, 224));
    spotLight.setPosition(5, 15, 5);
    spotLight.lookAt(ofVec3f(1, 0, 0));
    spotLight.setSpotlightCutOff(10);

    spotLight2.setSpotlight();
    spotLight2.setDiffuseColor(ofColor(231, 24, 55));
    spotLight2.setPosition(-5, 15, 5);
    spotLight2.lookAt(ofVec3f(-1, 0, 0));
    spotLight2.setSpotlightCutOff(10);

    setupFloor();
    setupSphere();
}

void ofApp::setupFloor()
{
    floor.set(60);
    floor.setResolution(400);
    floor.setPosition(0, -30, 0);

    for (int i = 0; i < 6; i++)
    {
        floor.setSideColor(i, ofColor::gray);
    }
}

void ofApp::setupSphere()
{
    sphereMaterial.setDiffuseColor(ofColor(0, 100, 0));
    sphereMaterial.setAmbientColor(ofColor(0, 100, 0));
    sphereMaterial.setSpecularColor(ofColor::white);
    sphereMaterial.setShininess(128);

    sphere.setRadius(1);
    sphere.setResolution(100);
    sphere.setPosition(0, 1, 0);
}

void ofApp::update()
{

}

void ofApp::draw()
{
    ofClear(0);

    camera.begin();
    light.enable();
    spotLight.enable();
    spotLight2.enable();

    floor.draw();

    sphereMaterial.begin();
    sphere.draw();
    sphereMaterial.end();

    spotLight2.disable();
    spotLight.disable();
    light.disable();
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
    image.save("../lab10.png");
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

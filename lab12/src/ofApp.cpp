#include "ofApp.h"

void ofApp::setup()
{
    ofSetFrameRate(60);

    bezier.setup();
}

void ofApp::update()
{
    //bezier.update();
}

void ofApp::draw()
{
    ofClear(0);

    bezier.draw();
}

void ofApp::keyPressed(int key)
{

}

void ofApp::keyReleased(int key)
{
    switch (key)
    {
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
    image.save("../lab12.png");
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

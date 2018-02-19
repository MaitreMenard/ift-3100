#include "ofApp.h"

ofApp::ofApp() : lSystem("X")
{
    lSystem.addRule('F', "FF");
    lSystem.addRule('X', "F-[[X]+X]+F[+FX]-X");
    renderer.setSequence(lSystem.getCurrentSequence());
}

void ofApp::setup()
{
    renderer.setup();
}

void ofApp::update()
{
    renderer.update();
}

void ofApp::draw()
{
    renderer.draw();
}

void ofApp::keyPressed(int key)
{

}

void ofApp::keyReleased(int key)
{
    if (key == 32)  //space bar
    {
        lSystem.iterate();
        renderer.setSequence(lSystem.getCurrentSequence());
    }
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

#include "ofApp.h"

void ofApp::setup()
{
    ofSetWindowTitle("Laboratoire 2");

    renderer.setup();

    ofLog() << "<app::setup>";
}

void ofApp::update()
{
    renderer.update();
}

void ofApp::draw()
{
    renderer.draw();
}

void ofApp::exit()
{
    // The screenshot is saved in /bin instead of /bin/data to prevent git from tracking it.
    renderer.screenShot("../result.png");
    ofLog() << "<app::exit>";
}

void ofApp::keyPressed(int key)
{

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
    ofLog() << "<app::windowResized to: (" << w << ", " << h << ")>";
}

void ofApp::gotMessage(ofMessage msg)
{

}

void ofApp::dragEvent(ofDragInfo dragInfo)
{

}

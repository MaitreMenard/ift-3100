#include "ofApp.h"

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
    switch (key)
    {
    case 43:    // +
        if (shiftIsPressed)
        {
            renderer.transform.rotate(-10, 0, 0, 1);
        }
        else
        {
            renderer.transform.translate(0, 0, 20);
        }
        break;
    case 45:    // -
        if (shiftIsPressed)
        {
            renderer.transform.rotate(10, 0, 0, 1);
        }
        else
        {
            renderer.transform.translate(0, 0, -20);
        }
        break;
    case 97:    // a
        break;
    case 100:   // d
        break;
    case 115:   // s
        break;
    case 119:   // w
        break;
    case 356:   // left arrow
        if (shiftIsPressed)
        {
            renderer.transform.rotate(10, 0, 1, 0);
        }
        else
        {
            renderer.transform.translate(20, 0, 0);
        }
        break;
    case 357:   // up arrow
        if (shiftIsPressed)
        {
            renderer.transform.rotate(-10, 1, 0, 0);
        }
        else
        {
            renderer.transform.translate(0, 20, 0);
        }
        break;
    case 358:   // right arrow
        if (shiftIsPressed)
        {
            renderer.transform.rotate(-10, 0, 1, 0);
        }
        else
        {
            renderer.transform.translate(-20, 0, 0);
        }
        break;
    case 359:   // down arrow
        if (shiftIsPressed)
        {
            renderer.transform.rotate(10, 1, 0, 0);
        }
        else
        {
            renderer.transform.translate(0, -20, 0);
        }
        break;
    case 2304:   // shift
        shiftIsPressed = true;
        break;
    default:
        break;
    }
}

void ofApp::keyReleased(int key)
{
    switch (key)
    {
    case 32:    // spacebar
        screenShot();
        break;
    case 43:    // +
        break;
    case 45:    // -
        break;
    case 97:    // a
        break;
    case 100:   // d
        break;
    case 115:   // s
        break;
    case 119:   // w
        break;
    case 356:   // left arrow
        break;
    case 357:   // up arrow
        break;
    case 358:   // right arrow
        break;
    case 359:   // down arrow
        break;
    case 2304:   // shift
        shiftIsPressed = false;
        break;
    default:
        break;
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

void ofApp::screenShot()
{
    // The screenshot is saved in /bin instead of /bin/data to prevent git from tracking it.
    renderer.screenShot("../result.png");
    ofLog() << "screenshot taken";
}

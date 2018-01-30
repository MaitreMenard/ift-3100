#include "renderer.h"

void Renderer::setup()
{
    ofSetFrameRate(60);
}

void Renderer::update()
{
    time_current = ofGetElapsedTimef();
    time_elapsed = time_current - time_last;
    time_last = time_current;

    ofLog() << std::setprecision(2) << "<frame: " << ofGetFrameNum() << " time current: " << time_current << " time elapsed: " <<
        time_elapsed << " fps: " << 1.0 / time_elapsed << ">";
}

void Renderer::draw()
{
    ofClear(ofGetFrameNum() % 255);
}

#include "battletag.h"

BattleTag::BattleTag()
{
    width = 375;
    height = 200;
}

void BattleTag::draw(float xOffset, float yOffset, float zOffset)
{
    ofNoFill();
    ofSetColor(ofColor::black);
    ofSetLineWidth(5);
    ofDrawRectangle(xOffset, yOffset, zOffset, width, height);
}
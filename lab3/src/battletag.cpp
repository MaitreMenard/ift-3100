#include "battletag.h"

BattleTag::BattleTag()
{
    width = 375;
    height = 200;
    borderWidth = 5;

    nameFontSize = 32;
    nameFont.load("fonts/PokemonGB.ttf", nameFontSize);

    numberFontSize = 24;
    numberFont.load("fonts/PokemonGB.ttf", numberFontSize);

    hpFontSize = 20;
    hpFont.load("fonts/PokemonGB.ttf", hpFontSize);

    hpGreen = ofColor(18, 239, 14);
}

void BattleTag::draw(float xOffset, float yOffset, float zOffset)
{
    ofPushMatrix();
    ofTranslate(xOffset, yOffset, zOffset);

    ofNoFill();
    ofSetColor(ofColor::black);
    ofSetLineWidth(borderWidth);
    ofDrawRectangle(0, 0, 0, width, height);

    int nameOffset = 5 + borderWidth;
    nameFont.drawString("Porygon", nameOffset, nameOffset + nameFontSize + 5);

    numberFont.drawString(":L20", width / 2, nameOffset + nameFontSize + 20 + numberFontSize);

    hpFont.drawString("HP:", nameOffset, height / 2 + hpFontSize + 5);

    ofVec2f hpBar[4] = { ofVec2f(100, height / 2 + 5), ofVec2f(100 + 11 * width / 16, height / 2 + 5),
        ofVec2f(100 + 11 * width / 16, height / 2 + hpFontSize + 5), ofVec2f(100, height / 2 + hpFontSize + 5) };
    Polygon::drawFramedPolygon(hpBar, 4, 2, hpGreen);

    nameFont.drawString("60/60", 120, 180);

    ofPopMatrix();
}
#include "battletag.h"

BattleTag::BattleTag()
{
    width = 375;
    height = 200;
    borderWidth = 5;

    largeFontSize = 32;
    mediumFontSize = 24;
    smallFontSize = 20;

    largeFont.load("fonts/PokemonGB.ttf", largeFontSize);
    mediumFont.load("fonts/PokemonGB.ttf", mediumFontSize);
    smallFont.load("fonts/PokemonGB.ttf", smallFontSize);

    hpGreen = ofColor(18, 239, 14);
}

void BattleTag::draw(float xOffset, float yOffset, float zOffset)
{
    ofPushMatrix();
    ofTranslate(xOffset, yOffset, zOffset);

    drawBorder();
    writeText();
    drawHpBar();

    ofPopMatrix();
}

void BattleTag::drawBorder()
{
    ofNoFill();
    ofSetColor(ofColor::black);
    ofSetLineWidth(borderWidth);
    ofDrawRectangle(0, 0, 0, width, height);
}

void BattleTag::writeText()
{
    int nameOffset = 5 + borderWidth;
    largeFont.drawString("Porygon", nameOffset, nameOffset + largeFontSize + 5);
    mediumFont.drawString(":L20", width / 2, nameOffset + largeFontSize + 20 + mediumFontSize);
    smallFont.drawString("HP:", nameOffset, height / 2 + smallFontSize + 5);
    largeFont.drawString("60/60", 120, 180);
}

void BattleTag::drawHpBar()
{
    float hpBarLength = 11 * width / 16;
    float hpBarHeight = 0;
    float hpBarXOffset = 100;
    float hpBarYOffset = height / 2 + 5;

    ofVec2f hpBarVertices[4] = { ofVec2f(hpBarXOffset, hpBarYOffset), ofVec2f(hpBarXOffset + hpBarLength, hpBarYOffset),
        ofVec2f(hpBarXOffset + hpBarLength, hpBarYOffset + smallFontSize), ofVec2f(hpBarXOffset, hpBarYOffset + smallFontSize) };
    Polygon::drawFramedPolygon(hpBarVertices, 4, 2, hpGreen);
}

#include "porygon.h"

Porygon::Porygon()
{
    lineWidth = 2;

    lightPink = ofColor(245, 152, 163);
    darkPink = ofColor(216, 109, 110);
    lightCyan = ofColor(127, 191, 195);
    darkCyan = ofColor(83, 141, 144);
}

void Porygon::draw()
{
    drawTail();
    drawLeftLeg();
    drawBody();
    drawRightLeg();
    drawHead();
}

void Porygon::drawTail()
{
    ofVec2f tailFace1[4] = { ofVec2f(131, 2), ofVec2f(163, 0), ofVec2f(284, 291), ofVec2f(192, 314) };
    Polygon::drawFramedPolygon(tailFace1, 4, lineWidth, lightCyan);

    ofVec2f tailFace2[4] = { ofVec2f(131, 2), ofVec2f(111, 26), ofVec2f(143, 401), ofVec2f(192, 314) };
    Polygon::drawFramedPolygon(tailFace2, 4, lineWidth, darkCyan);
}

void Porygon::drawLeftLeg()
{
    ofVec2f leftLegFace1[4] = { ofVec2f(536, 569), ofVec2f(543, 612), ofVec2f(521, 622), ofVec2f(501, 593) };
    Polygon::drawFramedPolygon(leftLegFace1, 4, lineWidth, darkCyan);

    ofVec2f leftLegFace2[4] = { ofVec2f(543, 612), ofVec2f(619, 574), ofVec2f(596, 412), ofVec2f(512, 417) };
    Polygon::drawFramedPolygon(leftLegFace2, 4, lineWidth, lightCyan);
}

void Porygon::drawBody()
{
    ofVec2f bodyFace1[5] = { ofVec2f(143, 401), ofVec2f(154, 352), ofVec2f(353, 581), ofVec2f(307, 668), ofVec2f(269, 622) };
    Polygon::drawFramedPolygon(bodyFace1, 5, lineWidth, darkPink);

    ofVec2f bodyFace2[4] = { ofVec2f(353, 581), ofVec2f(307, 668), ofVec2f(455, 627), ofVec2f(587, 532) };
    Polygon::drawFramedPolygon(bodyFace2, 4, lineWidth, darkCyan);

    ofVec2f bodyFace3[5] = { ofVec2f(353, 581), ofVec2f(154, 352), ofVec2f(216, 292), ofVec2f(398, 339), ofVec2f(326, 440) };
    Polygon::drawFramedPolygon(bodyFace3, 5, lineWidth, lightPink);

    ofVec2f bodyFace4[3] = { ofVec2f(353, 581), ofVec2f(398, 339), ofVec2f(326, 440) };
    Polygon::drawFramedPolygon(bodyFace4, 3, lineWidth, lightCyan);

    ofVec2f bodyFace5[3] = { ofVec2f(216, 292), ofVec2f(347, 289), ofVec2f(398, 339) };
    Polygon::drawFramedPolygon(bodyFace5, 3, lineWidth, lightPink);

    ofVec2f bodyFace6[5] = { ofVec2f(353, 581), ofVec2f(398, 339), ofVec2f(468, 405), ofVec2f(547, 433), ofVec2f(587, 532) };
    Polygon::drawFramedPolygon(bodyFace6, 5, lineWidth, lightCyan);
}

void Porygon::drawRightLeg()
{
    ofVec2f rightLegFace1[4] = { ofVec2f(99, 381), ofVec2f(234, 444), ofVec2f(103, 509), ofVec2f(3, 435) };
    Polygon::drawFramedPolygon(rightLegFace1, 4, lineWidth, lightCyan);

    ofVec2f rightLegFace2[4] = { ofVec2f(234, 444), ofVec2f(280, 681), ofVec2f(163, 740), ofVec2f(103, 509) };
    Polygon::drawFramedPolygon(rightLegFace2, 4, lineWidth, lightCyan);

    ofVec2f rightLegFace3[5] = { ofVec2f(3, 435), ofVec2f(103, 509), ofVec2f(163, 740), ofVec2f(147, 773), ofVec2f(0, 478) };
    Polygon::drawFramedPolygon(rightLegFace3, 5, lineWidth, darkCyan);

    ofVec2f rightLegFace4[4] = { ofVec2f(163, 740), ofVec2f(280, 681), ofVec2f(257, 718), ofVec2f(147, 773) };
    Polygon::drawFramedPolygon(rightLegFace4, 4, lineWidth, darkCyan);
}

void Porygon::drawHead()
{
    ofVec2f headFace1[8] = { ofVec2f(316, 176), ofVec2f(406, 209), ofVec2f(427, 284), ofVec2f(497, 289),
        ofVec2f(561, 368), ofVec2f(538, 430), ofVec2f(468, 405), ofVec2f(347, 288) };
    Polygon::drawFramedPolygon(headFace1, 8, lineWidth, darkPink);

    ofVec2f headFace2[3] = { ofVec2f(561, 368), ofVec2f(666, 476), ofVec2f(538, 430) };
    Polygon::drawFramedPolygon(headFace2, 3, lineWidth, darkCyan);

    ofVec2f headFace3[4] = { ofVec2f(395, 68), ofVec2f(461, 167), ofVec2f(406, 209), ofVec2f(316, 176) };
    Polygon::drawFramedPolygon(headFace3, 4, lineWidth, lightPink);

    ofVec2f headFace4[4] = { ofVec2f(530, 253), ofVec2f(590, 341), ofVec2f(561, 368), ofVec2f(497, 289) };
    Polygon::drawFramedPolygon(headFace4, 4, lineWidth, lightPink);

    ofVec2f headFace5[4] = { ofVec2f(590, 341), ofVec2f(678, 461), ofVec2f(666, 476), ofVec2f(561, 368) };
    Polygon::drawFramedPolygon(headFace5, 4, lineWidth, lightCyan);

    ofVec2f headFace6[8] = { ofVec2f(525, 46), ofVec2f(625, 136), ofVec2f(711, 313), ofVec2f(590, 341),
        ofVec2f(530, 253), ofVec2f(522, 173), ofVec2f(461, 167), ofVec2f(395, 68) };
    Polygon::drawFramedPolygon(headFace6, 8, lineWidth, lightPink);

    ofVec2f headFace7[4] = { ofVec2f(590, 341), ofVec2f(711, 313), ofVec2f(752, 441), ofVec2f(678, 461) };
    Polygon::drawFramedPolygon(headFace7, 4, lineWidth, lightCyan);

    ofVec2f headFace8[4] = { ofVec2f(678, 461), ofVec2f(752, 441), ofVec2f(742, 452), ofVec2f(666, 476) };
    Polygon::drawFramedPolygon(headFace8, 4, lineWidth, lightCyan);

    ofVec2f pupil[4] = { ofVec2f(462, 217), ofVec2f(483, 224), ofVec2f(477, 243), ofVec2f(456, 237) };
    Polygon::drawFramedPolygon(pupil, 4, lineWidth, ofColor::black);
}

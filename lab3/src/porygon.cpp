#include "porygon.h"

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
    /*ofFill();
    ofSetLineWidth(0);
    ofSetColor(127, 191, 195);
    ofBeginShape();
    ofVertex(131, 2);
    ofVertex(163, 0);
    ofVertex(284, 291);
    ofVertex(192, 314);
    ofVertex(131, 2);
    ofEndShape();*/
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(131, 2);
    ofVertex(163, 0);
    ofVertex(284, 291);
    ofVertex(192, 314);
    ofVertex(131, 2);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(131, 2);
    ofVertex(111, 26);
    ofVertex(143, 401);
    ofVertex(192, 314);
    ofVertex(131, 2);
    ofEndShape();
}

void Porygon::drawLeftLeg()
{
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(536, 569);
    ofVertex(543, 612);
    ofVertex(521, 622);
    ofVertex(501, 593);
    ofVertex(536, 569);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(543, 612);
    ofVertex(619, 574);
    ofVertex(596, 412);
    ofVertex(512, 417);
    ofVertex(543, 612);
    ofEndShape();
}

void Porygon::drawBody()
{
    /*ofFill();
    ofSetLineWidth(0);
    ofSetColor(216, 109, 110);
    ofBeginShape();
    ofVertex(143, 401);
    ofVertex(154, 352);
    ofVertex(353, 581);
    ofVertex(307, 668);
    ofVertex(269, 622);
    ofEndShape();*/

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(143, 401);
    ofVertex(154, 352);
    ofVertex(353, 581);
    ofVertex(307, 668);
    ofVertex(269, 622);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(353, 581);
    ofVertex(307, 668);
    ofVertex(455, 627);
    ofVertex(587, 532);
    ofVertex(353, 581);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(353, 581);
    ofVertex(154, 352);
    ofVertex(216, 292);
    ofVertex(398, 339);
    ofVertex(326, 440);
    ofVertex(353, 581);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(353, 581);
    ofVertex(398, 339);
    ofVertex(326, 440);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(216, 292);
    ofVertex(347, 289);
    ofVertex(398, 339);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(353, 581);
    ofVertex(398, 339);
    ofVertex(468, 405);
    ofVertex(547, 433);
    ofVertex(587, 532);
    ofVertex(353, 581);
    ofEndShape();
}

void Porygon::drawRightLeg()
{
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(99, 381);
    ofVertex(234, 444);
    ofVertex(103, 509);
    ofVertex(3, 435);
    ofVertex(99, 381);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(234, 444);
    ofVertex(280, 681);
    ofVertex(163, 740);
    ofVertex(103, 509);
    ofVertex(234, 444);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(3, 435);
    ofVertex(103, 509);
    ofVertex(163, 740);
    ofVertex(147, 773);
    ofVertex(0, 478);
    ofVertex(3, 435);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(163, 740);
    ofVertex(280, 681);
    ofVertex(257, 718);
    ofVertex(147, 773);
    ofVertex(163, 740);
    ofEndShape();
}

void Porygon::drawHead()
{
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(316, 176);
    ofVertex(406, 209);
    ofVertex(427, 284);
    ofVertex(497, 289);
    ofVertex(561, 368);
    ofVertex(538, 430);
    ofVertex(468, 405);
    ofVertex(347, 288);
    ofVertex(316, 176);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(561, 368);
    ofVertex(666, 476);
    ofVertex(538, 430);
    ofVertex(561, 368);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(395, 68);
    ofVertex(461, 167);
    ofVertex(406, 209);
    ofVertex(316, 176);
    ofVertex(395, 68);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(530, 253);
    ofVertex(590, 341);
    ofVertex(561, 368);
    ofVertex(497, 289);
    ofVertex(530, 253);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(590, 341);
    ofVertex(678, 461);
    ofVertex(666, 476);
    ofVertex(561, 368);
    ofVertex(590, 341);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(525, 46);
    ofVertex(625, 136);
    ofVertex(711, 313);
    ofVertex(590, 341);
    ofVertex(530, 253);
    ofVertex(522, 173);
    ofVertex(461, 167);
    ofVertex(395, 68);
    ofVertex(525, 46);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(590, 341);
    ofVertex(711, 313);
    ofVertex(752, 441);
    ofVertex(678, 461);
    ofVertex(590, 341);
    ofEndShape();

    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(678, 461);
    ofVertex(752, 441);
    ofVertex(742, 452);
    ofVertex(666, 476);
    ofVertex(678, 461);
    ofEndShape();

    //Eye----------------------------------
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(ofColor::black);
    ofBeginShape();
    ofVertex(462, 217);
    ofVertex(483, 224);
    ofVertex(477, 243);
    ofVertex(456, 237);
    ofVertex(462, 217);
    ofEndShape();
}

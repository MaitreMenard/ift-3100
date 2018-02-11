#include "polygon.h"

void Polygon::drawPolygon(ofVec2f* vertices, int nbVertex)
{
    if (nbVertex == 3)
    {
        ofDrawTriangle(vertices[0].x, vertices[0].y, vertices[1].x, vertices[1].y, vertices[2].x, vertices[2].y);
    }
    else
    {
        ofBeginShape();
        for (int i = 0; i < nbVertex; i++)
        {
            ofVertex(vertices[i].x, vertices[i].y);
        }
        ofVertex(vertices[0].x, vertices[0].y); //Close the polygon
        ofEndShape();
    }
}

void Polygon::drawFramedPolygon(ofVec2f* vertices, int nbVertex, int borderWidth, ofColor fillColor)
{
    ofFill();
    ofSetLineWidth(0);
    ofSetColor(fillColor);
    drawPolygon(vertices, nbVertex);

    ofNoFill();
    ofSetLineWidth(borderWidth);
    ofSetColor(ofColor::black);
    drawPolygon(vertices, nbVertex);
}

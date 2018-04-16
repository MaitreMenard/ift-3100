#include "bezier.h"

void Bezier::setup()
{
    for (int i = 0; i <= resolution; i++)
    {
        curvePoints.addVertex(ofPoint());
    }

    controlPoints.push_back(ofPoint(114, 614));
    controlPoints.push_back(ofPoint(28, 200));
    controlPoints.push_back(ofPoint(400, 700));
    controlPoints.push_back(ofPoint(900, 614));
    controlPoints.push_back(ofPoint(840, 300));

    updateCurve();
}

void Bezier::updateCurve()
{
    for (int i = 0; i <= resolution; i++)
    {
        float t = i / (float)resolution;
        ofPoint point = ofPoint(0, 0, 0);
        int n = controlPoints.size() - 1;

        for (int k = 0; k <= n; k++)
        {
            point += combinations(n, k) * std::powf(t, k) * std::powf(1 - t, n - k) * controlPoints[k];
        }

        curvePoints[i] = point;
    }
}

int Bezier::combinations(int n, int k)
{
    // Taken from https://stackoverflow.com/questions/9330915/number-of-combinations-n-choose-r-in-c?noredirect=1&lq=1

    if (k == 0) return 1;
    if (k > n) return 0;
    if (k > n / 2) k = n - k;

    int result = 1;

    for (int r = 1; r <= k; r++)
    {
        result *= n - r + 1;
        result /= r;
    }

    return result;
}

void Bezier::draw()
{
    drawCurve();
    drawControlPoints();
}

void Bezier::drawCurve()
{
    ofSetColor(curveColor);
    ofSetLineWidth(curveWidth);
    curvePoints.draw();
}

void Bezier::drawControlPoints()
{
    ofSetColor(controlPointsColor);
    for (ofPoint controlPoint : controlPoints)
    {
        ofDrawCircle(controlPoint, controlPointsRadius);
    }
}

Bezier::~Bezier()
{
    controlPoints.clear();
}

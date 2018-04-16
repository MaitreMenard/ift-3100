#include "bezier.h"

void Bezier::setup()
{
    resolution = 100;
    for (int i = 0; i < resolution; i++)
    {
        curvePoints.addVertex(ofPoint());
    }

    controlPoints.push_back(ofPoint(114, 614));
    controlPoints.push_back(ofPoint(28, 256));
    controlPoints.push_back(ofPoint(540, 256));
    controlPoints.push_back(ofPoint(740, 614));
    controlPoints.push_back(ofPoint(939, 337));

    update();
}

void Bezier::update()
{
    for (int i = 0; i < resolution; i++)
    {
        float t = i / (float)resolution;
        /*curvePoints[i] = std::powf(1 - t, 3) * controlPoints[0] + 3 * t * std::powf(1 - t, 2) * controlPoints[1]
            + 3 * std::powf(t, 2) * (1 - t) * controlPoints[2] + std::powf(t, 3) * controlPoints[3];*/

        ofPoint point = ofPoint(0, 0, 0);
        int n = controlPoints.size() - 1;
        for (int k = 0; k <= n; k++)
        {
            point += combinations(n, k) * std::powf(t, k) * std::powf(1 - t, n - k) * controlPoints[k];
        }

        curvePoints[i] = point;
    }
}

void Bezier::draw()
{
    ofSetColor(0, 255, 0);
    ofSetLineWidth(3);
    curvePoints.draw();

    ofSetColor(255, 0, 0);
    for (ofPoint controlPoint : controlPoints)
    {
        ofDrawCircle(controlPoint, 8);
    }
}

Bezier::~Bezier()
{
    controlPoints.clear();
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

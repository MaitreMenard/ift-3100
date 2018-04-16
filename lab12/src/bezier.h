#include <math.h>
#include "ofMain.h"

class Bezier
{
public:
    void setup();
    void draw();
    ~Bezier();

private:
    const ofColor curveColor = ofColor(0, 255, 0);
    const int curveWidth = 3;
    const ofColor controlPointsColor = ofColor(255, 0, 0);
    const int controlPointsRadius = 8;
    const int resolution = 100;

    std::vector<ofPoint> controlPoints;
    ofPolyline curvePoints;

    void updateCurve();
    int combinations(int n, int k);
    void drawCurve();
    void drawControlPoints();
};

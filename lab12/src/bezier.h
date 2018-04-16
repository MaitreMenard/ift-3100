#include <math.h>
#include "ofMain.h"

class Bezier
{
public:
    void setup();
    void update();
    void draw();
    ~Bezier();

private:
    std::vector<ofPoint> controlPoints;
    int resolution;
    ofPolyline curvePoints;

    int combinations(int n, int k);
};

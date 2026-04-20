#include "Figure.h"
#include <cmath>

Figure::Figure() : x1(0), y1(0), x2(0), y2(0) {}

Figure::Figure(double a, double b, double c, double d)
    : x1(a), y1(b), x2(c), y2(d) {}

Figure::Figure(const Figure& f)
    : x1(f.x1), y1(f.y1), x2(f.x2), y2(f.y2) {}

double Figure::getX1() const { return x1; }
double Figure::getY1() const { return y1; }
double Figure::getX2() const { return x2; }
double Figure::getY2() const { return y2; }

double Figure::sideLength() const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
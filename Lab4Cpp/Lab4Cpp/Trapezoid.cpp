#include "Trapezoid.h"

Trapezoid::Trapezoid() : Figure(), a(0), b(0), h(0) {}

Trapezoid::Trapezoid(double x1, double y1, double x2, double y2,
    double base1, double base2, double height)
    : Figure(x1, y1, x2, y2), a(base1), b(base2), h(height) {}

Trapezoid::Trapezoid(const Trapezoid& t)
    : Figure(t), a(t.a), b(t.b), h(t.h) {}

double Trapezoid::area() const {
    return (a + b) / 2 * h;
}

double Trapezoid::perimeter() const {
    return a + b + 2 * sideLength();
}
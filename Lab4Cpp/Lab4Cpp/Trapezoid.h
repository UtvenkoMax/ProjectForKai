#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Figure.h"

class Trapezoid : public Figure {
private:
    double a, b, h;

public:
    Trapezoid();
    Trapezoid(double, double, double, double, double, double, double);
    Trapezoid(const Trapezoid&);

    double area() const;
    double perimeter() const;
};

#endif#pragma once

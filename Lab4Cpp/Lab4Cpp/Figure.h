#ifndef FIGURE_H
#define FIGURE_H

class Figure {
protected:
    double x1, y1, x2, y2;

public:
    Figure(); // конструктор за замовчуванням
    Figure(double, double, double, double); // з параметрами
    Figure(const Figure&); // копіювання

    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;

    double sideLength() const;
};

#endif#pragma once

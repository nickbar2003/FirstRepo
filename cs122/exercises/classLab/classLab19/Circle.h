#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <iostream>

class Circle {
private:
  double radius;
  Point center;

public:
  Circle();
  Circle(double, Point);
  Circle(double, double, double);
  // Circle(const Circle&);
  // TODO: add copy constructer

  void display();
};

#endif

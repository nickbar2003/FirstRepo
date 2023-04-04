#include "Circle.h"

Circle::Circle() {

  radius = 1.0;
  center = Point();
}

void Circle::display() {
  std::cout << "Circle with radius=" << radius << " and center=";
  center.display();
}

Circle::Circle(double radiusParam, Point centerParam) {

  radius = radiusParam;
  center = centerParam;
}

Circle::Circle(double radiusParam, double xParam, double yParam) {
  radius = radiusParam;
  center = Point(xParam, yParam);
}

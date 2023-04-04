#include "Circle.h"
#include "Point.h"

int main() {
  Point origin;
  origin.display();

  Point p1(5.1, -2.3);
  p1.display();

  Circle unitCircle;
  unitCircle.display();

  Circle c2(3.0, p1);
  c2.display();

  Circle c3(3.0, -2.0, -5.0);
  c3.display();

  return 0;
}

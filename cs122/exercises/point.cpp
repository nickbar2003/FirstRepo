#include "point.h"

point::point() {
  x = 0.0;
  y = 0.0;
}

void point::display() { std::cout << "(" << x << ", " << y << ")\n"; }

#ifndef POINT_H
#define POINT_H



#include <iostream>

using namespace std;

class Point {
  private:
    double x;
    double y;
  public:
    Point(); // DVC
    Point(double, double); // EVC
    // TODO: add copy constructor
    // TODO: dyn alloc x and y
    // add a destructor
    void display();
    // TODO: add getters and setters

};



#endif

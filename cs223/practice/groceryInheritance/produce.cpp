#include <cstdlib>
#include <string>

class Produce {
public:
  Produce(double weight, std::string color, double price) {
    weight = weight;
    color = color;
    price = price;
  }

  double weight;
  std::string color;

protected:
  double price;

private:
  int dayUntilExpired;
};

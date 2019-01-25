#include <iostream>

#include "point.hpp"

int main(int argc, char const *argv[]) {

  Point p1, p2;
  // p1.x = 5;
  // p1.y = 10;
  // p2.x = 2;
  // p2.y = 4;
  p1.set_x(5);
  p1.set_y(10);
  p2.set_x(2);
  p2.set_y(4);

  std::cout << "p1: (" << p1.get_x() << ", " << p1.get_y() << ")" << std::endl;
  p1.translate(-5, -5);
  std::cout << "p1: (" << p1.get_x() << ", " << p1.get_y() << ")" << std::endl;

  std::cout << "p2: (" << p2.get_x() << ", " << p2.get_y() << ")" << std::endl;
  p2.translate(-5, -5);
  std::cout << "p2: (" << p2.get_x() << ", " << p2.get_y() << ")" << std::endl;

  return 0;
}

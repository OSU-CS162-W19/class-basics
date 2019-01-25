#include "point.hpp"

void Point::translate(int dx, int dy) {
  this->x += dx;
  this->y += dy;
}

void Point::set_x(int x) {
  this->x = x;
}

void Point::set_y(int y) {
  this->y = y;
}

int Point::get_x() {
  return this->x;
}

int Point::get_y() {
  return this->y;
}

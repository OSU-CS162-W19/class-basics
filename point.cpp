#include "point.hpp"

Point::Point() : x(-1), y(-1) {}

Point::Point(int x, int y) : x(x), y(y) {}

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

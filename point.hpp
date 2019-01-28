#ifndef __POINT_HPP
#define __POINT_HPP

class Point {
private:
  int x;
  int y;

public:
  Point();
  Point(int x, int y);
  void translate(int dx, int dy);
  void set_x(int x);
  void set_y(int y);
  int get_x();
  int get_y();
};

#endif

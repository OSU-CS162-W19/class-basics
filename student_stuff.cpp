#include <iostream>

#include "student.hpp"

int main(int argc, char const *argv[]) {

  Student s1("Luke Skywalker", 933111111);
  s1.add_grade(4.0);
  s1.add_grade(3.67);
  s1.print_student();

  Student s2 = s1;
  s2.add_grade(0.67);
  s2.print_student();

  return 0;
}

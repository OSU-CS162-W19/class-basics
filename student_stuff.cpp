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

  Student s3;
  s3 = s1;
  s3.print_student();

  Student* s4 = new Student;
  Student* s5 = new Student("Leia Organa", 933222222);
  Student* s6 = new Student(s1);

  Student** array = new Student*[4];
  for (int i = 0; i < 4; i++) {
    array[i] = new Student("Kylo Ren", 933666666);
  }

  for (int i = 0; i < 4; i++) {
    delete array[i];
  }
  delete[] array;

  delete s4;
  delete s5;
  delete s6;

  return 0;
}

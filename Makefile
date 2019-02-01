# target: dependencies
# 	commands

CC=g++ -g

# all: student_stuff point_stuff

student_stuff: student_stuff.cpp student.hpp student.o
	$(CC) student_stuff.cpp student.o -o student_stuff

student.o: student.hpp student.cpp
	$(CC) -c student.cpp -o student.o

point_stuff: point_stuff.cpp point.hpp point.o
	$(CC) point_stuff.cpp point.o -o point_stuff

point.o: point.hpp point.cpp
	$(CC) -c point.cpp -o point.o

clean:
	rm -f *.o student_stuff point_stuff

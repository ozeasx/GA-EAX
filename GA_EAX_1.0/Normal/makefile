CC = g++
FLAGS1 = -Wall
FLAGS2 = -g
FLAGS3 = -O3 -DNDEBUG

CPPFLAGS = $(FLAGS1) $(FLAGS3)

objects = env.o cross.o evaluator.o indi.o rand.o kopt.o sort.o

jikken: main.cpp $(objects)
	$(CC) $(CPPFLAGS) main.cpp $(objects) -o jikken -lm

two-opt: two-opt.cpp $(objects)
	$(CC) $(CPPFLAGS) two-opt.cpp $(objects) -o two-opt -lm

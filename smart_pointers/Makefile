CC = g++
CFLAGS = -c -Wall --std=c++17
LGLAGS = -Wall
OBJS = main.o 

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp 
	$(CC) $(CFLAGS) main.cpp

clean : 
	rm -r main *.o 

run :
	./main

CC = g++
CFLAGS = -c -Wall
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

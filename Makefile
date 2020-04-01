CC=gcc
CFLAGS=-Wall -Wno-unused-value

IndianRail: IndianRail-runner.c IndianRail.c IndianRail.h
	$(CC) -c IndianRail.c -o IndianRail.o
	$(CC) -c IndianRail-runner.c -o IndianRail-runner.o
	$(CC) $(CFLAGS) IndianRail.o IndianRail-runner.o -o run -lpthread

CC=gcc
CFLAGS=-Wall -Wno-unused-value

caltrain: caltrain-runner.c caltrain.c caltrain.h
	$(CC) -c IndianRailway.c -o IndianRailway.o
	$(CC) -c IndianRailway-runner.c -o IndianRailway-runner.o
	$(CC) $(CFLAGS) IndianRailway.o IndianRailway-runner.o -o run -lpthread
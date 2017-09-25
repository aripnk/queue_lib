CC=gcc
All	:	queue

queue	: queue.c
	$(CC) -c queue.c

test : test.c
	$(CC) test.c queue.c -o testqueue
clean	:
	rm -rf queue.o
	rm -rf testqueue

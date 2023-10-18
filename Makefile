CC=gcc

.PHONY: clean

xite: xite.c
	$(CC) xite.c -o xite -Wall -Wextra -pedantic -std=c99 

test: xite
	./xite test.c 

clean: 
	rm xite

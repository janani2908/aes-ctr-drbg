CC=gcc

all:
	$(CC) drbg.c main.c -o drbg_test

run:
	./drbg_test

clean:
	rm -f drbg_test

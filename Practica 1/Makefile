CC = -gcc
CFLAGS = -Wall -Wextra -pedantic
1 = ej1
3 = ej3
4 = ej4

all: $(4)

$(1): ej1.o
		$(CC) $(CFLAGS) $^ -o $@

ej1.o: ej1.c
		$(CC) $(CFLAGS) -c $< -o $@

$(3): ej3.o
		$(CC) $(CFLAGS) $^ -o $@

ej3.o: ej3.c
		$(CC) $(CFLAGS) -c $< -o $@

$(4): ej4.o
		$(CC) $(CFLAGS) $^ -o $@

ej4.o: ej4.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm *.o $(1)

.PHONY: all clean
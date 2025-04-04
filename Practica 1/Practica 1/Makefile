CC = -gcc
CFLAGS = -Wall -Wextra -pedantic
1 = ej1
3 = ej3
4 = ej4
7 = ej7
9 = ej9
10 = ej10
11 = ej11

all: $(11)

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

$(7): ej7.o
		$(CC) $(CFLAGS) $^ -o $@

ej7.o: ej7.c
		$(CC) $(CFLAGS) -c $< -o $@

$(9): ej9.o
		$(CC) $(CFLAGS) $^ -o $@

ej9.o: ej9.c
		$(CC) $(CFLAGS) -c $< -o $@

$(10): ej10.o
		$(CC) $(CFLAGS) $^ -o $@

ej10.o: ej10.c
		$(CC) $(CFLAGS) -c $< -o $@

$(11): ej11.o
		$(CC) $(CFLAGS) $^ -o $@
	
ej11.o: ej11.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm *.o $(9)

.PHONY: all clean
CC = -gcc
CFLAGS = -Wall -Wextra -pedantic

EJS = ej1 ej3 ej4 ej7 ej9 ej10 ej11 ej12 ej13

all: $(EJS)

$(EJS): %: %.o
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Correr todos los ejecutables
run: $(EJS)
	@for prog in $(EJS); do \
		echo "=== Ejecutando $$prog ==="; \
		./$$prog; \
		echo ""; \
	done

# Correr individualmente
run1: ej1
	./ej1

run3: ej3
	./ej3

run4: ej4
	./ej4

run7: ej7
	./ej7

run9: ej9
	./ej9

run10: ej10
	./ej10

run11: ej11
	./ej11

run12: ej12
	./ej12

run13: ej13
	./ej13

clean:
	rm -f *.o $(EJS)

.PHONY: all clean run run1 run3 run4 run7 run9 run10 run11
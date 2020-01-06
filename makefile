CC	= gcc
PROGRAM	= ascii
SRC	= main.c

$(PROGRAM): $(SRC)
	$(CC) $(SRC) -o $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)
	./$(PROGRAM) a

clean:
	rm *.out | rm $(PROGRAMm)

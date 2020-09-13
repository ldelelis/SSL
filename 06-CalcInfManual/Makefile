CC=gcc
CFLAGS=-Wall -O3 --static --std=c18

DEPS=Parser.h Scanner.h

ODIR=obj
_OBJ=Calc.o Parser.o Scanner.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

build: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o $~

.PHONY: clean

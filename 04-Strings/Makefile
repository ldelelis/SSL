CC=gcc
CFLAGS=--static --std=c18

OBJ=StringsTest.o String.o
ODIR=obj

DEPS=String.h

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

build: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o *~

.PHONY: clean

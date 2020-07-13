CC=gcc
CFLAGS=--static --std=c18

_OBJ_ENUM=wl-1-enum-switch.o
OBJ_ENUM=$(patsubst %,$(ODIR)/%,$(_OBJ_ENUM))
_OBJ_GOTO=wl-2-goto.o
OBJ_GOTO=$(patsubst %,$(ODIR)/%,$(_OBJ_GOTO))
ODIR=obj

$(ODIR)/%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

enum: $(OBJ_ENUM)
	$(CC) -o $@ $^ $(CFLAGS)

goto: $(OBJ_GOTO)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o *~

.PHONY: clean enum goto

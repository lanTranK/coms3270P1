
CC=gcc
CFLAGS=-I

ODIR=obj

_DEPS = pointcloud.h
DEPS = $(patsubst %,/%,$(_DEPS))

_OBJ = pointcloud.o
OBJ = $(patsubst %,/$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pointcloud: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core *~ 

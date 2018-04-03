CC=gcc
CFLAGS=-c -Wall
LDFLAGS= -L.
SOURCES=main.c moduleA.c moduleB.c moduleCommon.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): main.o moduleA moduleB
	$(CC) $(LDFLAGS) -lmoduleA -lmoduleB main.o -o $@

moduleA:  moduleA.o moduleCommon.o
	$(CC) -shared -Wl -o libmoduleA.so  moduleA.o moduleCommon.o

moduleB:  moduleB.o moduleCommon.o
	$(CC) -shared -Wl -o libmoduleB.so  moduleB.o moduleCommon.o

clean:
	rm -fr *.so
	rm -fr *.so.1*
	rm -fr main
	rm -fr *.o

.c.o:
	$(CC) $(CFLAGS) $< -o $@


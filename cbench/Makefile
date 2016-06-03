TARGET = cbench
LIBS = -lm
CC = g++
#CFLAGS = -g -Wall -std=c++11
CFLAGS = -g -std=c++11 -O2

.PHONY: default all clean

default: $(TARGET)
all: default

#OBJECTS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	#$(CC) $(OBJECTS) -Wall $(LIBS) -o $@
	$(CC) $(OBJECTS) $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)


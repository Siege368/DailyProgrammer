CC=g++
CPPFLAGS=-g -Wall -c

SRCS=Main.cpp
OBJS=Main.o
TARGET=Main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

$(TARGET).o: $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS)

clean:
	rm *.o $(TARGET)
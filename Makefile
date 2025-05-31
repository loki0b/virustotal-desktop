CFLAGS = -I$(HOME)/include
LDFLAGS = -L$(HOME)/lib
SRC = src/
TARGET = main.cpp
LIBS = -lcurl

all:
	g++ $(SRC)$(TARGET).cpp $(CFLAGS) $(LDFLAGS) $(LIBS) -o $bin/main

run:
	./bin/main

clean:
	rm bin/main
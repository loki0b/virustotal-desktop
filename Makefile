CFLAGS = -I$(HOME)/include
LDFLAGS = -L$(HOME)/lib
SRC = src/


all:
	g++ $(SRC)curl.cpp $(CFLAGS) $(LDFLAGS) -o bin/main

run:
	./bin/main

clean:
	rm bin/main
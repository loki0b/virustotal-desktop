CFLAGS = -I$(HOME)/include
LDFLAGS = -L$(HOME)/lib
SRC = src/

all:
	g++ $(SRC)main.cpp $(CFLAGS) $(LDFLAGS) -lcurl -o bin/main

run:
	./bin/main

clean:
	rm bin/main
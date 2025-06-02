CFLAGS = -I$(HOME)/include
LDFLAGS = -L$(HOME)/lib
#SRC = src/
TARGET = src/main.cpp src/curl.cpp
LIBS = -lcurl

all:
	g++ $(SRC)$(TARGET) $(CFLAGS) $(LDFLAGS) $(LIBS) -o bin/main

run:
	./bin/main

clean:
	rm bin/main

SRC=$(wildcard src/*.cpp)

all:
	g++ -Iinclude $(SRC) -lcurl -o bin/api_handler

run:
	bin/api_handler

clean:
	rm bin/api_handler
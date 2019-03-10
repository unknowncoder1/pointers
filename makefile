CPPFLAGS=-std=c++14 -Wall 

all: src/pointers.cpp
	@g++ $(CPPFLAGS) -o bin/pointers.out src/pointers.cpp  
	

run:
	@bin/pointers.out

clean:
	@printf "\033[31mRemoving objects (and temporary files)\033[0m\n"
@rm -rf bin/*.o*

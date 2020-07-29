CC= g++
CFLAGS=-c -std=c++11

SOURCES=$(shell find . -type f -name '*.cpp')
OBJECTS=$(SOURCES:.cpp=.o)
EXEC=a.out

all: $(EXEC)
	clear
	clear
	./a.out

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)
	
%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm -fv $(OBJECTS)
	
purge:
	find . -type f \( -name '*.o' -o -name '*.out' \) -exec rm -fv {} \;
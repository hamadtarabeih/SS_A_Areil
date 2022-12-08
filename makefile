CC=gcc
OBJECTS_MAIN=main.o 
FLAGS= -Wall -g
EXE=connections
.PHONY: clean all
#target commands
all: $(EXE)
$(EXE): $(OBJECTS_MAIN) 
	$(CC) $(OBJECTS_MAIN) -o $(EXE)

main.o: main.c my_mat.h  
	$(CC) $(FLAGS) -c main.c 
clean:
	rm -f *.o *.a *.so $(EXE)

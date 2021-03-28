#Options for pre-processor
CPPFLAGS = -MMD
#Set the comiler.
CC = gcc
#Optimization or debugging switches?
CFLAGS = -Wall -Wextra -std=c99 -O2 $(pkg-config --cflags sdl2)
#Linker flags.
LDFLAGS = 
#Libs and path for linker.
LDLIBS = -lm $(pkg-config --libs sdl2) -l SDL2 -l SDL2main
#e.g.main: main.o median.o sort.o


SRC = main.c
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}	# A list of dependency files.

all: main

main: ${OBJ}

.PHONY: clean

clean:
	${RM} ${OBJ}	# Removes object files.
	${RM} ${DEP}	# Remove dependency files.
	${RM} main	# Remove main program.
	
-include ${DEP}

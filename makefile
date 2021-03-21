CC := clang

CFLAGS := 'sdl2-config --libs --cflags' -ggdb3 -O0 --std=c99 -Wall -lSDL2_image -lm

HDRS :=

SRCS := blodia.c

OBJS := $(SRCS:.c=.o)

EXEC:=blodia

all: $(EXEC)

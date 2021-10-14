CC = g++
CFLAGS = #-W -Wall -g
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lGL -lX11 -lpthread -lXrandr -lXi -ldl

SRC = $(wildcard src/*.cpp)
OBJS = $(SRC:.cpp=.o)
 
all : moteur clean

moteur : $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o : %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm src/*.o

git:
	rm moteur
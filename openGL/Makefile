CC = gcc
CCP = g++
CFLAGS = -ggdb -std=c99 -Wall -Werror -Wformat=0
INCPATH = -I/usr/include
LIBPATH = -L/usr/lib/x86_64-linux-gnu/
LIBS = -lglut -lGLU -lGL -lm -lpthread #-ljpeg -lGLEW

%: %.c
	$(CC) $(CFLAGS) $(INCPATH) $(LIBPATH) -o $@ $@.c $(LIBS)

%: %.cpp
	$(CCP) $(CFLAGS) $(INCPATH) $(LIBPATH) $^ $(LIBS) -o $@



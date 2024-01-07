#HEADERS = program.h headers.h

# Definindo a diretiva _LINUX
CFLAGS=-D_LINUX
MYESPEAK=-lespeak
SOURCE= fala.c
TARGET= srvfalar

default: all

all: clean compile install

compile:
	gcc -g $(CFLAGS) $(SOURCE) $(MYESPEAK) -o $(TARGET)

install:
	cp  $(TARGET) /usr/bin/ 
	cp $(TARGET) ./../srvfalar/usr/bin/
clean:
	-rm -f $(TARGET)



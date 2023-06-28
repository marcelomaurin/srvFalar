#HEADERS = program.h headers.h

MYESPEAK=-lespeak
SOURCE= fala.c
TARGET= srvfalar

default: all

all: clean compile install

compile:
	gcc -g $(SOURCE) $(MYESPEAK) -o $(TARGET)

install:
	cp  $(TARGET) /usr/bin/ 
	cp $(TARGET) ./../srvfalar/usr/bin/
clean:
	-rm -f $(TARGET)



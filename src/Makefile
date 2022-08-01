#HEADERS = program.h headers.h

MYESPEAK=-lespeak
SOURCE= fala.c
TARGET= srvfalar

default: all

all: clean compile install

compile:
	gcc  $(SOURCE) $(MYESPEAK) -o $(TARGET)

install:
	cp  $(TARGET) /usr/local/bin/ 

clean:
	-rm -f $(TARGET)



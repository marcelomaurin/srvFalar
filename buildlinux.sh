#!/bin/bash
ARQUITETURA=$(uname -m)
VERSAO=1.1

case $(uname -m) in
	i386) 	ARQUITETURA="i386";;
	i686) 	ARQUITETURA="i386";;
	x86_64)	ARQUITETURA="amd64";;
	arm) 	ARQUITETURA="arm";;
esac

echo $ARQUITETURA

if [ $ARQUITETURA = 'amd64' ]; 
then
	echo "AMD64 Script"
	echo "Preparando binarios"
	cp ./src/srvfalar ./srvfalar/usr/bin/srvfalar
	chmod 777 ./srvfalar/usr/bin/srvfalar
	#cp ./src/srvfalar.png ./srvfalar/usr/share/icons/hicolor/srvfalar.png
	#cp ./srvfalar.desktop_arm ./srvfalar/usr/share/applications/srvfalar.desktop
	#ln -s /usr/bin/srvfalar ./srvfalar/usr/share/applications/srvfalar
	echo "Empacotando"
	dpkg-deb --build srvfalar
	echo "Movendo para pasta repositorio"
	FILE=`echo "srvfalar-$VERSAO""_amd64.deb"`
	echo $FILE
	mv srvfalar.deb $FILE
	cp $FILE ./bin/
	exit 1;
fi

if [ $ARQUITETURA = 'i686' ];
then
	echo "i686 Script"
	echo "Preparando binarios"
	cp ./src/srvfalar ./srvfalar/usr/bin/srvfalar
	chmod 777 ./srvfalar/usr/bin/srvfalar
	#cp ./src/srvfalar.png ./srvfalar/usr/share/icons/hicolor/srvfalar.png
	#cp ./srvfalar.desktop_arm ./srvfalar/usr/share/applications/srvfalar.desktop
	#ln -s /usr/bin/srvfalar ./srvfalar/usr/share/applications/srvfalar
	echo "Empacotando"
	dpkg-deb --build srvfalar
	echo "Movendo para pasta repositorio"
        FILE=`echo "srvfalar-$VERSAO""_i686.deb"`
        echo $FILE
	mv srvfalar.deb $FILE
	cp ./$FILE ./bin/
	exit 1;
fi

if [ $ARQUITETURA = 'i386' ];
then
	echo "i386 Script"
	echo "Preparando binarios"
	cp ./src/srvfalar ./srvfalar/usr/bin/srvfalar
	chmod 777 ./srvfalar/usr/bin/srvfalar
	#cp ./src/srvfalar.png ./srvfalar/usr/share/icons/hicolor/srvfalar.png
	#cp ./srvfalar.desktop_arm ./srvfalar/usr/share/applications/srvfalar.desktop
	#ln -s /usr/bin/srvfalar ./srvfalar/usr/share/applications/srvfalar
	echo "Empacotando"
	dpkg-deb --build srvfalar
	echo "Movendo para pasta repositorio"
        FILE=`echo "srvfalar-$VERSAO""_i386.deb"`
        echo $FILE
	mv srvfalar.deb $FILE
	cp ./$FILE ./bin/
	exit 1;
fi

if [ $ARQUITETURA =  'armv7l' ]; then
	echo "ARM Script"
	echo "Preparando binarios"
	cp ./src/srvfalar ./srvfalar/usr/bin/srvfalar
	chmod 777 ./srvfalar/usr/bin/srvfalar
	#ln -s /usr/bin/srvfalar ./srvfalar/usr/bin/srvfalar
	#cp ./src/srvfalar.png ./srvfalar/usr/share/icons/hicolor/srvfalar.png
	#cp ./srvfalar.desktop_arm ./srvfalar/usr/share/applications/srvfalar.desktop
	echo "Empacotando"
	dpkg-deb --build srvfalar
	echo "Movendo para pasta repositorio"
        FILE=`echo "srvfalar-$VERSAO""_arm.deb"`
        echo $FILE
	mv srvfalar.deb $FILE
	cp ./$FILE ./bin/
	exit 1;
fi

PROG = bin/geometria 
CC = g++
CPPFLAGS = -O0 -g -Wall -ansi -pedantic -Iinclude -std=c++11
OBJS = main.o triangulo.o controll.o retangulo.o quadrado.o circulo.o piramide.o paralelepipedo.o cubo.o esfera.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: src/main.cpp 
	$(CC) $(CPPFLAGS) -c src/main.cpp

controll.o: src/controll.cpp include/controll.h
	$(CC) $(CPPFLAGS) -c src/controll.cpp

triangulo.o: src/triangulo.cpp include/triangulo.h
	$(CC) $(CPPFLAGS) -c src/triangulo.cpp

retangulo.o: src/retangulo.cpp  include/retangulo.h
	$(CC) $(CPPFLAGS) -c src/retangulo.cpp

quadrado.o: src/quadrado.cpp  include/quadrado.h
	$(CC) $(CPPFLAGS) -c src/quadrado.cpp

circulo.o: src/circulo.cpp  include/circulo.h
	$(CC) $(CPPFLAGS) -c src/circulo.cpp

piramide.o: src/piramide.cpp  include/piramide.h
	$(CC) $(CPPFLAGS) -c src/piramide.cpp

paralelepipedo.o: src/paralelepipedo.cpp  include/paralelepipedo.h
	$(CC) $(CPPFLAGS) -c src/paralelepipedo.cpp

cubo.o: src/cubo.cpp  include/cubo.h
	$(CC) $(CPPFLAGS) -c src/cubo.cpp

esfera.o: src/esfera.cpp  include/esfera.h
	$(CC) $(CPPFLAGS) -c src/esfera.cpp

clean:
	rm -f core $(PROG) $(OBJS)

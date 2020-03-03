# compila todos los archivos de la lista enlazada
all: Ordenamiento
Ordenamiento: Main.o Ordenamiento.0
	g++ Main.o Ordenamiento.o -o ordenamiento
	./ordenamiento
Main.o: Main.cpp
	g++ -c Main.cpp
Ordenamiento.0: Ordenamiento.cpp
	g++ -c Ordenamiento.cpp
clean:
	rm -rf *o ordenamiento

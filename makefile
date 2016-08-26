Main: Main.o Matriz.o
	g++ Main.o Matriz.o -o Matriz
     
Main.o:	Main.cpp Matriz.h
	g++ -c Main.cpp 
 
Matriz.o: Matriz.cpp Matriz.h
	g++ -c Matriz.cpp 

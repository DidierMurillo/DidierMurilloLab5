#pragma once
#include <string>
using std::string;
#include <iostream>
using std::istream;
using std::ostream;
class Matriz{
  friend ostream& operator<<(ostream&, const Matriz&); 
  friend istream& operator>>(istream&, Matriz&);
  private:
    int Filas;
    int Columnas;
  	public:
    int** M;  
  	Matriz(int Fila,int Columna);
    void Llenar();
    string toString()const;
    const Matriz operator-=(Matriz& r);
	  const Matriz operator()(Matriz& r);
  	const Matriz operator+(Matriz& r);
	  const Matriz operator-(Matriz& r);
	  const Matriz operator*(Matriz& r);
	 	int** getM();
};

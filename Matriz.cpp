#include "Matriz.h"
#include <string>
using std::string;
#include <sstream>
using std::stringstream;
#include <cmath>
using std::abs;
#include <iostream>
using std::istream;
using std::ostream;
using namespace std;

ostream& operator<<(ostream& out, const Matriz& r){
    out << r.toString();
    return out;
}
istream& operator>>(istream& in, Matriz& r){
   /* int num,den;
    in>>num;
    in>>den;
    Racional temp(num,den);
    r = temp;*/
    return in;
    
}

string Matriz::toString()const{
    stringstream ss;
    for (int i = 0; i < Filas; ++i)
    {
        for (int j = 0; j < Columnas; ++j)
        {
            ss<<M[i][j];
        }
    }
    return ss.str();
}

const Matriz Matriz::operator+(Matriz& r){
    Matriz MatrizSecundaria(Filas,Columnas);
    for (int i = 0; i <Filas ; ++i)
    {   
        for (int j = 0; j <Columnas ; ++j)
        {
            MatrizSecundaria.M[i][j]=M[i][j]+r.M[i][j];
        }
    }
    for (int i = 0; i < Filas; ++i)
    {
        for (int j = 0; j < Columnas; ++j)
        {
            cout<<MatrizSecundaria.M[i][j];
        }
        cout<<"\n";
    }

    return MatrizSecundaria;
}

const Matriz& Matriz::operator-=(Matriz& r){
    return *this;
}
const Matriz Matriz::operator-(Matriz& r){
    return *this;
}
const Matriz Matriz::operator*(Matriz& r){
    return *this;
}
const Matriz& Matriz::operator()(Matriz& r){
    return *this;
}

Matriz::Matriz(int Fila,int Columna){
    this->Filas=Fila;
    this->Columnas=Columna;
    int* M[Filas];
    for (int i = 0; i < Filas; ++i)
        {
            M[i]=new int[Columnas];
        }
    this->M=M;    
}

void  Matriz::Llenar(){
    for (int i = 0; i < Filas; ++i)
    {
        for (int j = 0; j <Columnas; ++j)
        {
            M[i][j]=1;
        }
    }
}

/*const Matriz& Matriz::operator==(Matriz& r){
    return *this;
}
const Matriz& Matriz::operator!=(Matriz& r){
    Racional retval(this->numerador*r.denominador,this->denominador*r.numerador);
    return retval;
}*/

int** Matriz::getM(){
    return M;
}

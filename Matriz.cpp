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
        ss<<"\n";
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
    return MatrizSecundaria;
}

const Matriz Matriz::operator-=(Matriz& r){
    Matriz MatrizSecundaria(Filas,Columnas);
    for (int i = 0; i <Filas ; ++i)
    {   
        for (int j = 0; j <Columnas ; ++j)
        {
            MatrizSecundaria.M[i][j]=M[i][j]*-1;
        }
    }
    return MatrizSecundaria;
}
const Matriz Matriz::operator-(Matriz& r){
    Matriz MatrizSecundaria(Filas,Columnas);
    for (int i = 0; i <Filas ; ++i)
    {   
        for (int j = 0; j <Columnas ; ++j)
        {
            MatrizSecundaria.M[i][j]=M[i][j]-r.M[i][j];
        }
    }
    return MatrizSecundaria;
}
const Matriz Matriz::operator*(Matriz& r){
    Matriz MatrizSecundaria(Filas,Columnas);
    int Filas2=Filas,Columnas2=r.Columnas;
    for (int i=0;i<Filas;i++)

    {for (int j=0;j<Columnas2;j++)

       { MatrizSecundaria.M[i][j]=0;

         for (int k=0;k<Columnas;k++)

          {
            MatrizSecundaria.M[i][j]=MatrizSecundaria.M[i][j]+M[i][k]*r.M[k][j];
          }

       }

    }
    return MatrizSecundaria;

}

const Matriz Matriz::operator()(){
    int Cont2=0;
    Matriz MatrizSecundaria(Filas,Columnas);
    for (int i = 0; i < Filas; ++i)
    {
        int Cont=0;
        for (int j = 0; j < Columnas; ++j)
        {
            MatrizSecundaria.M[i][j]=M[Cont][Cont2];
            Cont++;
        }
        Cont2++;
    }
    return MatrizSecundaria;
}
const Matriz Matriz::operator=(Matriz& r){
    bool Validacion=true;
    for (int i = 0; i < Filas; ++i)
    {
        for (int j = 0; j < Columnas; ++j)
        {
            if(M[i][j]!=r.M[i][j]){
                Validacion=true;
            }else{
                Validacion=false;
                cout<<"La matrices son diferentes";
                break;
            }

        }
    }
    cout<<"La matrices son iguales";
}

const Matriz Matriz::operator!=(Matriz& r){
    bool Validacion=true;
    for (int i = 0; i < Filas; ++i)
    {
        for (int j = 0; j < Columnas; ++j)
        {
            if(M[i][j]==r.M[i][j]){
                Validacion=true;
            }else{
                Validacion=false;
                cout<<"La matrices son diferentes";
                break;
            }

        }
    }
    cout<<"La matrices son iguales";
}

const Matriz Matriz::operator/(Matriz& r){
    
    

}


Matriz::Matriz(int Fila,int Columna){
    this->Filas=Fila;
    this->Columnas=Columna;
    int** M=new int*[Filas];
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
            cout<<"Ingrese el numero fila:"<<i<<"columa:"<<j<<"\n";
            cin>>M[i][j];
            //cout<<M[i][j];
        }
        //cout<<"\n";
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

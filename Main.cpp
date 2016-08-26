# include "Matriz.h"

# include <string>
using std::string;

# include <iostream>
using namespace std;

# include <vector>
using std::vector;

# include <sstream>
using std::stringstream;

int menu();
void ImprimirMatriz(int,int,int**);
int main(int argc, char const *argv[]){
 int Opcion=0;
 vector<Matriz> Lista;
 vector<Matriz> Resultados;
 do
 {
 	Opcion=menu();
 	if (Opcion==1)
 	{
 		int Filas=0,Columnas=0,Filas2=0,Columnas2;
		cout<<"Ingrese las filas que tendra la primera matriz:";
		cin>>Filas;
		cout<<"Ingrese las columnas que tendra la primera matriz:";
		cin>>Columnas;
		Matriz P(Filas,Columnas);
		P.Llenar();
		Lista.push_back(P);
 	}
 	if (Opcion==2)
 	{	
 		Resultados.push_back(Lista.at(0)+Lista.at(1));
 		cout<<"Resultado:";
 		cout<<Resultados.at(0);
 	}
 	if (Opcion==3)
 	{
 		Resultados.push_back(Lista.at(1)-=Lista.at(1));
 		cout<<"Resultado:";
 		cout<<Resultados.at(0);
 	}
 	if (Opcion==4)
 	{
 		Resultados.push_back(Lista.at(0)-Lista.at(1));
 		cout<<"Resultado:";
 		cout<<Resultados.at(0);
 	}
 	if (Opcion==5)
 	{
 		Resultados.push_back(Lista.at(0)*Lista.at(1));
 		cout<<"Resultado:";
 		cout<<Resultados.at(0);
 	}
 	if (Opcion==6)
 	{
	 	Resultados.push_back(Lista.at(0)());
 		cout<<"Resultado:";
 		cout<<Resultados.at(0);
 	}
 	if (Opcion==7)
 	{
 		Lista.at(0)=Lista.at(1);
 	}
 	if (Opcion==8)
 	{
 		Lista.at(0)!=Lista.at(1);
 	}
 	if (Opcion==9)
 	{
 		++Lista.at(0);
 	}
 } while (Opcion!=10);
}

int menu(){
	int seleccion=0;
	while(seleccion <1 || seleccion >9){
		cout<<"1) Crear una matriz "<<endl;
		cout<<"2) Suma "<<endl;
		cout<<"3) Matriz Negativa "<<endl;
		cout<<"4) Resta "<<endl;
		cout<<"5) Multiplicacion "<<endl;
		cout<<"6) Transpuesta "<<endl;
		cout<<"7) Comparar "<<endl;
		cout<<"8) Diferencia "<<endl;
		cout<<"9) Determinante "<<endl;
		cout<<"10) Salir"<<endl;
		cin>>seleccion;
	}
	return seleccion;

}
void ImprimirMatriz(int Filas,int Columnas,int** Matriz){
	for (int i = 0; i < Filas; ++i)
	{
		for (int j = 0; j < Columnas; ++j)
		{
			cout<<"| "<<Matriz[i][j]<<" |";
		}
			cout<<"\n";
	}
}
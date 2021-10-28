#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
/**
	Array bidimensionales
**/
int main(){

	int fila=0;
	int columna=0;
	
	cout << "Entre el nuemro filas ";
	cin >> fila;
	cout << "Entre el numero de columnas ";
	cin >> columna;
	
	int datos[fila][columna];

	//Asignamos datos a los elementos de la matriz		
	for(int i=0 ; i < fila ;i++){
		for(int j=0; j < columna ;j++){
			datos[i][j] = 10 + rand() % (99 - 10+1);
		}
	}
	//Mostrando los datos asignaso a las matriz 
	for(int i=0 ; i < fila ; i++){
		for(int j=0; j < columna ; j++){
			cout << datos[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Muestar la matriz por columnas " << endl;
	//Muestra la matriz por columnas
	for(int i=0 ; i < columna; i++){
		for(int j=0; j < fila ; j++){
			cout << datos[j][i] << " ";
		}
		cout << endl;
	}
	//Suma todos los elementos de la matriz
	cout << endl;
	cout << "Suma los elemetos de la matriz" << endl;
	int suma=0;
	for(int i=0;i < fila ; i++){
		for(int j=0; j < columna ; j++){
			suma += datos[i][j];
		}
	}		
	cout << "La suma de los elemetos es: " << suma << endl;
	//Buscar el numero mayor en la matriz
	cout << endl;
	cout << "Busca y Muestra el elemento mayor en la matriz " << endl;
	
	int mayor=0;
	for(int i=0; i < fila ; i++){
		for(int j=0 ; j < columna ; j++){
			if(datos[i][j] > mayor){
				mayor = datos[i][j];
			}			
		}
	} 
	
	cout << "El Elemento Mayor es " << mayor <<endl;
	
	cout << endl;
	cout << "La suma de los elementos por fila: " << suma << endl;
	//Suma los elemetos por fila
	cout << endl;
	int sumaTotal=0;
	suma=0;
	for(int i=0; i < fila ; i++){
		for(int j=0 ; j < columna ; j++){
			suma += datos[i][j];				
		}
		cout << "La suma de la fila " << (i+1) << " Es " << suma << endl;
		sumaTotal += suma;
		suma=0;
	}
	cout << "La suma total es " << sumaTotal << endl;
		
	return 0;
}





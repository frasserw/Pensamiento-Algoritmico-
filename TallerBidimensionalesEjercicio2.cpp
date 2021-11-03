#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;


int main(){
	int fila;
	int columna;
	
	cout << "Entrar el numero de filas ";
	cin >> fila;
	cout << "Entrar el numero de columnas ";
	cin >> columna;
	//Declara la matriz
	int matriz[fila][columna];
	//Asigna datos a la mtriz
	for(int i=0 ; i < fila ;i++){
		for(int j=0; j < columna ;j++){
			matriz[i][j] = 1 + rand() % (99 - 1+1);
		}
	}
	//Muestra por consola la matriz
	for(int i=0 ; i < fila ;i++){
		for(int j=0; j < columna ;j++){
			cout << matriz[i][j] << " " ;
		}
		cout << "\n";
	}
	int suma=0;
	for(int i=0 ; i < fila ;i++){
		for(int j=0; j < columna ;j++){
			suma += matriz[i][j] ;
		}
		cout << "El promedio es de la grupo " << (i+1) << suma/columna << endl;
		suma=0;
	}
	
	
	
	//Solicita el numero columna a sumar
	int nColunna1;
	int nColunna2;
	cout << "Primera Columna a sumar ";
	cin >> nColunna1;
	cout << "Segunda Columna a sumar ";
	cin >> nColunna2;
	
	
	
	cout << "Muestra la suma de las columnas" << endl;
	for(int i=0 ; i < fila ;i++){
		cout << matriz[i][nColunna1-1] + matriz[i][nColunna2-1]<<endl;
	}
	
	return 0;
	
	
}

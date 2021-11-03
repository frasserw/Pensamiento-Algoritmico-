#include <iostream>
using namespace std;
/**
	Programa lee una matriz de 3 filas por 3 columnas y crea otra matriz de tres filas por tres columnas con la transpuesta
	Autor: 
**/
int main(){
	int matriz[3][3];
	int transp[3][3];
	//Asigna los datios a los elementos de la matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Entre un dato entero ";
			cin >> matriz[i][j];
	
		}
	}
    //Muestra la matriz por consola
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j]<<" ";
		}
		cout << "\n";
	}
	//Calcula la matriz transpuesta
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			transp[j][i];
	
		}
	}
	//Imprime la matriz transpuesta por columna
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j] << endl;
		}
		cout << "\n";
	}
	return 0;
}

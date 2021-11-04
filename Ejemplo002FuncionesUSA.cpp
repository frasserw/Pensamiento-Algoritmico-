#include <iostream>
using namespace std;
/**
	Programa lee una matriz de 3 filas por 3 columnas y crea otra matriz de tres filas por tres columnas con la transpuesta
	Autor: 
**/
//Se delaran los arreglos matriz y transp como variables gibales
int matriz[3][3];
int transp[3][3];
//Declaración de funciones
void asignardatos();
void muestra();
void transpuesta();
void muestraTranspuesta();

int main(){
	bool salir=true;
	int opc;
	while(salir){
		opc=0;
		cout << "\n MENU DE OPCIONES \n";
		cout << "\n PROGRAMA MATRIZ TRANSPUESTA \n";
		cout << "\n 1. Asignar datos \n";
		cout << "\n 2. Muestra matriz \n";
		cout << "\n 3. Hallar Transpuesta \n";
		cout << "\n 4. Mostrar Transpuesta \n";
		cout << "\n 5. Salir \n";
		cout << "\n Su Opción ";
		cin >> opc;
		switch(opc){
			case 1:asignardatos();break;
			case 2:muestra();break;
			case 3:transpuesta();break;
			case 4:muestraTranspuesta();break;
			case 5:salir=false;
			default: cout << "\n Error opción no implementada \n"; 
		}
	}
	
	return 0;
}
//Defincion de la función
//Asigna los datos a los elementos de la matriz
void asignardatos(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Entre un dato entero para Fila " << (i+1) << " Columna " << (j+1) << " ";
			cin >> matriz[i][j];
	
		}
	}
}
//Definición de la función
////Muestra la matriz por consola
void muestra(){
	cout << "\n Esta es la matriz generada \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j]<<" ";
		}
		cout << "\n";
	}
}
//Defición de la función Calcula e imprime la matriz transpuesta
void transpuesta(){
		cout << "\n calculado la matriz transpuesta \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			transp[j][i];
	
		}
	}
}
//Defición de la función muestra la matriz transpuesta
void muestraTranspuesta(){
	cout << "\n Esta es la matriz transpuesta \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}	
}


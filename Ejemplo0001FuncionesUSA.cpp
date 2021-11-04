#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
/**
	Programa: Dado un arreglo lineal de N n�meros, con n�meros pares e impares, sumar separadamente los n�meros pares 
	y los n�meros impares, indicar cuantos son pares y cuantos impares.
	Autor: Curso de Pensamiento Algoritmico Universidad Sergio Arboleda. primer semestre.

**/

void poblar(int array[],int elemento);
void mostrar(int array[], int elemento);
int sumaPares(int array[],int elemento);
int sumaImPares(int array[],int elemento);


//Funci�n main o funci�n principal
int main(){
	int elemento;
	cout << "Cuantos elementos en el array ";
	cin >> elemento;
	int array[elemento]; 
	
	poblar(array,elemento);
	mostrar(array,elemento);
	
	int sumaP = sumaPares(array,elemento);
	
	cout << "La cantidad de numero pares en el array es " << sumaP << endl;
	
	int sumaI = sumaImPares(array,elemento);
	
	cout << "La cantidad de numero Impares en el array es " << sumaI << endl;

	return 0;

	
}
//Definic�n de la funci�n para poblara el array
void poblar(int array[],int elemento){
	cout << "Esta poblando el array " << endl;
	for(int i=0;i<elemento;i++){
		array[i] = 1 + rand() % (99 - 1);
	}
}
//Definici�n de la funci�n para mosttar los datos contenidos en el array
void mostrar(int array[], int elemento){
	cout << "Este es el array poblado" <<endl;
	for(int i=0;i<elemento;i++){
		cout << array[i] << " ";
	}
}
//Definici�nde la funci�n para sumar y contar las datos pares
//Muestra la suma y retorna numeros de datos sumados
int sumaPares(int array[],int elemento){
	int sumaPares=0;
	int contarPares=0;
	for(int i=0;i<elemento;i++){
		if((array[i] % 2) == 0){
			sumaPares += array[i];	
			contarPares++;
		}
	}
	cout << "\n La suma de los Pares es " << sumaPares << endl;
	return contarPares;	
}
//Definici�nde la funci�n para sumar y contar las datos impares
//Muestra la suma y retorna numeros de datos sumados
int sumaImPares(int array[],int elemento){
	int sumaImp = 0;
	int contarImPares = 0;
	for(int i=0;i<elemento;i++){
		if((array[i] % 2) != 0){
			sumaImp += array[i];	
			contarImPares++;
		}
	}
	cout << "\n La suma de los Impares es " << sumaImp << endl;
	return contarImPares;	
}




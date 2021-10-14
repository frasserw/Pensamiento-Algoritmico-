/**
	Programa:
	Autor: Los estudiantes del grupo PA R01 de USA
**/

#include <iostream>
using namespace std;

int main(){
	int sumaPares=0;
    int sumaImpares=0;
    int contarPares=0;
    int contarImpares=0;
	int elemento;
	
	cout << "ingrese el numero de datos del arreglo" << endl;
	cin >> elemento;
 
    int numeros[elemento];
	//Poblamos el arreglos con numeros enteros pares e inpares
	for(int i=0 ; i< elemento;i++){
		numeros[i] = i;
	}
	//Muestar los datos contenidos en lso elementos del arreglo
	for(int i=0;i<elemento;i++){
		cout << numeros[i] << " ";
	}
	//Evalua si el numero contenido en el elemento del arareglos es para o impar
	//Acumula los pares o impares y cunta los pares e impares
	for(int i=0; i <elemento;i++){
		if(numeros[i] % 2 == 0){
			sumaPares += numeros[i];
			contarPares++;
		}else{
			sumaImpares += numeros[i];
			contarImpares++;
		}
	}
	//Muestar los datos de los acumuladores y contadores en la consola
	cout << endl;
	cout << "La suma de los pares es " << sumaPares << endl;
	cout << "Cuantos pares son " << contarPares << endl;
	cout << "La suma de los impares es " << sumaImpares << endl;
	cout << "Cuantos impares son " << contarImpares << endl;	
		
	return 0;
}

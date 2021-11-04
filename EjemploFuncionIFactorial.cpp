#include <iostream>
using namespace std;
/**
	Programa: Funci�n para calcular el fatorial de un numero
**/

//Declaraci�n de la funci�n 
int factorial(int numero);

int main(){
	int numero;
	cout << "Entre un numero entero ";
	cin >> numero;
	cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
	
}
//Definici�n de la funci�n para encontarr el factorial de un numero
int factorial(int numero){
	int factorial=1;
	for(int i=1; i <= numero ; i++){
		factorial = i * factorial;
	}
	return factorial;
}

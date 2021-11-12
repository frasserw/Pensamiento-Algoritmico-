#include <iostream>
using namespace std;

//Declaración de la función recursiva
int factorial(int numero);

int main(){
	int numero;
	cout << "Entre un numero entero ";
	cin >> numero;
	//cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
	
	int a = factorial(numero);
	cout << "El factorial de " << numero << " es " << a << endl;
	
	
}
//Definición de la función recursiva
int factorial(int numero){
	if(numero == 0){
		return 1;
	}else{
		return numero * factorial(numero-1);
	}
	
}

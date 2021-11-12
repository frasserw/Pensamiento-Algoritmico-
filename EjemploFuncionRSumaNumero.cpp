#include <iostream>
using namespace std;

//Declaración de la función recursiva
int sumaNumero(int numero);
int sumaNumeroI(int numero);

int main(){
	int numero;
	cout << "Entre un numero entero ";
	cin >> numero;
	cout << "La suma de los de los primeros " << numero << " Numeros  es: " << sumaNumero(numero) << endl;
	
	//cout << "La suma de los de los primeros " << numero << " Numeros  es: " << sumaNumeroI(numero) << endl;
	
	return 0;	
}
//Definición de la función recursiva
int sumaNumero(int numero){
	if(numero == 0){
		return 0;
	}else{
		return numero + sumaNumero(numero - 1);
	}
	
}
//Función iterativa para sumar n numeros
int sumaNumeroI(int numero){
	int suma=0;
	for(int i=1;i <= numero;i++){
		cout << i;
		suma += i;
	}
	return suma;
}

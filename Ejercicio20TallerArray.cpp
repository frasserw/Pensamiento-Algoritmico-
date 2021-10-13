#include <iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;

/**
	Programa que crea una arreglos de salrios con nueros aleatorios.
	1. Calcula el valor promedio de los sdalrios.
	2. Muestra por consola la lista de salrios mayores y iguales al promedio 


**/
int main(){
	srand(time(NULL));
	int nTrabajadores=0;
	cout << "Entrar el numero de trabajadores ";
	cin >> nTrabajadores;
	int salario[nTrabajadores];

	//Poblamos el arreglos salrio con datos aleatorios
	for(int i = 0; i < nTrabajadores; i++){
	
		salario[i] = (980525 + rand() % (2000000-980525));
	}
	cout << "\n";
	//Muestra la lista de salarios
	for(int i = 0; i < nTrabajadores; i++){
		cout << "Salario " << (i+1) << " " << salario[i] << "\n";
	}
	
	//Calcular el promedio del salario
	int suma=0;
	int promedio;
	for(int i = 0; i < nTrabajadores; i++){
		suma += salario[i];
	}
	cout << "\n";
	promedio = suma / nTrabajadores;
	cout << "El promedio de salario es " << promedio << endl;
	//Muestra cuales salarios son mayores o iguales al promedio
	
	cout << "Lista de salarios mayores al promedio " << promedio << endl;
	for(int i = 0; i < nTrabajadores; i++){
		if(salario[i] >= promedio){
			cout << "El Salario " << (i+1) << " " << salario[i] << endl;
		}
	}
	
	return 0;
	
	
}

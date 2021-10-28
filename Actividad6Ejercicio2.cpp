#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
/**
	Dado un array de N elementos que contiene números enteros positivos y negativos.
	Calcule independientemente, la suma de los positivos y negativos.  
**/
int main(){
	srand(time(NULL));
	int elemento;
	bool salir=true;
	
	while(salir){
		cout << "Cuantos elementos en el array ";
		cin >> elemento;
		//Declaramos un arreglos de n elementos
		int numeros[elemento];
		//Poblamos el arreglo con nuemros aleatorios
		for(int i=0; i < elemento ;i++){
			numeros[i] = -10 + rand() % (99 - 10);
			
			
		}
		//Muestra por consola los datos contendios en el arreglo
		cout << "Lista de Numeros en el arreglo "<<endl;
		for(int i=0;i<elemento;i++){
			cout << numeros[i] << " ";	
		}
		//
		int sumaPositivo=0;
		int sumaNegativo=0;
		for(int i=0;i<elemento;i++){
			if(numeros[i] > 0){
				sumaPositivo += numeros[i];
			}else{
				sumaNegativo += numeros[i];
			}
		}
		cout << "La suma de los numeros positivos es " << sumaPositivo << endl;
		cout << "La suma de los numeros negativos es " << sumaNegativo << endl;
		char letra;
		cout << "\n Desea mostrar mas numeros S pata si  o N para no ";
		cin >> letra;
		if(letra =='N' || letra == 'n'){
			salir = false;
		}		
	}
	return 0;
	 
}

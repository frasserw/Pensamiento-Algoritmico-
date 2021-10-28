#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
/**
	Crear un programa y declarar un array de números enteros de tamaño pasado por le teclado, 
	el array contendrá números aleatorios entre 1 y 300.
	El programa debe buscar aquellos números que terminen en un digito que se indica por el teclado 
	(controlar que el número que se introduce es correcto), estos números deben ser guardados en otro array.
	Luego el arreglo se debe mostrar en pantalla.
	Ejemplo, en un array de 10 elementos e indicamos mostrar los números terminados en 5, se puede editar 155, 25

**/
int main(){
	srand(time(NULL));
	int elemento;
	cout << "Cuantos elementos en el array ";
	cin >> elemento;
	//DEclaramos un arreglos de n elementos
	int numeros[elemento];
	//Declaramos el arreglos para asignar los 
	int salida[elemento];
	//Poblamos el arreglo con nuemros aleatorios
	for(int i=0; i < elemento ;i++){
		numeros[i] = 10 + rand() % (99 - 10+1);
	}
	//Muestra por consola los datos contendios en el arreglo
	cout << "Lista de Numeros en el arreglo "<<endl;
	for(int i=0;i<elemento;i++){
		cout << numeros[i] << " ";	
	}
	int digito;
	bool salir=true;
	char letra;
	int k;
	while(salir){
		k=0;
		cout << "\n Cual es digito en que desea que terminen los numeros ";
		cin >> digito;
		//Busca los numeros terminados en un dato ingresado por el teclado y los guara en el arreglo de salida.
		for(int i=0; i<elemento; i++){
			if(numeros[i] % 10 == digito){
				salida[k] = numeros[i];
				k++;
			}
		}
		//Muestar los numeros terminados en un dato ingresado por el teclado 
		cout << "\n Los numeros terminados en " << digito << " Son: "<<endl;
		for(int i=0; i<k;i++){
			cout << salida[i] << " ";
		}
		
		cout << "\n Desea mostrar mas numeros S pata si  o N para no ";
		cin >> letra;
		if(letra =='N' || letra == 'n'){
			salir = false;
		}
		
		
	}	
	
	return 0;
}

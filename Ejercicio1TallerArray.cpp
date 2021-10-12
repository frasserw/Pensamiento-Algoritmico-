#include <iostream>
using namespace std;

int main(){
	int numeros[150];
	int pares[75];
	int multiplos[75];
	int dato=100;
	//Poblamos el arreglo asignando datos de tipo numerico
	for(int i = 0 ; i < 149 ; i++){
		numeros[i] = dato;
		dato++;
	}
	//Muestar el contendio de los elementos del arreglo numeros en la consola
	cout << "Datos en arreglo numeros "<<endl;
	for(int i = 0 ; i < 149 ; i++){
		cout << numeros[i] << " ";
    }  	
	//Evalua si el último digito del numero asignado al elemento del arraeglo numeros es par
	//Si es para asignada el numero al elemento del arreglo pares
	int resto=0;
	int j=0;
	for(int i=0 ; i < 149; i++){
		resto=numeros[i] % 10;
		if(resto % 2 ==0){
			pares[j] = numeros[i];
			j++;
		}
	}
	cout << "\n";
	//Muestar el contendio de los elementos del arreglo pares en la consola
	cout << "Datos en arreglo pares "<<endl;
	for(int i = 0 ; i < 75 ; i++){
		cout << pares[i] << " ";
    }
	j=0;	
	//Evalua si el numero asignado al elemento del arreglo numeros es multiplo de 3 y 5
	for(int i=0 ; i < 149 ;i++){
		if((numeros[i] % 3 == 0 ) && (numeros[i] % 5 == 0)){
			multiplos[j] = numeros[i];
			j++;
		}	
	}
	cout << "\n";
	//Muestar el contendio de los elementos del arreglo multiplos en la consola
	cout << "Datos en arreglo multiplos "<<endl;
	for(int i = 0 ; i < j ; i++){
	   cout << multiplos[i] << " ";
    }
    return 0;	
}



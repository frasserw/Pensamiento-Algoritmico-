#include <string.h>
#include <iostream>
 
using namespace std;

int main(){
	int cedula=0;
	int resto;
	//Declara un arareglo de caracteres y asigna las letras
	char letra[]="TRWAGMYFPDXBNJZSQVHLCKE";
	//Muestra el contenido d elos elementos del arreglo letra en la consola
	for(int i=0;i<23;i++){
		   cout << letra[i]<<" ";
	}
	cout << "\n";
	//Lee el numero de la cedula y lo asigna a la variable cedula
	cout << "Entre el nuemro de la cedula ";
	cin >> cedula;
	//Halla el resido de dividir la variable cedula entre 23
	resto = cedula % 23;
	//Evalua si el numero de la posición en el arraeglo es igual al valor contenido en la variable resto.
	//Si son iguales muestra por consola la cedula y la letra  
	cout << "\n";
	for(int i = 0 ; i < 23 ; i++){
		if(i == resto){
			
			cout << "Cedula " << cedula << "Letra " << letra[i] << endl;
			break;
		}
	}
	//Muestar porla consola la cedula y la letra corresdpdiente a la posición de la variable resto
	cout << "\n";
	cout << "Cedula " << cedula << "Letra " << letra[resto] << endl;
	
	
}

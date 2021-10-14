/**
	Programa:
	Autor: Los estudiantes del grupo PA R=! de USA
**/

#include <iostream>
using namespace std;

int elemento;
int numero = 0;
int multiplo;
int residuo;

int main (){	
	cout << "ingrese el numero de datos del arreglo" << endl;
	cin >> elemento;
	
	int multiplo[elemento];
	
	cout << "\n cual es el multiplo por el que desea evaluar el array: " << endl;
	cin >> numero;
	int j = numero;
	
	//
	int i=0;
	while(i < elemento){
	
	    residuo = j % numero;
		if(residuo == 0){
			multiplo[i] = j;
			i++;	
        }
		j++;			
	}
	
	for(int i=0 ; i < elemento;i++){
		cout << multiplo[i] << " ";
	}
	
	j = numero;
	for(int i=0;i < elemento ; i++){
		residuo = j % numero;
		if(residuo == 0){
			multiplo[i] = j;
				
        }else{
         i--;
		}
		j++;	
		
	}
	cout << endl;
	//
	for(int i=0 ; i < elemento;i++){
		cout << multiplo[i] << " ";
	}
			
	return 0;		
}


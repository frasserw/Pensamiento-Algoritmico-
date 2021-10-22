#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int elemento;
	cout << "Entre el numero de elementos ";
	cin >> elemento;
	
	//Declaramos el arreglos DATOS
	int DATOS[elemento];
	int SALIDA[elemento];
	int FRECUENCIA[elemento];
	
	//Asignamos datos a los elementos del arreglo
	for(int i=0;i<elemento;i++){
		DATOS[i] = 1 + rand() % (9 - 1+1);
	}
	
	//Mostramos por consola los datos contenidos en el arreglos DATOS
	cout << "Datos en el arreglo Inicial" << endl;
	for(int i=0;i<elemento;i++){
		cout << DATOS[i] << " ";
	}	
	//Actualizmos la frecuecnia el arerglos de salida
	int frecuencia=1;
	int k=0;
	bool encuentra=false;
	for(int i=0;i<elemento;i++){
		for(int q=0;q<elemento;q++){
			if(DATOS[i]==SALIDA[q]){
		    	encuentra=true;
				break;
	 		}
	 	}
		if(!encuentra){
			for(int j=i+1; j < elemento; j++){
				if(DATOS[i] == DATOS[j]){
					frecuencia++;
				}
			}	
			SALIDA[k]=DATOS[i];
			FRECUENCIA[k] = frecuencia;
			cout << "la frecuencia del dato " << DATOS[i] << " Es: " << frecuencia << endl;
			k++;	
		}else{
			encuentra=false;
		}	 
		frecuencia=1;	
	}
	//Mostramos por pantall el numero y la frecuencia.
	for(int i=0; i< k;i++){
		
		cout << SALIDA[i] << " " << FRECUENCIA[i] << endl;
	}
	
	return 0;
	
	
}

#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;

int main(){
	srand(time(NULL));
	string conductor[5];
	int kilometros[35];
	int totalKilometros[5];
	
	//Asignamos datos al arreglos conductores
	int j=0;
	int l=7;
	for(int i=0;i<5;i++){
		cout << "Nombre del conductor ";
		cin >> conductor[i];
		for(j; j < l; j++){
			kilometros[j] = 100 + rand() % (999 - 100+1);
		}
		l+=7;
	}
	//Mostramoslos datos contendios en los dos arreglos
	j=0;
	l=7;
	cout << "datos de los conductores " << endl;
	for(int i=0;i<5;i++){
		cout << "Conductor " << conductor[i] << " Kilometros recorridos por dia " ;
		for(j; j < l; j++){
			cout << kilometros[j] << " ";
		}
		l+=7;
		cout << endl;
	}
	//
	j=0;
	l=7;
	
	int sumaKilometro=0;
	for(int k=0;k<5;k++){
		for(j; j < l; j++){
		   sumaKilometro += kilometros[j];
	    }
		totalKilometros[k] = sumaKilometro;
		sumaKilometro=0;
		l+=7;
	}
	//
	cout << endl;
	cout << "Total de Kilometros recorridos en una semana " << endl;
	for(int j=0; j<5; j++){
		cout << "Conductor " << conductor[j] << " Km " << totalKilometros[j] <<endl;
    }
	
	return 0;
	
}

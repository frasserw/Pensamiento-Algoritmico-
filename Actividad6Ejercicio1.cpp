#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int elemento;
	cout << "Cuantos elementos en el array ";
	cin >> elemento;
	//DEclaramos un arreglos de n elementos
	int numeros[elemento];
	//Poblamos el arreglo con nuemros aleatorios
	for(int i=0; i < elemento ;i++){
		numeros[i] = 10 + rand() % (99 - 10+1);
	}
	//Muestra por consola los datos contendios en el arreglo
	cout << "Lista de Numeros en el arraeglo "<<endl;
	for(int i=0;i<elemento;i++){
		cout << numeros[i] << " ";	
	}
	int digito;
	bool salir=true;
	char letra;
	while(salir){
		cout << "\n Cual es digito en que desea que terminen los numeros ";
		cin >> digito;
		for(int i=0; i<elemento; i++){
			if(numeros[i] %10 == digito){
			cout << numeros[i] << endl;
			}
		}
		cout << "\n Desea mostrar mas numeros S pata si  o N para no ";
		cin >> letra;
		if(letra =='N' || letra == 'n'){
			salir = false;
		}
		
		
	}	
	
	return 0;
}

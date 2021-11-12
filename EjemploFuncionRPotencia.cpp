#include <iostream>
using namespace std;

//Declaración de la función recursiva
int potenciaN(int base,int potencia);

int main(){
	int numero;
	int potencia;
	cout << "Entre un numero entyero positivo ";
	cin >> numero;
	cout << "Entre la potencia ";
	cin >> potencia;
	cout << "El numero " << numero << " Elebado a  " << potencia << " Resultado es: " << potenciaN(numero,potencia) << endl;
	
	return 0;	
}

int potenciaN(int numero,int potencia){
	if(potencia == 0){
		return 1;
	}else{
		return numero * potenciaN(numero,potencia-1);
	}
}


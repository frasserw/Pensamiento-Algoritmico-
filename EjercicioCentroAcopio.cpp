/**
	Programa: permite calcular el valor de la fresa de una cantidad de kilos de fresa segun el tipo y tamaño
	Auto:William frasser Acevedo
	Fecha:26/08/2021
*/
#include <iostream>
using namespace std;

int main(){
	//variables
	int valorKilo = 2000;
	char tipo;
	int tamanio;
	int totalKilo;
	int valorPagado;;
	
	cout << "***************************************" << endl; 
	cout << "*     CENTRO DE ACOPIO SOLO FRESA     *" << endl;
	cout << "* Valor Kilo de Presas para hoy $2000 *" <<endl;
	cout << "***************************************" << endl; 
	cout << "Ingrese EL Tipo de Fresa [A o B] ";
	cin >> tipo;
	cout << "Ingrese Tamano de Fresa [1 o 2] ";
	cin >> tamanio;
	cout << "Ingrese el Total de Kilos ";
	cin >> totalKilo;
	
	
	if(tipo == 'A'){
		if(tamanio == 1){
			valorPagado = (totalKilo * (valorKilo + 200));
		}else if(tamanio== 2){
			valorPagado = (totalKilo * (valorKilo + 300));
		}else {
			cout << "Error Tipo de Fresa no es correcto" << endl;
			return 0;
		}
	}else if(tipo == 'B'){
			if(tamanio == 1){
				valorPagado = (totalKilo * (valorKilo -300));
			}else if(tamanio == 2){
				valorPagado = (totalKilo * (valorKilo -500));
			}else{
				cout << "Error Tipo de Fresa no es correcto" << endl;
				return 0;
			}
	}else{
		cout << "Error Tipo de Fresa no existe " << endl;
		return 0;
	}
		
	cout << "El total a Pagar por " << totalKilo << " Kilos de Fresa es. " << valorPagado << endl;
	return 0;
}

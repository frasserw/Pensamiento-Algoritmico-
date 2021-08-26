/*
	Programa para calcular el salario de un trabajador
	Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este se le asigna 
	como un porcentaje de su salario mensual que depende de su antigüedad en la empresa de acuerdo con la siguiente tabla:
		Tiempo                            Utilidad
		1 año o más y menos de 2 años    7% del salario
		2 años o más y menos de 5 años  10% del salario
		5 años o más y menos de 10 años 15% del salari
	
	Auto:William Frasser Acevedo
	Fecha:26/08/2021
*/	
#include <iostream>
using namespace std;		

int main(){
	int salario;
	int antiguedad;
	int utilidad;
	
	cout << "*****************************************" << endl; 
	cout << "* PORCENTAJE DE UTILIDAD POR ANTIGUEDAD *" << endl;
	cout << "*****************************************" << endl; 
	cout << "Ingrese el Salario Actual ";
	cin >> salario;
	
	cout << "Ingrese la Antiguedad en la Empresa en Años ";
	cin >> antiguedad;
	
	if(antiguedad <= 0){
		cout << "La Antigudad deber ser 1 o mas años" << endl;
		return 0;
	}
	if(antiguedad >= 1 && antiguedad < 2){
		utilidad = (salario * 7/100);
	}else if(antiguedad >= 2 && antiguedad < 5){
		utilidad = (salario * 10/100);
	}else if(antiguedad >= 5 && antiguedad < 10){
		utilidad = (salario * 15/100);
	}else if(antiguedad >= 10){
		utilidad = (salario * 20/100);
	}	
	cout <<"Utilidad por " << antiguedad << " Años de antiguedad " << utilidad << endl;	
			
	return 0;
}

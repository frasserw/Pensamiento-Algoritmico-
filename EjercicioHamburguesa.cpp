#include  <iostream>
using namespace std;
/**
	Programa: Permite calcular el valor de una cantidad de Haburguesas y sumar un regargo si se paga con tarjeta.
	Autor: William Frasser Acevdo.
	Fecha: 2021-08-26
**/

int main() {
   	const int sencilla=20000;
   	const int doble=25000;
   	const int triple=28000;
   	int tipo;         
   	int cantidad;
   	float valorPago=0; 
	char fPago;
	
	cout << "****************************" << endl;
   	cout << "*  El Naufrago Satisfecho  *" <<endl;
   	cout << "*  Venta de Hamburguesas   *" << endl;
   	cout << "****************************" << endl;
   	cout << "* 1. para sencilla $20.000 *" <<endl;            
	cout << "* 2. para doble    $25.000 *" <<endl;
    cout << "* 3  para triple   $28.000 *" <<endl;
    cout << "****************************" << endl;
    cout << "Seleccione el tipo de Hamburguesa ";
	cin >> tipo; 
	if(tipo < 1 || tipo > 3){
		cout << "Ese tipo de Hamburguesa no se encuantra en la Carta " << endl;
		return 0;
	}
	cout << "Ingrese la cantidad de Hamburguesas: ";
	cin >> cantidad;
	if(cantidad <= 0){
		cout << "La cantidad de Hamburguesas debe ser mayor o igual a 1 " << endl;
		return 0;
	}	    
	cout << "Ingrese la Forma de Pago: E. efectivo T. tarjeta ";		
	cin >> fPago;	
	if(fPago == 'E' || fPago == 'T'){
		if(tipo == 1){
			valorPago = cantidad * sencilla;
		}else if(tipo == 2){
			valorPago = cantidad * doble;
		}else if(tipo == 3){
			valorPago = cantidad * triple;
		}	 
		if(fPago == 'T'){
			valorPago = valorPago + (valorPago * 5/100);
		}	
		cout << "Valor a pagar por " << cantidad << " Hamburguesas es " << valorPago << endl;
	}else{
		cout << "Error Forma de pago no existe " << endl;
	}
	return 0;
}

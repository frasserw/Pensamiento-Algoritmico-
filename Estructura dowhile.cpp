#include <iostream>
using namespace std;
/**
	programa:
	Autor:
	versión:

**/
int main(){
	int valorVenta=0;
	int totalVentas=0;
	
	do{
		cout << "Ingrese el valor de venta 0 para salir ";
		cin >> valorVenta;
		totalVentas = totalVentas + valorVenta;
		
	}while(valorVenta > 0);
	
	cout << "El Valor total a pagar es: " << totalVentas << endl;
	
	return 0;
}


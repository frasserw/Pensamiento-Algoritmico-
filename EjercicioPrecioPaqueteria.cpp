/*
	Programa para calcular el precio del gramo del paquete dependiendo la zona del envio
	Una compa��a de paqueter�a internacional tiene servicio en algunos pa�ses de Am�rica del Norte, 
	Am�rica Central, Am�rica del Sur, Europa y Asia. El costo por el servicio de paqueter�a se basa 
	en el peso del paquete y la zona a la que va dirigido. Lo anterior se muestra en la siguiente tabla:
	
	Zona    Ubicaci�n 			Costo/gramo
	  1     Am�rica del Norte 		$150
	  2  	Am�rica Central 		$120
	  3 	Am�rica del Sur 		$130
	  4 	Europa 					$230
	  5 	Asia 					$260
	Costos por el servicio de paqueter�a con base en el peso y la zona. 
	
	Parte de su pol�tica implica que los paquetes con un peso superior a 5 kg no son transportados, 
	esto por cuestiones de log�stica y de seguridad. Realice un algoritmo e implem�ntelo en lenguaje 
	de programaci�n C++ tal que ingresando la zona y el peso en gramos del paquete determine el 
	costo de envi�.
		
	Auto: William frasser Acevedo
	Fecha:26/08/2021
*/
#include <iostream>
using namespace std;

int main(){
	int zonaEnvio;
	int pesoGramo;
	int valorEnvio;
		
	cout << "**************************************************" << endl;	
	cout << "* Empresa de Paqueteria y Envios Internacionales *" <<endl;
	cout << "**************************************************" << endl;	
	cout << "*           zona 1 America del Norte $150        *" <<endl;
	cout << "*           zona 2 America Central   $120        *" <<endl;
	cout << "*           zona 3 America del Sur   $130        *" <<endl;
	cout << "*           zona 4 Europa            $230        *" <<endl;
	cout << "*           zona 5 Asia              $260        *" <<endl;
	cout << "**************************************************" << endl;	
	cout <<"Ingrese la zona de envio 1 al 5 " <<endl;
	cin >> zonaEnvio;
	cout <<"ingrese el peso del paquete en Gramos " <<endl;
	cin >> pesoGramo;
	
	if(pesoGramo > 5){
		cout << "Error paquetes superiores a 5 gramos no se envian " << endl;
		return 0;
	}
			
	switch(zonaEnvio){
		case 1:
			valorEnvio = pesoGramo * 150;break;
		case 2: 
			valorEnvio = pesoGramo * 120;break;
		case 3:
			valorEnvio = pesoGramo * 130;break;
		case 4:
			valorEnvio = pesoGramo * 230;break;
		case 5:
			valorEnvio = pesoGramo * 260;break;
		default:
			cout << "Error Digite una Zona entre [1 y 5] " << endl;	
	}		
	
	cout << "El Valor a Pagar por el Envio es: "<< valorEnvio<<endl; 
	return 0;
}

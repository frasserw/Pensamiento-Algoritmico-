#include <iostream>
using namespace std;
/**
	Programa para mostrar por consolos los n�mero por debajo de 100 que son multiplos de 3 y de 5.
	
**/
int main(){
	//Declaraci�n de variable
	int resultado = 0;
	
	for (int i = 0; i < 100; i++){
		
		if(i % 5 == 0 || i % 3 == 0){
			
			cout << " Valores: " << i << endl;
			//Acumula los multiplos
			resultado += i;
		}
		
	}
	//Muestra el acumulado de los n�meros multiplos de 3 y 5 
	cout << "Valor total: " << resultado << endl;
	
	return 0;
}

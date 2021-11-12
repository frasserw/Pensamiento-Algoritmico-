#include <iostream>
using namespace std;
/**
	Programa:Calcuo de serie de Fibonacci
	En matem�tica, la sucesi�n o serie de Fibonacci es la siguiente sucesi�n infinita de n�meros naturales:
    0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597
    La sucesi�n comienza con los n�meros 0 y 1;2? a partir de estos, cada t�rmino es la suma de los dos anteriores,
	es la relaci�n de recurrencia que la define.
**/

//Declaraci�n de la funci�n iterativa
long fibonacciI(int termino);

//Declaraci�n de la funci�n recursiva
long fibonacciR(int numero);

int main(){
	int termino;
	long valorTermino=0;
	cout << "C�lculo de la Serie de Fibonacci " << endl;
	cout << "Entre el termino de la serie de Fibonacci que desea hallar ";
	cin >> termino;
	//Muestra la serie y calcula el valor del termino
	cout << "\n Funcion Recursiva \n ";
	for(int i=0; i<termino; i++){
		if(fibonacciR(i) != 0){
			cout<< fibonacciR(i)<<" ";
			valorTermino += fibonacciR(i);       
    	}		
	}
	cout << "Valor del Termino " << valorTermino << endl;	
	//Llama a la funi�n iterativa
	cout << "\n Funci�n Iterativa \n";
	long valorT = fibonacciI(termino);
	cout << "Valor del Termino " << valorT << endl;
	system("pause");
    return 0;
}
//Se define la funci�n recursiva para hallar el termino de la sucesi�n de Fibonacci
long fibonacciR(int numero){
	//caso Base
	if(numero == 0 || numero == 1){
		return 1;
	}else{
		return fibonacciR(numero-1) + fibonacciR(numero-2);
	}	
	
}
//Se define la funci�n Iterativa para hallar el termino de la sucesi�n de Fibonacci
long fibonacciI(int termino){
	long valorTermino=0;
	long siguiente = 0;
	long actual = 1;
	long auxiliar = 0;
	int valortermino = 0;
	
	for(long i=0 ; i <= termino; i++){
		auxiliar = actual;
		actual = siguiente;
		siguiente += auxiliar;
		cout << actual << " ";
		valorTermino += actual;
	} 
	return valorTermino;
}






#include <iostream>
using namespace std;
/**
	Programa:Calcuo de serie de Fibonacci
	En matemática, la sucesión o serie de Fibonacci es la siguiente sucesión infinita de números naturales:
    0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597
    La sucesión comienza con los números 0 y 1;2? a partir de estos, cada término es la suma de los dos anteriores,
	es la relación de recurrencia que la define.
**/

//Declaración de la función iterativa
long fibonacciI(int termino);

//Declaración de la función recursiva
long fibonacciR(int numero);

int main(){
	int termino;
	long valorTermino=0;
	cout << "Cálculo de la Serie de Fibonacci " << endl;
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
	//Llama a la funión iterativa
	cout << "\n Función Iterativa \n";
	long valorT = fibonacciI(termino);
	cout << "Valor del Termino " << valorT << endl;
	system("pause");
    return 0;
}
//Se define la función recursiva para hallar el termino de la sucesión de Fibonacci
long fibonacciR(int numero){
	//caso Base
	if(numero == 0 || numero == 1){
		return 1;
	}else{
		return fibonacciR(numero-1) + fibonacciR(numero-2);
	}	
	
}
//Se define la función Iterativa para hallar el termino de la sucesión de Fibonacci
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






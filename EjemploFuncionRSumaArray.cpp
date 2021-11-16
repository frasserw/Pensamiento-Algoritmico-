#include <iostream>
using namespace std;
/**
	Programa: Función recursiva para sumar los elementos de dos arreglos 

**/
//Se declara la función recursiva
int sumaArray(int array1[], int array2[], int elemento, int pos);

int main(){
	//Declara dos arreglos y asigana los datos a las posiciones
	int arreglo1[]={10,30,50,70,90};
	int arreglo2[]={20,40,60,80,100};
	//Llama a la fucnión sumaArray enviando como parametros arreglo1, arreglo2 y la posición inicial para inciar la suma
	//y el numero de elemtnos de cada arreglo
	int pos=0;
	int elemento=5;
	int resultado = sumaArray(arreglo1,arreglo2,elemento,pos);
	cout << "La suma de los elementos de arreglos es " << resultado <<endl;
	
}
//Definición de la función recursiva para sumar dos arreglos
//Retorna la suma de la posiciones del arreglo
int sumaArray(int array1[], int array2[], int elemento, int pos) {
        if (pos == elemento - 1 && pos == elemento - 1) {
            return array1[pos] + array2[pos];
        }
        return array1[pos] + array2[pos] + sumaArray(array1, array2, elemento,(pos + 1));
}

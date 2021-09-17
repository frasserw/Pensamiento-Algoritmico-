#include<iostream>
using namespace std;
/**
	Programa: Para calcular de lanota del segundo corte para N estudiantes
	Autor: William Frasser Acevedo
	Fecha: 2021-09-10
**/
int main(){
	string nombre;
	float parcial;
	float taller1;
	float taller2;
	float notaCorte;
	float sumaNotas;
	int nEstudiantes;
	int contador = 0;
	
	cout << "PROGRAMA PARA CALCULAR LA NOTA DEL PRIMER CORTE" << endl;
	cout << "Cual es el numero de estduiantes ";
	cin >> nEstudiantes;
	
	do{
		cout << "PROGRAMA PARA CALCULAR LA NOTA DEL SEGUNDO CORTE" << endl;
	    cout << "Cual es su Nombre ";
	    cin >> nombre;
		cout << "Cual es la nota del parcial ";
		cin >> parcial;
		cout << "Cual es la nota del taller 1 ";
		cin >> taller1;
		cout << "Cual es la nota del taller 2 ";
		cin >> taller2;		
		//Expresión aritmetica
		notaCorte = ((parcial * 5/100) + (taller1 * 10/100) + (taller2 *15/100)) * 100/30;
		//Acumulador
		sumaNotas = sumaNotas + notaCorte;
		//Contador
		//contador = contador + 1 ;
		contador++;
		cout << nombre << " La nota del segundo corte es: " << notaCorte << endl;
		
		
	}while(contador < nEstudiantes); 
	
	cout << "Promedio del curso es: " << (sumaNotas / contador) << endl;
	return 0;

}

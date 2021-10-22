#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
/**

**/
int main(){
	srand(time(NULL));
	int numero;
	int femenino;
	int masculino;
	cout << "\n Cuantos estudiantes en el curso ";
	cin >> numero;
	
	char genero[numero];
	int puntaje[numero];
	
	int p=0;
	for(int i=0; i<numero; i++){
		p = 10 + rand() % (99 - 10+1);
		if(p %2 == 0){
			genero[i] = 'F';
			puntaje[i] = p;
			femenino++;
		}else{
			genero[i] = 'M';
			puntaje[i] = p;
			masculino++;
		}
	}
	//
	for(int i=0;i<numero;i++){
		cout << "Genero " << genero[i] << " Puntaje " << puntaje[i] << endl;
	}	
	//Cuantos estudiantes de género femenino y el porcentaje aprobaron la evaluación con un puntaje mayor o igual 90.
	int cuantos=0;
	double porcentaje; 
	for(int i=0; i<numero; i++){
		if(genero[i] == 'F' && puntaje[i] >= 90){
			cuantos++;
		}
	}
	cout << "\n Estudiante de genero Femenino con puntaje >= 90 \n" ;
	porcentaje = (cuantos*100)/numero;
	cout << "Total " << cuantos << " Porcentaje " << porcentaje << " %" << endl; 
	
	//Porcentaje de hombres que aprobaron con un puntaje mayor o igual a 80 y menor o igual a 100.
	cuantos=0;
	for(int i=0; i<numero; i++){
		if(genero[i] == 'M' && (puntaje[i] >= 80 && puntaje[i] <=100)){
			cuantos++;
		}
	}
	porcentaje = (cuantos*100)/100;
	cout << "\n Estudiante de genero Masculino con puntaje >= 80 y <=100 \n" ;
	cout << "Total " << cuantos << " Porcentaje " << porcentaje << " %" << endl; 
	//Guarde los datos de los estudiantes que obtuvieron un puntaje inferior a 50 en dos arreglos
	//y muestre por consola la siguiente información primero las de género femenino y luego los de género masculino, 
	//además se requiere el porcentaje y número total por cada género.
	int gFemenino[femenino];
    int gMasculino[masculino];
    //la variable j y k son contadores para contar los estduiantes que cumplan con la condición
    int j=0;
    int k=0;
	for(int i=0;i<numero;i++){
		if(genero[i] == 'F' && puntaje[i] < 50){
			gFemenino[j]=puntaje[i];
			j++;
		}else if(genero[i] == 'M' && puntaje[i] < 50){
				gMasculino[k]=puntaje[i];
				k++;
		}
    }
    //
    cout << "\n Estudiantes de Genero Femenino con puntaje < 50"<<endl;
    for(int i=0;i<j;i++){
    	cout << gFemenino[i] <<" ";
	}
	porcentaje = (j*100) /numero;
	cout << " Total " << j << " Porcentaje " << porcentaje << " %" << endl;
	//
	cout << "\n Estudiantes de Genero Masculino con puntaje < 50"<<endl;
    for(int i=0;i<k;i++){
    	cout << gMasculino[i] <<" ";
	}
	porcentaje = (k*100) /numero;
	cout << " Total " << k << " Porcentaje " << porcentaje << " %" << endl;


	return 0;


}

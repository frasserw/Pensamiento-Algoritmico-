#include "iostream"
using namespace std;

/**
	Programa: Programa que mostar la cantidad de días que tiene un mes en un año especifico
	          Comprueba si el año es bisiesto.
	Autor: William Frasser Acevedo
	Fecha: 2021-09-10
**/

int main(){
  int mes, dias=0;
  int anio;
  cout << "Ques anio desea mostrar ";
  cin >> anio;
  cout << "Que mes desea mostrar: ";
  cin >> mes;
  //Asina los días segun el mes
  if (mes == 1|| mes == 3 || mes == 5 ||
    mes == 7 || mes == 8 || mes == 10 ||
    mes == 12 ){
    dias = 31;
  }else if(mes == 2){
  	    //Comprueba si el año es bisiesto
  	      if((anio % 4) == 0 && (anio % 100) != 0 || (anio % 400) == 0) 
             dias = 29;
          else
	         dias = 28;
  }else {
  	dias = 30;
  }
  //muestra los dias del mes      
  for (int x=1; x <= dias; x++){
    cout << x << " ";
    if (x % 7 == 0){
        cout << endl;
    }
  }	
	
}

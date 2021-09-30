#include <iostream>
using namespace std;

int main() {
  //Declaro un arreglo de 5 elementos
  int elemento;
  cout << "Entre el numero de elementos del arreglo ";
  cin >> elemento;
  
  int numero[elemento];
   
  
  //Asinamos datos a cada uno de los elementos de la arreglo
  for(int i = 0 ; i < elemento; i++){
    //Asignar un elemto
    cout << "Entrar un dato enetero ";
	cin >> numero[i];
  }
  //Recorre el arraglo y muestra en la consola los datos asignados 
  //a cada elemento del arreglo
  for(int i=0; i < elemento; i++){
    cout << numero[i] << " ";
  }
  //Cuantos datos son mayores a 50
  int contarDatos=0;
  for(int i=0; i < elemento; i++){
  	if(numero[i] >= 50){
  		contarDatos++;	
	}
  	
  }
  cout << "Cuantos son mayores o iguale a 50 "<< contarDatos << endl;
  // 
  cout << "Numeros pares e impares " << endl;   
  for(int i=0; i < elemento;i++){
  	if((numero[i] % 2) == 0){
  		cout << numero[i] << " Es par" << endl;	
    }else{
    	cout << numero[i] << " Es impar" << endl;	
	}
  	
  }
  
  
 

  return 0;
}










#include <iostream>
using namespace std;

int main(){
    int elemento;
   cout << "Entre el numero de elementos del arreglo ";
   cin >> elemento;
   
   int numero[elemento];
   string nombre[elemento];
	//  
   for(int i=0;i<elemento;i++){
   		cout << "Entrar un numero entero ";
   		cin >> numero[i];
   		cout << "Entrar el nombre del estudiante " ;
   		cin >> nombre[i];
   }
   
   //
   for(int i=0; i < elemento;i++){
   	cout << numero[i] << " ";
	cout << nombre[i] << " ";      	
   }
   cout << "\n"
   //Busca ubn dato entero en el arrrglo numero y muestra por consola el nombre que le correspode en la posición
   //en el arreglo nombre
   
   int dato;
   cout << "Entre el numero a buscar ";
   cin >> dato;
    
   for(int i=0 ; i < elemento;i++){
   		if(numero[i] == dato){
   			cout << "El nombre es " << nombre[i] << endl;
			break;		
    	} 
   	
   }
   //
   int suma=0;
   for(int i=0; i < elemento;i++){
   		suma += numero[i];
   }
   
   cout << "Promedio " << suma/elemento <<endl;
   
   return 0;
   
}





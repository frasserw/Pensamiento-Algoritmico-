#include "iostream"
using namespace std;

/**
	Programa: Ejemplo menu de opciones 
	Autor: William Frasser Acevedo
	Fecha: 2021-09-10
**/
int main(){
    int opcion = -1;
    //Mostramos el menú hasta que la opción sea cero
    while(opcion != 0){
        cout << "MENU DE OPCIONES \n";
		cout << "Ingrese 1 para mostrar mensaje \n";
        cout << "Ingrese 2 para saludar \n";
        cout << "Ingrese 0 para salir \n";
        cout << "Ingrese una opción ";
        cin >> opcion;
        switch(opcion){
        	case 1:
        		cout << "Esta es una prueba de un menu de opciones \n";
				break;
			case 2:
				cout << " Hola bienvenido al menu de opciones! \n ";
			 	
		}
        
        
    }
    system("PAUSE");
    return 0;
}

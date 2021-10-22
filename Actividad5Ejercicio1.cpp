#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
/**


**/
int main(){
    srand(time(NULL));
    int elemento;
    cout << "Entre el numero de elementos ";
    cin >> elemento;
    
    //Declaramos el arreglos DATOS
    int DATOS[elemento];
    
    //Asignamos datos a los elementos del arreglo
    for(int i=0;i<elemento;i++){
        DATOS[i] = 10 + rand() % (99 - 10+1);
    }
    
    //Mostramos por consola los datos contenidos en el arreglos DATOS
    cout << "Datos en el arreglo Inicial" << endl;
    for(int i=0;i<elemento;i++){
        cout << DATOS[i] << " ";
    }
    
    //Declaramos un nuevo arreglo
    cout << endl;
	int SALIDA[elemento/2];
    int j = elemento-1;
    int k = 0;
    //Asignamos la suam de los datos de los elementos extremos de arreglos original
    for(int i=0;i<elemento/2;i++){
        int a = DATOS[i]+DATOS[j];
        cout << a << endl;
        SALIDA[k] = DATOS[i]+DATOS[j];
        j--;
        k++;
    }
    //Mostramos por la consola el arreglo de salida
    cout << endl;
    cout << "Datos en el arreglo Final" << endl;
    for(int i=0;i<k;i++){
        cout << SALIDA[i] << " ";
    }
    
    return 0;
}

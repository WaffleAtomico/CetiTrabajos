//
//  main.cpp
//  Paso_parametros
//
//  Created by Oscar Alejandro Penilla Skakievich on 01/09/21.
//

#include <iostream>
using namespace std;

int suma(int A, int B);
void resta(int arreglo[]);

int main() {
    int arreglo[5] = {1, 2, 3, 4, 5}, resultado;
    //*Diferencia a visual*
    // Aparece en orden aqui, pero en visual pone primero A= y B=
    resultado =  suma(arreglo[0], arreglo[1]);
    cout << "La primera posicion del arreglo mas la segunda es: " << resultado << endl;
    
    resta (arreglo);
    cout << "//////////////\n";
    for (int i=0; i<5; i++){
        arreglo[i]++;
        cout << "i= " << arreglo[i] << endl;
    }
    
}


int suma(int A, int B){
    A++;
    B++;
    cout << "A = " << A <<endl;
    cout << "B = " << A <<endl;
    
    return A + B;
}


    
void resta(int arreglo[])
{
    for (int i=0; i<5; i++){
        arreglo[i]++;
        //cout << "i= " << arreglo[i] << endl;
    }
}

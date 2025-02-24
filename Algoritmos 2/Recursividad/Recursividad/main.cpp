//
//  main.cpp
//  Recursividad
//
//  Created by Oscar Alejandro Penilla Skakievich on 03/09/21.
//

#include <iostream>
using namespace std;

int suma (int cant);

int main(void) {
    int cantidad;
    
    cout << "Ingresa la cantidad de numeros a sumar: -- ";
    cin >> cantidad; // 3
    
    //suma (cantidad);
    cout << "El resultado es la suma es " << suma (cantidad) <<endl;
}


int suma (int cant){
    
    if (cant == 0){ //No es igual a 0 hasta el final
        return 0;       //Caso base: El caso que termina la recursividad
    }else{              //El if es el caso base
    
    return cant + suma(cant-1);
        
    //1vez   3 + ( 3º = 6 <-- Resultado final )
    //2again 2 +( 1! = 3º )
    //3again 1 + ( $0 = 1! ) ^
    //4again 0 <-- $ Este lo pasa a la vez anterior
    }
    
}

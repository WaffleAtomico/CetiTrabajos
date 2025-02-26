//
//  main.cpp
//  PRACTICA 4
//
//  Created by Oscar Alejandro Penilla Skakievich on 26/03/21.
//

#include <iostream>

using namespace std;

int main () {
    
    int nf, con, ast, ni;
    char ca, rep;
    bool resp = true;
    
    while (resp == true){
        cout << "Ingresa el caracter\n";
        cin >> ca;
        cout << "Inserta el numero de caracteres al principio (max 19 / min 1) \n";
        cout << "Recuerda que este numero debe de ser menor al de filas\n";
        cin >> ni;
        cout << "Inserta el numero de caracteres por fila (max 20 / min 1) \n";
        cin >> nf;
            
    
        
        if (nf>=20 || nf == 0 || ni > nf){
            cout << "Ingresa un numero dentro del rango\n";
            resp = false;
            }
        
    else{
        //Veces que se repite
            for (con=ni; con<=nf; con++) {
                // inicia en con=1,  mientras 'con' sea menor o igual a 10,  1+1
                // Cuando sea mayor o igual se va a detener
                                
            //Caracter
            for (ast=1; con>=ast; ast++)
                //inicia en 1 ,  mientras 'con' sea mayor o igual a ast , 1+1
                    cout << ca;
                    cout << "\n";
                //ast = variable independiente
                
                                     
            }
        
    }
        cout << "Deseas reptir el proceso?s/n \n";
        cin >> rep;
        (rep == 'n') ? resp = false : resp = true;
    }
}

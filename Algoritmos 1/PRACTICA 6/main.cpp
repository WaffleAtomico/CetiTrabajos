//
//  main.cpp
//  PRACTICA 6
//
//  Created by Oscar Alejandro Penilla Skakievich on 01/05/21.
//

#include <iostream>
#include <time.h>
using namespace std;

int main(){
                //añadimos el numero random y declaramos variables
    
    int n, secretoso, cont = 4;
    char y = 's';
    
while (y=='s'){
    y = 's';
    srand(time(NULL));
    secretoso = rand() % 50 + 1;
 
        cout << "Antes que nada, tienes 5 intentos para descubrir el numero \n";
        cout << secretoso;
    while (cont >= 0){
        
        //para cambiar como lo dice, simple orgullo
        if (cont > 1){
            cout << "Te quedan : " << cont+1 << " intentos\n";
        }else{
            cout << "Te queda : " << cont+1 << " intento\n";
        }
        //Preguntamos
        
        cout <<"Ingresa un numero entre el 1 y el 50:  ";
        cin >> n;
                if (n < 0 || n > 50){
                    cout << "Elije un numero valido, acabas de perder un intento\nPor menso\n";
                }
         if (n == secretoso){;
            cout << "Felicidadeees atinaste :D\n";
                break;
         }
         if (n > secretoso){;
                cout << "Te pasaste\n";
         }
         if (n < secretoso){;
            cout << "Te falta todavia\n";
         }
        cont--;
 
    }
    cout << "Quieres repetir el juego?s/n";
    cin >> y;
}
}


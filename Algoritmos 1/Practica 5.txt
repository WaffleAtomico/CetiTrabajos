//
//  main.cpp
//  PRACTICA 5
//
//  Created by Oscar Alejandro Penilla Skakievich on 27/04/21.
//

#include <iostream>
using namespace std;

int main(){
  
        int poi = 0, ranM, ranm;
        int primos = 100, n, d, espri;
        char resp, reberb;
        
        resp = 's';
        
    while (resp == 's') {//ciclo de repeticion

        cout << "Primero antes que nada ocupamos saber unas especificaciones\n";
        cout << "Deseas que tus numeros vayan de...\nAscente (menor a Mayor) -- a \nO descendente (Mayor a menor) -- d ?\n";
        cin >> reberb;
        cout << "Quieres calcular numeros pares o impares?\n1 impar // 2 par\n";
        cin >> poi;
        
        if (poi > 2 || poi <= 0){ //Si no introduce una opcion valida se irá al final
            cout << "Introduce un numero que sea valido\n";
            resp = 'n';
        }
        
        if (poi == 1){              //numeros impares
            cout << "Elije un rango de los numeros \n";
            cout << "Numero maximo --- ";
            cin >> ranM;
            cout << "Numero minimo --- ";
            cin >> ranm;
            if (ranm > ranM){; //verificamos que el rango no es imposible
                resp = 'n';
            }
            if (reberb == 'a'){;
                n = ranm;
                while (primos > 0) { //determinamos si es primo
                    espri = 1;
                    for (d = 2; d < n; ++d) {
                        if (n % d == 0) {
                            espri = 0;
                            break;
                        }
                    }
                  //muestra el numero y aumenta el contador
                    if (espri) {
                        cout << n <<endl;
                        primos--;
                    }
                    n++;
                    if (n >= ranM){;
                        break;
                        
                    }
                }
            }
            else {
                n = ranM;
                while (primos > 0) { //determinamos si es primo
                    espri = 1;
                    for (d = 2; d < n; ++d) {
                        if (n % d == 0) {
                            espri = 0;
                            break;
                        }
                    }
                  //muestra el numero y aumenta el contador
                    if (espri) {
                        cout << n <<endl;
                        primos++;
                    }
                    n--;
                    if (n <= ranm){;
                        break;}
                }
            }
        
        
        }
        if (poi == 2){ //           numeros pares
            
            cout << "Elije un rango de los numeros \n";
            cout << "Si el numero es impar se va a convertir a par para que sea exacto\n";
            cout << "Numero maximo --- ";
            cin >> ranM;
            cout << "Numero minimo --- ";
            cin >> ranm;
            
        if (ranm > ranM){; //verificamos que el rango no es imposible
            resp = 'n'; }
            
            
            if (reberb == 'a'){
            
            if(ranm % 2 != 0){ //cambiamos si es immpar a uno par
                ranm = ranm+1;
              }
            for (int i=ranm; i<=ranM; i+=2){; //aumentamos los numeros dentro del rango
                cout << i <<endl; }
            }
            else {
                if(ranM % 2 != 0){ //cambiamos si es immpar a uno par
                    ranM = ranM+1;
                }
                for (int i=ranM; i>=ranm; i-=2){; //reducimos los numeros dentro del rango
                    cout << i <<endl;
                }
            }
        }
            
    
        cout << "Quieres repetir el programa? s/n \n"; //Preguntamos para repetir
        cin >> resp;
        
        if (resp == 's'){
            resp = 's';
            
        }
        else {
            resp = 'n';
        }
}
}

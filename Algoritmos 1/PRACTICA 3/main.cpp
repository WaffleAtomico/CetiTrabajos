//
//  main.cpp
//  PRACTICA 3
//
//  Created by Oscar Alejandro Penilla Skakievich on 20/03/21.
//

#include <iostream>


using namespace std;

int main() {

    int sw;
    float num;
    bool key;
    char resp;
    
    key = true;
while (key == true) {
    cout << "Aqui puedes cambiar medidas, estas son las opciones\n";
    cout << "1 ----- Pie a metro\n";
    cout << "2 ----- Metro a pie\n";
    cout << "3 ----- Centimetro a pulgada\n";
    cout << "4 ----- Pulgada a centimetro\n";
    cin >>sw;
//if para continuar si el numero es valido, ya se que el mismo swich lo hace, pero me gustó hacerlo desde antes
    if (sw >=5){
        cout << "Elije un numero que si sea valido\n"; key = false;
    }
    else{
    cout << "Escribe el numero de la medida que quieres cambiar\n";
    cin >> num;
    
//Swich
    switch (sw) {
        case 1:
            cout << num * 3.28084<< "metros" << endl;
            break;
        case 2:
            cout << num * 0.3048 << " pies"<< endl;
            break;
        case 3:
            cout << num * 0.393701 << " pulgadas" << endl;
            break;
        case 4:
            cout <<  num * 2.5400013716 << " centimetros" << endl;
            break;
            
        default:
            cout << "Elije una opcion entre las 4 que hay\n";
            break;
    }
        
    }
// secuencia de repeteicion
    cout << "Quieres repetir el programa o calcular otra medida? s/n \n";
    cin >> resp;
    (resp == 'n') ?  key = false : key = true;
}
    
}

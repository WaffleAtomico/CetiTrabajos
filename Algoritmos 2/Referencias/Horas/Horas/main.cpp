//
//  main.cpp
//  Horas
//
//  Created by Oscar Alejandro Penilla Skakievich on 27/08/21.
//

#include <iostream>


using namespace std;
int diferenciaH(int &hora1, int &hora2);
int diferenciaM(int &minu1, int &minu2);

int main() {
    int hor1, hor2, min1, min2;
    cout << "Hola aqui sabras la diferencia de horas\n";
    cout << "Recuerda que estas deben de estar en formato de 24h\n";
    cout << "Primera hora -- ";
        cin >> hor1;
        cout << "Minuto -- ";
        cin >> min1;
    cout << "Segunda hora -- ";
        cin >> hor2;
        cout << "Minuto -- ";
        cin >> min2;
    cout << "\n";
    cout << "La diferencia es -- " << diferenciaH(hor1, hor2) << ":" << diferenciaM(min1, min2) <<" horas \n";
    
}

int diferenciaH(int &hora1, int &hora2){
    int hf;
    if (hora2 >= hora1){
        hf = hora2-hora1;
    }else{
        hf = hora1-hora2;
    }
    return hf;
}
int diferenciaM(int &min1, int &min2){
    int mf;
    if (min2 >= min1){
        mf = min2-min1;
    }else{
        mf = min1-min2;
    }
    return mf;
}

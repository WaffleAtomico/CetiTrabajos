//
//  main.cpp
//  Punteros2
//
//  Created by Oscar Alejandro Penilla Skakievich on 06/10/21.
//

#include <iostream>
using namespace std;

int main() {
    struct fecha {
        int dia;
        int mes;
        int year;
    };
    
    int var, arr[5] = {20, 21, 22, 23, 24 }, *pe;
    var =7;
    pe= arr;
    fecha hoy, semana[5], *pest;
    hoy.dia =6;
    hoy.mes=10;
    hoy.year=2021;
    semana[0].dia = 6;
    semana[1].dia = 7;
    semana[2].dia = 8;
    semana[0].mes = semana[1].mes =semana[2].mes =  10;
    semana[0].year = semana[1].year = semana[2].year = 2021;
    pest = semana;
    
    cout <<"Var= " << var << " esta en "<< &var<<" Y si tamaño es "<< sizeof(var)<<endl;
    for (int i=0; i<=4;i++){
        cout << "arr " << i+1 << " = " << *pe << " esta en " << pe <<endl;
        pe++;
    }
    cout << "El tamaño del arreglo es " << sizeof(arr);
    cout << "\n\n";
    cout << "Dia de hoy = " << hoy.dia <<" esta en " << &hoy.dia<<endl;
    cout << "mes de hoy = " << hoy.mes <<" esta en " << &hoy.mes<<endl;
    cout << "año de hoy = " << hoy.year <<" esta en " << &hoy.year<<endl;
    
    for (int i=0; i<5; i++){
        cout << "Dia "<<i<<" = " << pest->dia << " esta en"<< pest << endl;
        cout << "Mes "<<i<<" = " << pest->mes << " esta en"<< pest << endl;
        cout << "Año "<<i<<" = " << pest->year << " esta en"<< pest << endl;
        pest++;
    }//for
    cout << "El tamaño del arreglo es " << sizeof(semana);
}
//en caracteres se tiene que terminar con el '\0'

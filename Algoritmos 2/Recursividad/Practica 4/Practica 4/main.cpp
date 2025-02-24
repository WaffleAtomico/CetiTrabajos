//
//  main.cpp
//  Practica 4
//
//  Created by Oscar Alejandro Penilla Skakievich on 09/09/21.
//

#include <iostream>
using namespace std;

int division (int cant1, int cant2, int &cont);

int main() {
    int cantidad1;
    int cantidad2, aux;
    int contador=0;
    
    cout << "Ingresa los numeros a dividir:\n";
    cout << "Mayor- ";
    cin >> cantidad1; //9
    cout << "Menor- ";
    cin >> cantidad2; //4
    if (cantidad2 > cantidad1){
        aux=cantidad1;
        cantidad1=cantidad2;
        cantidad2=cantidad1;
    }
    cout << "tus valores son " << cantidad1 << " "<< cantidad2 <<endl;
    division (cantidad1, cantidad2, contador);
    cout << "El numero se puede dividir " << contador <<" veces"<<endl;
}


int division (int cant1, int cant2, int &cont){
    int divi;
    divi = cant1/cant2;
    if (divi <= 0){
        return cont;
    }else{
        cont++;
        cout <<"Ola "<<cont<<endl;
        cant1 = divi;
    return division(cant1, cant2, cont);
    }
    
}//division


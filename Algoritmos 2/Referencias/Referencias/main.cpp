//
//  main.cpp
//  Referencias
//
//  Created by Oscar Alejandro Penilla Skakievich on 27/08/21.

// PASO DE PARAMATEROS POR REFERENCIA

#include <iostream>
using namespace std;

float suma(float &var, float &var2);
float resta(float var, float var2);
float multi(float var, float var2);
float divi(float var, float var2);

int main() {


float n1,n2, resultado;
int sr;

cout << "Hola, puedes hacer tus operaciones basicas:\n";
    cout << "Inserte los numeros que va a usar, independientemente de lo vaya a hacer \n";
    cout << "-";
     cin >> n1;
    cout << "-";
     cin >> n2;
cout << "Elija la operacion que quiera hacer\n";
        cout <<"1-Suma\n";
        cout <<"2-Resta\n";
        cout <<"3-Multiplicación\n";
        cout <<"4-División\n";
    cout << "-";
    cin >> sr;
switch (sr) {
    case 1:
        resultado = suma(n1,n2);
        cout << "n1 vale "<< n1 <<endl ; // Aqui vimos que si cambió la variable
        cout <<"El resultado es "<< resultado <<endl;
        break;
        
    case 2:
        resultado = resta(n1,n2);
        cout << "El resultado es "<<resultado <<endl;
        break;
    case 3:
        resultado = multi(n1,n2);
        cout <<"El resultado es "<< resultado <<endl;
        break;
    case 4:
        //No se le asigna el valor a una variable
        cout <<"El resultado es "<< divi(n1,n2) <<endl; //Esto tambien se puede
        break;
    default:
        cout << "Elija una opcion correcta\n";
        break;
}

cout << "Fin del programa\n";

}

float suma(float &var, float &var2){ // Se agrega un & para hacer la referencia
                                     // Esta va a ocupar el mismo valor que la variable del main
                                     // Solamente es necesario que este aqui
float n3;

cout << "Suma\n";
    var=var+4;
cout << "n1 vale "<< var <<endl ;
    
cout << "n2 vale "<< var2 <<endl ;
n3=var+var2;
return n3;

}

float resta(float var, float var2){

float n3;
    cout << "Resta\n";
    cout << "n1 vale "<< var <<endl ;
    cout << "n2 vale "<< var2 <<endl ;
        n3=var-var2;
return n3;
}

float multi(float var, float var2){
    
    float n3;
    
    cout << "Multiplicación\n";
    cout << "n1 vale "<< var <<endl ;
    cout << "n2 vale "<< var2 <<endl ;
    n3=var*var2;
    return n3;
}

float divi(float var, float var2){
    
    float n3;
    
    cout << "División\n";
    cout << "n1 vale "<< var <<endl ;
    cout << "n2 vale "<< var2 <<endl ;
    n3=var/var2;
    return n3;
}

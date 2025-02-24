//
//  main.cpp
//  Diagnostico
//
//  Created by Oscar Alejandro Penilla Skakievich on 18/08/21.
//

#include <iostream>

using namespace std;

int main() {
    char rep = 's';
while (rep == 's'){;
    
    int v =0, uv, km;
    int arr[2][10];
    
    cout<< "Hola, aqui vamos a calcular tus viajes\n";
    cout << "Antes que nada, puedes solamente guardar 10 viajes, estos si quieres no pueden ser en orden, todo depenede como tu quieras\n";
    cout << "Cuantos viajes quieres ingresar?\n";
    cin >> v;
    
    for (int i = 0; i <= v; i++){
        bool a = true;
        while (a){
            a=false;
            cout << "Ingresa aqui tu numero de viaje:";
            cin >> arr[0][i];
            if (arr[0][i]>v){
                cout << "Este numero de viaje es mayor al numero que ingresaste";
                a=true;
            }
            uv=i;
        }
        cout << "Ingresa aqui la distancia recorrida en km:";
        cin >> arr[1][i];
        km += arr[1][i];
    }
    cout << endl;
    cout << "Perfecto, ahora te daré tus datos ingresados\n";
    cout << "Viajes realizados: " << v<<endl;
    cout << "Ultimo viaje realizado: " << arr[0][v] << endl ;
    cout << "Total de kilometros: " << km <<endl ;
    cout << "Promedio de kilometros: "<< km/v <<endl ;
    
    
    
    cout << "Quieres elegir otra opcion(s) o quieres salir del programa(n)? s/n --- ";
          cin >> rep;
          
          if (rep == 's'){
              rep = 's';
              
          }
          else {
              rep = 'n';
          }
    }
}

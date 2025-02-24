//Nombre : Mario Brandon Muro Ramos     Registro: 20300683     Grupo: 3°C1
#include <iostream>
using namespace std;

void Valores(int arr[], int num);
void Verificar(int arr[], int num, int& a);
int Buscar_min(int a, int& min);
int Buscar_max(int a, int& max);

int main()
{
    int arr[10], numar, a, b, c = 0, d = 0,y,z;

    do {
        a = 0;
        cout << "¿Cuantos datos va ingresar ? (maximo 10) (minimo 2) " << endl;
        cin >> numar;


        if (numar > 10 || numar < 2) {
            cout << "Ingreso un numero de datos no valido" << endl << endl;
            a = 1;
        }


    } while (a == 1);

    do {
    	b=0;

        Valores(arr, numar);

        Verificar(arr, numar, b);

    } while (b == 1);


    
    for (int x = 0; x < numar; x++) {

       y = Buscar_max(arr[x], d);
    }
    
    c = arr[numar - 1];
    
     for (int x = 0; x < numar; x++) {

      z = Buscar_min(arr[x], c);
   
    }
    
       arr[numar - 1]=y;
	   arr[0]=z; 
    
    cout << "El menor valor es : " << arr[0] << endl;
    cout << "El mayor valor es : " << arr[numar - 1] << endl;

    return 0;

}

void Valores(int arr[], int num) {

    cout << "Ingrese los valores : " << endl;

    for (int i = 0; i < num; i++) {
        cout << "Numero " << i + 1 << " :  ";
        cin >> arr[i];
    }

    cout << endl;
}

void Verificar(int arr[], int num, int& a) {
   
    for (int i = 0; i < num; i++) {
        if (arr[i] < 0 || arr[i] > 50 && a==0) {
            a = 1;

            cout << "Ingreso un valor en un rango no apto" << endl;
            cout << "El rango de valores va del 0-50 " << endl;
            cout << "Vuelva a intentar" << endl << endl;
        }
    }
}

int Buscar_min(int a, int& min) {

    if (min > a) {
        min = a;
    }
    return min;
}

int Buscar_max(int a, int& max) {
    if (a > max) {
        max = a;
    }
    return max;
}

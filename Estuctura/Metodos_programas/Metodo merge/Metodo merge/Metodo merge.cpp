// merge.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//merge
//Oscar Alejandro Penilla 20300701

#include <iostream>
using namespace std;

class numeros {
public:
    int cantidad;
    int arreglo[50];
    //constructores y destructures y funciones
    numeros(int, int*);
    ~numeros();
    void merge(int*, int, int, int);
    void merg_recursi(int*, int, int);
};

numeros::numeros(int, int*)
{
    numeros::cantidad = 0;
    numeros::arreglo[50];
}
numeros::~numeros() { }

void numeros::merge(int* mer_arreglo, int mer_ini, int mer_mid, int mer_fin) {

    int i_izq, j_der, k_arrfin;//contadores externos a los for
    int elementosIzq = mer_mid - mer_ini + 1;
    int elementosDer = mer_fin - mer_mid;

    int izquierda[elementosIzq]; //creamos arreglos para cada mitad
    int derecha[elementosDer];

    for (int i = 0; i < elementosIzq; i++) {//lo recorremos y asignamos a nuestro nuevo arreglo
        izquierda[i] = mer_arreglo[mer_ini + i];
    }
    for (int j = 0; j < elementosDer; j++) {//mismo procedimiento
        derecha[j] = mer_arreglo[mer_mid + 1 + j];
    }
    i_izq = 0;//contador para inzquierda
    j_der = 0;//contador para la derecha
    k_arrfin = mer_ini;//k va a ser igual al inicio
    while (i_izq < elementosIzq && j_der < elementosDer) {
        if (izquierda[i_izq] <= derecha[j_der]) {
            mer_arreglo[k_arrfin] = izquierda[i_izq];
            i_izq++;//aqui los usamos para nuestro while
        }
        else {
            mer_arreglo[k_arrfin] = derecha[j_der];
            j_der++;
        }
        k_arrfin++;//aumentamos contador de nuestro arreglo final
    }
    while (j_der < elementosDer) {
        mer_arreglo[k_arrfin] = derecha[j_der];
        j_der++;
        k_arrfin++;
    }
    while (i_izq < elementosIzq) {
        mer_arreglo[k_arrfin] = izquierda[i_izq];
        i_izq++;
        k_arrfin++;
    }
}

void numeros::merg_recursi(int* arreglo, int ini, int fin) {//merg_recursi
    if (ini < fin) {
        int mid = ini + (fin - ini) / 2;
        merg_recursi(arreglo, ini, mid);
        merg_recursi(arreglo, mid + 1, fin);
        merge(arreglo, ini, mid, fin);
    }
}

int main()
{
    int cant = 0;
    int arreglo[50];
    do
    {
        cout << "Cual es la cantidad de digitos que quieres ingresar? Min 1 max 50" << endl;
        cin >> cant;
        if (cant < 1 || cant > 50) {
            cout << "Valor fuera de rango\n";
        }
    } while (cant < 1 || cant > 50);
    cout << "Ingresa los datos: " << endl;
    for (int i = 0; i < cant; i++)
    {
        cin >> arreglo[i];
    }
    numeros ob1(cant, arreglo);
    ob1.merg_recursi(arreglo, 0, cant - 1);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < cant; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
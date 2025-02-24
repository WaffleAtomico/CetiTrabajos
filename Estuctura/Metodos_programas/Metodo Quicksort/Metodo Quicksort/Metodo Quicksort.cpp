// Metodo Quicksort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar Penilla 20300701
// Metodo Quicksort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar Penilla 20300701

#include <iostream>
using namespace std;

class numeros
{
public:
    int cantidad = 0;
    int arreglo[50];

    numeros(int, int*);
    ~numeros();
    void quicksort(int*, int);
};

numeros::numeros(int, int*)
{
    //numeros::iteracion, iteracion; //1
    numeros::cantidad = cantidad;
    numeros::arreglo[50] = arreglo[50];
}
numeros::~numeros() { }

void numeros::quicksort(int* arreglo, int cantidad) {
    int tope, ini, fin, pos;
    int may[25], menor[25];//usando la constante se crean arreglos mayor y menor con la cantidad de numeros que pueden tener
    tope = 0;
    menor[tope] = 0;//menor[0]=0
    may[tope] = cantidad - 1;//may[0]=n(elemtent) menos 1
    while (tope >= 0)//mientras el tope sea mayor o igual a 0
    {//este es el mas importe, egloba a todas las repeticiones
        ini = menor[tope];//inicio igual a menor[0]
        fin = may[tope];//final igual a may[0]
        tope--;//tope disminuye

        int izq, der, aux;//izquierda, derecha auxiliar
        bool b_door;//booleano b_door?
        izq = ini;//izq = inicial
        der = fin;//derecha = fin
        pos = ini;// posterior = inicial
//inicial------final
        b_door = true;//nos ayuda a parar

        while (b_door == true)//algo 
        {//while 1
            while ((arreglo[pos] < arreglo[der]) && (pos != der))//arreglo[inicial=izquierda] menor a arreglo[derecha] &&and posterior no sea igual a derecha
                der--;//derecha se reducira

            if (pos == der)//si posicion es igual a derecha
                b_door = false;//sale si es igual
            else
            {
                aux = arreglo[pos];//auxiliar sera arreglo posicion
                arreglo[pos] = arreglo[der];//arreglo posicion igual a arreglo derecha
                arreglo[der] = aux; //arreglo derecha igual a auxiliar
                pos = der;//psicion igual a derecha pivote
            }//termina el if
            while ((arreglo[pos] > arreglo[izq]) && (pos != izq))//Entramos en otra repeticion, en la cual se va a repetir cada que
                izq++;//izquierda aumenta(Contrario a la derecha)

            if (pos == izq)//si posicion es igual a izquierda sale
                b_door = false;//salimos si ya llegamos a pasar todo el arreglo
            else
            {
                aux = arreglo[pos];//cambios de variable
                arreglo[pos] = arreglo[izq];
                arreglo[izq] = aux;
                pos = izq;
            }
        }
        if (ini <= (pos - 1))//si el incio es menor o igual a la posicion actual menos 1
        {
            tope++;//el tope aumenta para
            menor[tope] = ini;//del menor el topa va a ser el nuevo inicio
            may[tope] = pos - 1;//y del mayor va a ser la posicion menos uno
        }

        if (fin >= (pos + 1))//ahora  el final si es mayor o igual a la posicion a
        {
            tope++;//aumentamos nuestro tope
            menor[tope] = pos + 1;//y de nuestro arreglo del lado menor le damos el valor de la posicion mas uno
            may[tope] = fin;//y asi obtenemosque el mayor y el tope es igual al final
        }
    }
    for (int j = 0; j < cantidad; j++)//mostramos el resultado
    {
        cout << arreglo[j] << " ";
    }
}

int main()
{
    int cant = 0;
    char iteracion = 'S';
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
    ob1.quicksort(arreglo, cant);
}
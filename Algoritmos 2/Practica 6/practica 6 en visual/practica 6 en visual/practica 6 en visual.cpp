﻿//
//  main.cpp
//  PRACTICA 6
//
//  Created by Oscar Alejandro Penilla Skakievich on 01/05/21.
//
/*
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    //añadimos el numero random y declaramos variables

    int n, secretoso, cont = 4;
    char y = 's';

    while (y == 's') {
        y = 's';
        srand(time(NULL));
        secretoso = rand() % 50 + 1;

        cout << "Antes que nada, tienes 5 intentos para descubrir el numero \n";
        cout << secretoso;
        while (cont >= 0) {

            //para cambiar como lo dice, simple orgullo
            if (cont > 1) {
                cout << "Te quedan : " << cont + 1 << " intentos\n";
            }
            else {
                cout << "Te queda : " << cont + 1 << " intento\n";
            }
            //Preguntamos

            cout << "Ingresa un numero entre el 1 y el 50:  ";
            cin >> n;
            if (n < 0 || n > 50) {
                cout << "Elije un numero valido, acabas de perder un intento\nPor menso\n";
            }
            if (n == secretoso) {
                ;
                cout << "Felicidadeees atinaste :D\n";
                break;
            }
            if (n > secretoso) {
                ;
                cout << "Te pasaste\n";
            }
            if (n < secretoso) {
                ;
                cout << "Te falta todavia\n";
            }
            cont--;

        }
        cout << "Quieres repetir el juego?s/n";
        cin >> y;
    }
}
*/

//
//  main.cpp
//  Practica 6
//
//  Created by Oscar Alejandro Penilla Skakievich on 05/10/21.
//

#include <iostream>
using namespace std;
bool existe(int valor, int* array_enteros, int length);

int unicon(int valor1[], int valor2[], int longitud_valor1, int longitud_valor2, int unicon[], int longitud_resultado);

int restacon(int valor1[], int valor2[], int longitud_valor1, int longitud_valor2, int restacon[], int longitud_resultado);

int intercon(int valor1[], int valor2[], int longitud_valor1, int longitud_valor2, int intercon[], int longitud_resultado);

void ordenar(int orden[], int length);

void limpia(int array_enteros[], int length);

int main() {
    int Iprimos[10] = { 2, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int Ipares[10] = { 4, 6, 8, 10, 12, 14, 16, 18, 20, 22 };
    int Iedit[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    int resultado[20] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    //Pruebas de codigo, las pongo por si vuelvo a consultar mi codigo
    //ordenar(Ipares);
    //int length=sizeof(resultado)/sizeof(int);
    /*int Iedit2[10] = {4,3,4,7,90,20,23,55,16,42};
    int length2=sizeof(Iedit2)/sizeof(int);
    int contadorapa=0;

    for (int i=0; i<length2; i++){
        if(!existe(Iedit2[i], resultado, contadorapa)){ // if (!(verdadero) -> falso ) if (falso)
                                                        // "Si esta falso, esta verdadero pq es lo que buscamos"
            resultado[contadorapa++]=Iedit2[i];
        }
    }
    int length3=sizeof(Ipares)/sizeof(int);
    for (int i=0; i<length3; i++){
        if(!existe(Ipares[i], resultado, contadorapa)){
            resultado[contadorapa++]=Ipares[i];
        }
    }



    ordenar(resultado, contadorapa);
    */
    int conju1, conju2;
    int sw1;
    bool bandera = true, bandera2 = true;

    cout << "Hola, te mostramos las sumas de conjuntos\n";
    cout << "Antes que nada, por default tienes estos dos conjuntos\n";
    cout << "Pares:";
    for (int i = 0; i <= 9; i++) {
        cout << Ipares[i];
        cout << ", ";
    }
    cout << "\n";
    cout << "Primos: ";
    for (int i = 0; i <= 9; i++) {
        cout << Iprimos[i];
        cout << ", ";
    }
    cout << "\n";
    int indice = 0;
    limpia(resultado, 20);
    indice = unicon(Ipares, Iprimos, 10, 10, resultado, indice);
    ordenar(resultado, indice);
    cout << "\n";
    //ordenar(resultado);
    cout << "\n";
    cout << "Ahora sabiendo los numeros, ingresa tus valores\n";

    //Ingresar valores y saber si estan repetidos o no
    for (int i = 0; i <= 9; i++) {
        bandera = true;
        while (bandera) {
            cout << i + 1 << ".-";
            cin >> Iedit[i];
            if (i > 0) { //para que no lo haga con el primer numero
                int ii = 0;
                for (int a = 0; a <= 9; a++) { //9 por que son 10 elementos
                    if (Iedit[i] == Iedit[a] && a != i) { // para saber si si pasa o no
                        bandera = true;
                        ii = 1;
                    }//if2
                    if (ii == 1) {
                        bandera = true;
                    }
                    else { //if
                        bandera = false;
                    }//Else
                }//for2
            }
            else {//If1
                bandera = false;
            }//else1
        }//While
    }//For1

    /*cout << "Si corrio :D\n";
    for (int i=0; i<=9; i++){
        cout << Iedit[i];
        cout << ", ";
    }//For2*/

    //ordenar(Iedit); //Para ordenar muuchos arreglos que esto ayudará mucho en el futuro

    cout << "\n";
    cout << "\n";
    while (bandera2) {
        cout << "Ahora que ya tenemos tus numeros podremos comenzar con las opciones\n";
        cout << "1.- Union\n";
        cout << "2.- Resta\n";
        cout << "3.- Intersección\n";
        cin >> sw1;
        switch (sw1) {
        case 1:
            cout << "Elegiste union, cuales dos conjuntos vas a querer ordenar?\n";
            cout << "1.- Pares\n";
            cout << "2.- Primos\n";
            cout << "3.- Los tuyos\n";
            cin >> conju1;
            cin >> conju2;
            if ((conju1 == 1 && conju2 == 2) || (conju1 == 2 && conju2 == 1)) { //primos y pares
                indice = 0;
                limpia(resultado, 20);
                indice = unicon(Ipares, Iprimos, 10, 10, resultado, indice);
                ordenar(resultado, indice);
            }
            if ((conju1 == 2 && conju2 == 3) || (conju1 == 3 && conju2 == 2)) { //Pares y editable
                indice = 0;
                limpia(resultado, 20);
                indice = unicon(Iprimos, Iedit, 10, 10, resultado, indice);
                ordenar(resultado, indice);
            }
            if ((conju1 == 1 && conju2 == 3) || (conju1 == 3 && conju2 == 1)) { //Impares y editable
                indice = 0;
                limpia(resultado, 20);
                indice = unicon(Ipares, Iedit, 10, 10, resultado, indice);
                ordenar(resultado, indice);

            }

            break;
        case 2:
            cout << "Elegiste resta, cuales dos conjuntos vas a querer ordenar?\n";
            cout << "1.- Pares\n";
            cout << "2.- Primos\n";
            cout << "3.- Los tuyos\n";
            cin >> conju1;
            cin >> conju2;
            if ((conju1 == 1 && conju2 == 2) || (conju1 == 2 && conju2 == 1)) { //primos y pares
                cout << "Opcion 1:pares - opcion 2:primos\n";
                indice = 0;
                limpia(resultado, 20);
                indice = restacon(Ipares, Iprimos, 10, 10, resultado, indice);
                ordenar(resultado, indice);
                cout << "\nOpcion 2:primos - opcion 1:pares\n";
                indice = 0;
                limpia(resultado, 20);
                indice = restacon(Iprimos, Ipares, 10, 10, resultado, indice);
                ordenar(resultado, indice);

            }
            if ((conju1 == 2 && conju2 == 3) || (conju1 == 3 && conju2 == 2)) { //Pares y editable
                cout << "Opcion 2:primos - opcion 3:los tuyos\n";
                indice = 0;
                limpia(resultado, 20);
                indice = restacon(Iprimos, Iedit, 10, 10, resultado, indice);
                ordenar(resultado, indice);
                restacon(Iprimos, Iedit, 0, 0, resultado, 0);
                cout << "\nOpcion 3:los tuyos - opcion 2:primos\n";
                indice = 0;
                limpia(resultado, 20);
                indice = restacon(Iedit, Iprimos, 10, 10, resultado, indice);
                ordenar(resultado, indice);
            }
            if ((conju1 == 1 && conju2 == 3) || (conju1 == 3 && conju2 == 1)) { //Impares y editable
                cout << "Opcion 1:pares - opcion 3:los tuyos\n";
                indice = 0;
                limpia(resultado, 20);
                indice = restacon(Ipares, Iedit, 10, 10, resultado, indice);
                ordenar(resultado, indice);
                cout << "\nOpcion 3:los tuyos - opcion 1:pares\n";
                indice = 0;
                limpia(resultado, 20);
                indice = restacon(Iedit, Ipares, 10, 10, resultado, indice);
                ordenar(resultado, indice);
            }

            break;
        case 3:
            cout << "Elegiste intersección, cuales dos conjuntos vas a querer ordenar?\n";
            cout << "1.- Pares\n";
            cout << "2.- Primos\n";
            cout << "3.- Los tuyos\n";
            cin >> conju1;
            cin >> conju2;
            if ((conju1 == 1 && conju2 == 2) || (conju1 == 2 && conju2 == 1)) { //primos y pares
                indice = 0;
                limpia(resultado, 20);
                indice = intercon(Ipares, Iprimos, 10, 10, resultado, indice);
                ordenar(resultado, indice);
            }
            if ((conju1 == 2 && conju2 == 3) || (conju1 == 3 && conju2 == 2)) { //Pares y editable
                indice = 0;
                limpia(resultado, 20);
                indice = intercon(Iprimos, Iedit, 10, 10, resultado, indice);
                ordenar(resultado, indice);
            }
            if ((conju1 == 1 && conju2 == 3) || (conju1 == 3 && conju2 == 1)) { //Impares y editable
                indice = 0;
                limpia(resultado, 20);
                indice = intercon(Ipares, Iedit, 10, 10, resultado, indice);
                ordenar(resultado, indice);

            }

            break;


        default:
            char loop;
            cout << "No elegiste ninguna opcion, quieres repetir la pregunta?s/n \n";
            cin >> loop;
            if (loop == 's') {
                bandera2 = true;
            }
            else {
                bandera2 = false;
            }
            break;
        }//switch
        char auxiliar;
        cout << "\nQuieres volver a calcular los conjuntos?s/n\n";
        cin >> auxiliar;
        if (auxiliar == 's') {
            bandera2 = true;
        }
        else {
            bandera2 = false;
        }
    }//While

    
}// MAIN
bool existe(int valor, int* array_enteros, int length)
{
    bool resultado = false;
    for (int i = 0; i < length; i++) {
        if (array_enteros[i] == valor) {
            resultado = true;
            break;
        }

    }
    return resultado;
}


// Union
int unicon(int valor1[], int valor2[], int longitud_valor1, int longitud_valor2, int unicon[], int longitud_resultado) {
    int* ppa, * ppr;
    int nueva_posicion = longitud_resultado;
    ppa = valor1;
    ppr = valor2;

    //int uni[20];
    //Tenemos dos grupos de numeros de 10 c/u, como en el video, de estar separados, los unimos
    //en otro proceso los vamos a ordenar

    for (int i = 0; i < longitud_valor1; i++) {
        if (!existe(ppa[i], unicon, nueva_posicion)) {
            unicon[nueva_posicion++] = ppa[i];
        }
    }
    for (int i = 0; i < longitud_valor2; i++) {
        if (!existe(ppr[i], unicon, nueva_posicion)) {
            unicon[nueva_posicion++] = ppr[i];
        }
    }

    return nueva_posicion;
}

int restacon(int valor1[], int valor2[], int longitud_valor1, int longitud_valor2, int restacon[], int longitud_resultado) {
    //el primer valor si esta, no lo va a agregar, si no está, lo va a agregar
    //asi que el primer valor que le de, va a ser el valor que va a restar {a,b,c}-{b,c,e} = {a}
    int* Ppa, * Ppr;
    int nueva_posicion = longitud_resultado;
    Ppa = valor1;
    Ppr = valor2;
    //Ahora se tienen que poner los que sean iguales

    for (int i = 0; i < longitud_valor1; i++) {
        if (!existe(Ppa[i], valor2, longitud_valor2)) {
            restacon[nueva_posicion++] = Ppa[i];
        }
    }

    return nueva_posicion;
}//Resta

int intercon(int valor1[], int valor2[], int longitud_valor1, int longitud_valor2, int intercon[], int longitud_resultado) {
    int* ppA, * ppR;
    int nueva_posicion = longitud_resultado;
    ppA = valor1;
    ppR = valor2;
    //Ahora se tienen que poner los que sean iguales

    for (int i = 0; i < longitud_valor1; i++) {
        if (existe(ppA[i], valor2, longitud_valor2)) {
            intercon[nueva_posicion++] = ppA[i];
        }
    }

    return nueva_posicion;
}

// Ordenar arreglos
void ordenar(int* orden, int length) {
    //Creo que haré una burbuja para alinear los valores de orden y que esten bien puestos jsjsjs
    //Como se hacia una burbuja? JAJAJAJ
    int temp;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (orden[j] > orden[j + 1]) { // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                temp = orden[j];
                orden[j] = orden[j + 1];
                orden[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++) {
        cout << orden[i];
        cout << ", ";
    }
}//Orden



void limpia(int array_enteros[], int length) {

    for (int i = 0; i < length; i++) {
        array_enteros[i] = -1;
    }
}//limpia

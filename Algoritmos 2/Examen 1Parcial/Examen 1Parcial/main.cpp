//
//  main.cpp
//  Examen 1Parcial
//
//  Created by Oscar Alejandro Penilla Skakievich on 08/09/21.
//

#include <iostream>
using namespace std;

void arreglo(int arr[]);
void arreglo2(int arr[]);
void semestre(int comarr[]);

int main() {
    int alumnos[1][10];
    //int regis, calif;
    //bool repe;
    //En febrero -- año 0
    //en agosto -- año 3
    cout << "Hola, en este programa vas a poder checar toda la informacion de 10 alumnos\n";
    cout << "Ingresa los registros y calificaciones de tus alumnos\n";
    for (int i=0; 1 >= i; i++){
        if (i==0){
            arreglo(alumnos[i]);
        }else{
            arreglo2(alumnos[i]);
        }
    } //for i
    //cout << "Prueba\n";
    for (int i=0; 1 >= i; i++){
        //cout << "Arregelo completo \n";
        if (i==0){
            cout << "Registros\n";
            for (int a=0; 9 >= a; a++){
                cout << a+1 << "- ";
            cout << alumnos[i][a] <<endl;
            }
        }else{
            cout << "calificaciones\n";
            for (int a=0; 9 >= a; a++){
                cout << a+1 << "-";
            cout << alumnos[i][a] <<endl;
            }
        }
    }//for

    cout << "Ahora vamos a determinar el semestre en el que esta cada estudiante\n";
    for (int i=0; 1 >= i; i++){
        if (i==0){
                semestre(alumnos[i]);
            
        }//else{
          //      semestre(alumnos[i]);
            
        //}
        
    }//for
}// main

void arreglo(int arr[]){
    bool suban = true;
    int tmp = 0;
    
    cout << "Solamente puedes ingresar numeros entre 17000000 a 21300000\n";
    cout << "Ingresa los numeros necesarios: \n";
    
    for (int a = 0; a <= 10-1; a++){
        suban = true;
        while (suban){
             cout << "- ";
             cin >> tmp;
                if (tmp <= 18099999 || tmp >= 21399999){
                    suban = true;
                }else{
                    arr[a]=tmp;
                    suban = false;
                } //else
        } //while
    } //for
}//arreglo
               
                       
void arreglo2(int arr[]){
    bool suban = true;
    int tmp = 0;
    
    cout << "Solamente puedes ingresar numeros entre el 0 al 100\n";
    cout << "Ingresa los numeros necesarios: \n";
    
    for (int a = 0; a <= 10-1; a++){
        suban = true;
        while (suban){
             cout << "- ";
             cin >> tmp;
                if (tmp <= 0 || tmp >= 100){
                    suban = true;
                }else{
                    arr[a]=tmp;
                    suban = false;
                } //else
        } //while
    } //for
}//arreglo


void semestre(int comarr[]){
    int prim=0, seg=0, ter=0, cuar=0, quint=0, sext=0, sept=0, oct=0;
    int primsum=0, segsum=0, tersum=0, cuarsum=0, quintsum=0, sextsum=0, septsum=0, octsum=0;
    for (int a=0; 10-1 >= a; a++){
        if (comarr[a] <= 18099999 && comarr[a] >= 18000001){
            oct++;
            octsum += comarr[a];
        }
        if (comarr[a] <= 18399999 && comarr[a] >= 18300001){
            sept++;
            septsum += comarr[a];
        }
        if (comarr[a] <= 19099999 && comarr[a] >= 19000001){
            sext++;
            sextsum += comarr[a];
        }
        if (comarr[a] <= 19399999 && comarr[a] >= 19300001){
            quint++;
            quintsum += comarr[a];
        }
        if (comarr[a] <= 20099999 && comarr[a] >= 20000001){
            cuar++;
            cuarsum += comarr[a];
        }
        if (comarr[a] <= 20399999 && comarr[a] >= 20300001){
            ter++;
            tersum += comarr[a];
        }
        if (comarr[a] <= 21099999 && comarr[a] >= 21000001){
            seg++;
            segsum += comarr[a];
        }
        if (comarr[a] <= 21399999 && comarr[a] >= 21300001){
            prim++;
            primsum += comarr[a];
        }
    }
    cout << "La cantidad de alumnos por semestre es:\n";
    cout <<"Primero -- "<< prim <<endl;
    cout <<"Segundo -- "<< seg <<endl;
    cout <<"Tercero -- "<< ter <<endl;
    cout <<"Cuarto -- "<< cuar <<endl;
    cout <<"Quinto -- "<< quint <<endl;
    cout <<"Sexto -- "<< sext <<endl;
    cout <<"Septimo -- "<< sept <<endl;
    cout <<"Octavo -- "<< oct <<endl;
    
}//Semestre

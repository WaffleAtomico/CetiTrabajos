//
//  main.cpp
//  Examen 3er parcial
//
//  Created by Oscar Alejandro Penilla Skakievich on 10/06/21.
//

#include <iostream>

#include <time.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

int main(){     //Variables
    
    int alumnos[30];
    int promalum[30];
    int sw, sw2;
    int temp=0, temp2=0, prom[5];
    int numalum;
    int cal, calfin=0;
    int alum=0, cont=0;
    char rep;
    cout << "Ingrese los registros de todos sus alumnos(Almenos 2)\n";
    for (int a = 0; a<=30; a++){
        cout << "--";
        cin >> alumnos[a];
        cont=a;
        if (a>0){
        cout <<"Quiere ingresar otro alumno?s/n\n";
        cin >> rep;
            if (rep == 'n'){
                break;
            }
        }
    }
    for (int a = 0; a<=cont; a++){
        cout << "El numero de registro del alumno "<<a+1 <<" es "<<alumnos[a]<<endl;
    }
    while (int ran = 's'){
    cout << "Ingrese el registro del alumno para poder capturar sus calificaciones\n";
    cin >> numalum;
        for (int a=0; a<=cont; a++){
            if(numalum == alumnos[a]){
                alum = a;
            }
        }
   
        cout <<   "De que materia quiere capturar calificaciones?\n";
        cout << "1 Matematicas"<<endl;
        cout << "2 Fisica"<<endl;
        cout << "3 Quimica"<<endl;
        cout << "4 Dibujo"<<endl;
        cout << "5 Programacion"<<endl;
        cin >> sw;
    switch(sw){
        case 1:

        cout << "Capture las calificaciones del alumno\n";
                for (int a=0; a<=2;a++){
                    cout << "--";
                    cin >> cal;
                    calfin += cal;
                }
                
                temp = calfin/3;
            temp2 += temp;
                promalum[alum] += calfin/3;
            prom[0] = temp2/cont;
            cout << "Este es el promedio del alumno en matematicas "<<temp<< endl;
            break;
            
        case 2:
            cout << "Capture las calificaciones del alumno\n";
                for (int a=0; a<=2;a++){
                    cout << "--";
                    cin >> cal;
                    calfin += cal;
                }
                
                temp = calfin/3;
            temp2 += temp;
                promalum[alum] += calfin/3;
            prom[1] = temp2/cont;
            cout << "Este es el promedio del alumno en fisica "<<temp<< endl;
            break;
            
        case 3:
            cout << "Capture las calificaciones del alumno\n";
                for (int a=0; a<=2;a++){
                    cout << "--";
                    cin >> cal;
                    calfin += cal;
                    
                }
                    temp = calfin/3;
            temp2 += temp;
                    promalum[alum] += calfin/3;
            prom[2] = temp2/cont;
            cout << "Este es el promedio del alumno en quimica "<<temp<< endl;
            break;
        case 4:
            cout << "Capture las calificaciones del alumno\n";
                for (int a=0; a<=2;a++){
                    cout << "--";
                    cin >> cal;
                    calfin += cal;
                }
                    temp = calfin/3;
            temp2 += temp;
                    promalum[alum] += calfin/3;
            prom[3] = temp2/cont;
            cout << "Este es el promedio del alumno en dibujo "<<temp<< endl;
            break;
        case 5:
            cout << "Capture las calificaciones del alumno\n";
                for (int a=0; a<=2;a++){
                    cout << "--";
                    cin >> cal;
                    calfin += cal;
                }
                        temp = calfin/3;
            temp2 += temp;
                        promalum[alum] += calfin/3;
            prom[4] = temp2/cont;
            cout << "Este es el promedio del alumno en programacion "<<temp<< endl;
            break;
        }
        cout << "Puede hacer esto con los datos de sus estudiantes\n";
        cout << "1 Promedio por alumno"<<endl;
        cout << "2 Promedio por materia"<<endl;
        cout << "3 Ver promedio general"<<endl;
        cin >> sw2;
        switch(sw2){
            case 1:
                cout << "Ingrese el registro del alumno\n";
                cin >> numalum;
                    for (int a=0; a<=cont; a++){
                        if(numalum == alumnos[a]){
                            alum = a;
                        }
                    }
                cout <<"Su promedio es este " << promalum[alum]/5<<endl;
            case 2:
                int sw3;
                //promedio por materia
                cout << "Ingrese la materia quiere saber su promedio\n";
                cout << "1 Matematicas"<<endl;
                cout << "2 Fisica"<<endl;
                cout << "3 Quimica"<<endl;
                cout << "4 Dibujo"<<endl;
                cout << "5 Programacion"<<endl;
                cin >> sw3;
                    cout << prom[sw3-1];
                
            case 3:
                double prom_total=0;
                for (int a= 0; a>=5; a++){
                    prom_total += prom[a];
                }
                prom_total = prom_total/5;
                cout << "El promedio del grupo es "<< prom_total<<endl;
        }
        
        cout << "Quiere repetir el programa?s/n\n";
        cin >> ran;
    }
   
    
}

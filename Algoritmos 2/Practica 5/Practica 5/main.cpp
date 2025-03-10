//
//  main.cpp
//  Practica 5
//
//  Created by Oscar Alejandro Penilla Skakievich on 21/09/21.
//

#include <iostream>

using namespace std;


struct fecha {
    int mes;
    int year;
    int recoyear[5];
};

struct datos{
    int registro[5];
    string carrera[5];
    int semestre[5];
    fecha fechin;
   
};

void versemestre(fecha &t, datos &d, int &mestemp, int &yeartemp);

int main() {
    fecha today;
    datos dat;
    int mestemporal;
    int yeartemporal;
    //int recoyear[5];
    cout << "Cual es la fecha actual?(ejemplo 9/21)\n";
    cout << "Mes-";
    cin >> dat.fechin.mes;
    cout << "Año-";
    cin >> dat.fechin.year;
    
    versemestre(today, dat, mestemporal, yeartemporal);
    
    cout << "\n\n";
    
    for (int i =0; 4>=i; i++){
        
        cout << "Los datos del alumno "<< i+1 << " fueron:\n";
        cout << "Registro: " << dat.registro[i] <<endl;
        cout << "Carrera: " << dat.carrera[i] <<endl;
        if (mestemporal == 1){
            cout << "Mes de ingreso Agosto" <<endl;
        }else {
            cout << "Mes de ingreso Febrero" <<endl;
        }
        
        cout << "Año de ingreso " << dat.fechin.recoyear[i] << endl;
        cout << "Y este en el semestre: " << dat.semestre[i] <<endl;
        cout << "\n";
    }//For
}

void versemestre(fecha &t, datos &d, int &mestemp, int &yeartemp){
    bool puerta1=true;
    bool puerta2=true;
    //bool puerta3=true;
    //int mestemp, yeartemp;
    
    
    
    cout << "Ingresa la informacion de cada uno de los alumnos\n";
    
        for (int i=0; 4>=i; i++){
            cout << "Ingresa tu registro: ";
            cin >> d.registro[i];
            cout << "Ingresa tu carrera: ";
            cin >> d.carrera[i];
        
    
    //IDEA: al tener solo dos opciones agosto y febrero sabemos exactamente cuando entran, no hay de otra, un 1 puede significar el mes 8 mientras que el 2 el mes 2 febrero, asi que solamente debemos tonar en cuenta, si la fecha es mayor o igual a 8 entonces que comienze la cuenta desde el semestre de agosto (Como ahorita), pero si es menor a 8 entonces se cuenta desde febrero
            
        cout <<"Ingresa tu fecha de ingreso:\n";
     puerta1=true;
    while (puerta1){
        cout << "Mes (1=Agosto/2=Febrero)--";
            cin >> mestemp;
        if (mestemp<=2 && mestemp>=1){
            puerta1 = false;
        }//if
    }//puerta1
            
     puerta2=true;
    while (puerta2){
        cout << "Año(Solo lo dos ultimos digitos)--";
            cin >> yeartemp;
        if (d.fechin.mes >= 8 && d.fechin.mes <= 12){
            if (yeartemp >= d.fechin.year-3 && yeartemp <= d.fechin.year){
                puerta2 = false;
            } // if de menos 3 años
        }//if para el primer calendario
        else{
            if (yeartemp >= d.fechin.year-4 && yeartemp <= d.fechin.year){
                puerta2 = false;
            }// if de menos 4 años
        }//else para 2do calendario
    }//puerta2
            d.fechin.recoyear[i]=yeartemp; // para guardar el año
            
        if (d.fechin.mes >= 8 && d.fechin.mes <= 12){ //Si el mes actual es 9 es mayor a 8 y menor a 12
        //Turbo cadena de if's
            if (mestemp == 1 && d.fechin.year == yeartemp){ //1
                //cout << "El alumno es del 1er semestre\n";
                d.semestre[i]=1;
            }else if (mestemp == 2 && d.fechin.year == yeartemp){//2
                //cout << "El alumno es del 2do semestre\n";
                d.semestre[i]=2;
            }else if (mestemp == 1 && d.fechin.year-1 == yeartemp){//3 yeartemp va a ser la variable que va a cambiar con cada estudiante
                //cout << "El alumno es del 3er semestre\n";
                d.semestre[i]=3;
            }else if (mestemp == 2 && d.fechin.year-1 == yeartemp){//4
                //cout << "El alumno es del 4to semestre\n";
                d.semestre[i]=4;
            }else if (mestemp == 1 && d.fechin.year-2== yeartemp){//5
                //cout << "El alumno es del 5to semestre\n";
                d.semestre[i]=5;
            }else if (mestemp == 2 && d.fechin.year-2 == yeartemp){//6
                //cout << "El alumno es del 6to semestre\n";
                d.semestre[i]=6;
            }else if (mestemp == 1 &&  d.fechin.year-3 == yeartemp){//7
                // cout << "El alumno es del 7mo semestre\n";
                d.semestre[i]=7;
            }else if (mestemp == 2 && d.fechin.year-3 == yeartemp){//8
                //cout << "El alumno es del 8vo semestre\n";
                d.semestre[i]=8;
            }//fin de la turbo cadena de if's
        
        }// if del comienzo en agosto
        
        if (d.fechin.mes >= 1 && d.fechin.mes <= 8){ //Si el mes actual es 4 es mayor a 1 y menor a 8
        //Turbo cadena de if's
            if (mestemp == 2 && d.fechin.year == yeartemp){ //1
                //cout << "El alumno es del 1er semestre\n";
                d.semestre[i]=1;
            }else if (mestemp == 1 && d.fechin.year-1 == yeartemp){//2
                //cout << "El alumno es del 2do semestre\n";
                d.semestre[i]=2;
            }else if (mestemp == 2 && d.fechin.year-1 == yeartemp){//3 yeartemp va a ser la variable que va a cambiar con cada estudiante
                //cout << "El alumno es del 3er semestre\n";
                d.semestre[i]=3;
            }else if (mestemp == 1 && d.fechin.year-2 == yeartemp){//4
                //cout << "El alumno es del 4to semestre\n";
                d.semestre[i]=4;
            }else if (mestemp == 2 && d.fechin.year-2== yeartemp){//5
                //cout << "El alumno es del 5to semestre\n";
                d.semestre[i]=5;
            }else if (mestemp == 1 && d.fechin.year-3 == yeartemp){//6
                //cout << "El alumno es del 6to semestre\n";
                d.semestre[i]=6;
            }else if (mestemp == 2 &&  d.fechin.year-3 == yeartemp){//7
                //cout << "El alumno es del 7mo semestre\n";
                d.semestre[i]=7;
            }else if (mestemp == 1 && d.fechin.year-4 == yeartemp){//8
                //cout << "El alumno es del 8vo semestre\n";
                d.semestre[i]=8;
            }//fin de la turbo cadena de if's
        
        }//if de enero a agosto
            
           /* cout << "Los datos fueron\n\n";
            cout << "Registro " << d.registro[i] <<endl;
            cout << "Carrera " << d.carrera[i] <<endl;
            if (mestemp == 1){
                cout << "Mes de ingreso Agosto" <<endl;
            }else {
                cout << "Mes de ingreso Febrero" <<endl;
            }
            
            cout << "Año de ingreso " << yeartemp << endl;
            cout << "Y esta en el semestre " << d.semestre[i] <<endl;
            */
            cout << "\n";
    }//for de estudiantes
    
    
    /* solo para guiarme y tener una idea del actual
     //fecha 9/21, el 9 es mayor al 8 y la cuenta comienza desde el 21 - 3 = 18, hay 3 años diferentes
     semestre --- año --- mes
        1          21       Ago=30
        2          21       Feb=00
        3          20       Ago
        4          20       Feb
        5          19       Ago
        6          19       Feb
        7          18       Ago
        8          18       Feb
     
     semestre --- año --- mes
        1          21       Feb=00
        2          20       Ago
        3          20       Feb
        4          19       Ago
        5          19       Feb
        6          18       Ago
        7          18       Feb
        8          17       Ago
     
     Se puede ver que temina en un mes opuesto al que comienza siempre
     Ademas, que si comienza en febrero la diferencia es de 4 Años diferentes
     Si el mes es = 2(febrero) {1ero} entonces
     año-1 despues mes 1{2do} y 2{3ero},
     año-1, mes 1{4to} y 2{5to},
     año-1, mes 1{6to} y 2{7mo},
     año-1, mes 1{8vo}
     */
}

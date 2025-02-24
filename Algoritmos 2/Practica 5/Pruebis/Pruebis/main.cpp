//
//  main.cpp
//  Practica 5
//
//  Created by Oscar Alejandro Penilla Skakievich on 21/09/21.
//              PRUEBIIIS

#include <iostream>

using namespace std;




void versemestre(int &t, int &t1, int &d, int &d1, int &d2, int &mestemp, int &yeartemp);

int main() {
    
    struct fecha {
        int mes;
        int year;
    };

    struct datos{
        int registro[5];
        string carrera[5];
        int semestre[5];
        fecha fechin;
       
    };
    
    datos dat;
    
    
    int mestemporal;
    int yeartemporal;
    //int recoyear[5];
    cout << "Cual es la fecha actual?(ejemplo 9/21)\n";
    cout << "Mes-";
    cin >> dat.fechin.mes;
    cout << "Año-";
    cin >> dat.fechin.year;
    
    versemestre(dat.fechin.mes, dat.fechin.year, dat.registro, dat.carrera, dat.semestre, mestemporal, yeartemporal);
    
    cout << "ola\n\n";
    
    for (int i =0; 4>=i; i++){
        
        cout << "Los datos del alumno "<< i+1 << " fueron:\n";
        cout << "Registro: " << dat.registro[i] <<endl;
        cout << "Carrera: " << dat.carrera[i] <<endl;
        if (mestemporal == 1){
            cout << "Mes de ingreso Agosto" <<endl;
        }else {
            cout << "Mes de ingreso Febrero" <<endl;
        }
        
        //cout << "Año de ingreso " << yeartemporal << endl;
        cout << "Y este en el semestre: " << dat.semestre[i] <<endl;
        
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
        if (t.mes >= 8 && t.mes <= 12){
            if (yeartemp >= t.year-3 && yeartemp <= t.year){
                puerta2 = false;
            } // if de menos 3 años
        }//if para el primer calendario
        else{
            if (yeartemp >= t.year-4 && yeartemp <= t.year){
                puerta2 = false;
            }// if de menos 4 años
        }//else para 2do calendario
    }//puerta2
    
        if (t.mes >= 8 && t.mes <= 12){ //Si el mes actual es 9 es mayor a 8 y menor a 12
        //Turbo cadena de if's
            if (mestemp == 1 && t.year == yeartemp){ //1
                cout << "El alumno es del 1er semestre\n";
                d.semestre[i]=1;
            }else if (mestemp == 2 && t.year == yeartemp){//2
                cout << "El alumno es del 2do semestre\n";
                d.semestre[i]=2;
            }else if (mestemp == 1 && t.year-1 == yeartemp){//3 yeartemp va a ser la variable que va a cambiar con cada estudiante
                cout << "El alumno es del 3er semestre\n";
                d.semestre[i]=3;
            }else if (mestemp == 2 && t.year-1 == yeartemp){//4
                cout << "El alumno es del 4to semestre\n";
                d.semestre[i]=4;
            }else if (mestemp == 1 && t.year-2== yeartemp){//5
                cout << "El alumno es del 5to semestre\n";
                d.semestre[i]=5;
            }else if (mestemp == 2 && t.year-2 == yeartemp){//6
                cout << "El alumno es del 6to semestre\n";
                d.semestre[i]=6;
            }else if (mestemp == 1 &&  t.year-3 == yeartemp){//7
                cout << "El alumno es del 7mo semestre\n";
                d.semestre[i]=7;
            }else if (mestemp == 2 && t.year-3 == yeartemp){//8
                cout << "El alumno es del 8vo semestre\n";
                d.semestre[i]=8;
            }//fin de la turbo cadena de if's
        
        }// if del comienzo en agosto
        
        if (t.mes >= 1 && t.mes <= 8){ //Si el mes actual es 4 es mayor a 1 y menor a 8
        //Turbo cadena de if's
            if (mestemp == 2 && t.year == yeartemp){ //1
                cout << "El alumno es del 1er semestre\n";
                d.semestre[i]=1;
            }else if (mestemp == 1 && t.year-1 == yeartemp){//2
                cout << "El alumno es del 2do semestre\n";
                d.semestre[i]=2;
            }else if (mestemp == 2 && t.year-1 == yeartemp){//3 yeartemp va a ser la variable que va a cambiar con cada estudiante
                cout << "El alumno es del 3er semestre\n";
                d.semestre[i]=3;
            }else if (mestemp == 1 && t.year-2 == yeartemp){//4
                cout << "El alumno es del 4to semestre\n";
                d.semestre[i]=4;
            }else if (mestemp == 2 && t.year-2== yeartemp){//5
                cout << "El alumno es del 5to semestre\n";
                d.semestre[i]=5;
            }else if (mestemp == 1 && t.year-3 == yeartemp){//6
                cout << "El alumno es del 6to semestre\n";
                d.semestre[i]=6;
            }else if (mestemp == 2 &&  t.year-3 == yeartemp){//7
                cout << "El alumno es del 7mo semestre\n";
                d.semestre[i]=7;
            }else if (mestemp == 1 && t.year-4 == yeartemp){//8
                cout << "El alumno es del 8vo semestre\n";
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
    
}

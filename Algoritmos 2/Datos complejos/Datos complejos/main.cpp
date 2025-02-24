//
//  main.cpp
//  Datos complejos
//
//  Created by Oscar Alejandro Penilla Skakievich on 15/09/21.
//              VAREABLES COMPLEJAS

#include <iostream>

using namespace std;

// Al principio para que pueda leerla primero

 struct fecha{ //se almacenan variables
            //*Al ser GLOBAL esta no cambia el nombre de sus variables entre funciones*
             
     int dia;
     int mes;
     float year;
     //int arreglo[5]; puede haber
     //string algo;
    
 };//así seria global y todos los procesos/funciones se pueden hacer

void calculo_dia(int &a, int b, int c);

void  calculo_fecha(fecha a);

fecha  calculo_fech2(fecha &a);


int main() {
    // int a; //4 bytes = 32bits = 2^32 --- 4,294,967,296
                                            //^--------- esto /2, para una mitad positiva y otra negativa
            //1 byte = 8bits = 2^8 = 256 ---- 1111 1111
    
    /*struct fecha{ //se almacenan variables
                  
                  //Estas siempre se pasan por referencia
        int dia;
        int mes;
        float year;
        //int arreglo[5];
        //string algo;
    };*/
            
    fecha hoy; // Esto solo existe en main Y pueden pasarse en funciones
    //hoy.arreglo[0]=10; accesar a un elemento de un arreglo dentro de una estructura
    //*Esto solo existe en main, PERO, se puede pasar con otros nombres*
    
    fecha anteayer;
    cout << "Ingresa el dia porfi: ";
    cin >> hoy.dia;
    cout << "Ingresa el mes porfi: ";
    cin >> hoy.mes;
    cout << "Ingresa el año porfi: ";
    cin >> hoy.year;
    
    anteayer = calculo_fech2(hoy);
    calculo_dia(hoy.dia, hoy.mes, hoy.year); //esto para pasar uno por uno
    calculo_fecha(hoy);
} //main


                //  *Como aquí*
void calculo_dia(int &a, int b, int c){ //nota para mi:El "&" debe estar arriba y abajo
    a++; // Aumentó 1 del numero original
    b++; //Aumentó 1 del numero original
    cout << "La info de calculo dia es " <<a << "/" <<b << "/" << c <<endl;
    
}//calculo dia

            //*Aqui como paso toda la estructura, la llamamos como queramos*
void  calculo_fecha(fecha a){
    a.dia++; //Aumentó 2 del numero original
    a.mes++; //Aumentó 1 del numero original
    cout << "La info de calculo fecha es " <<a.dia << "/" <<a.mes << "/" << a.year <<endl;
}//calculo fecha


fecha  calculo_fech2(fecha &a){
    fecha ayer;
    a.dia++; //Aumentó 2 del numero original
    a.mes++; //Aumentó 1 del numero original
    cout << "La info de calculo fecha DOS es " <<a.dia << "/" <<a.mes << "/" << a.year <<endl;
    return ayer;
}//Calculo fecha dos

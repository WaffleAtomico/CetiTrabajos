#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

//errores 78

struct persona {
    int registro;
    char nombre[50];
    char apellido[50];
    int edad;
};

void busqueda(persona* valor, char* bus_nomb, int max) {//sobrecarga de funcion para nombre
    if (max == 0) {
        cout << "no se ha ingresado ningun valor" << endl;
    }
    else
    {
        int valorrep = 0, posencon[50];

        for (int i = 0; i < max; i++)
        {
            //  cout <<"Valor "<<valor[i].nombre<<endl;
            //  cout <<"Busqueda "<<bus_nomb<<endl;
            cout << !strcmp(valor[i].nombre, bus_nomb) << endl;
            if (!strcmp(valor[i].nombre, bus_nomb))
                valorrep++;
            posencon[i] = 1;
        }
        // cout << "Datos encontrados "<<valorrep<<endl;
        for (int i = 0; i < max; i++) {
            if (posencon[i] == 1 && !strcmp(valor[i].nombre, bus_nomb)) {
                cout << "Registro: " << valor[i].registro << endl;
                cout << "Nombre: " << valor[i].nombre << endl;
                cout << "Apellido: " << valor[i].apellido << endl;
                cout << "Edad: " << valor[i].edad << endl;
            }
            cout << endl;
        }
    }
}

void busqueda(persona* valor, int bus_regis, int max) {//sobrecarga de funcion para registro
//ya jala no le muevas paro
    if (max == 0) {
        cout << "No se ha ingresado ningun valor" << endl;
    }
    else {

        int valorrep = 0, posencon[50];

        for (int i = 0; i < max; i++)
        {
            if (valor[i].registro == bus_regis) {
                valorrep++;
                cout << "Se encontro similitud\n";
                posencon[i] = 1;
            }
        }
        cout << "Datos encontrados " << valorrep << "\n" << endl;
        for (int i = 0; i < max; i++) {
            if (posencon[i] == 1) {
                cout << "Registro: " << valor[i].registro << endl;
                cout << "Nombre: " << valor[i].nombre << endl;
                cout << "Apellido: " << valor[i].apellido << endl;
                cout << "Edad: " << valor[i].edad << endl;
            }
            cout << endl;
        }
    }

}

int main() {
    persona estudiantes[50];//pasar el numero de usuarios con sus variables correspondientes 
    int i_cont_rep = 0;//almacenar el valor de nuestras variables  
    //int cant = 0;//borrar 
    bool b_door = true;//para repetir nuestro codigo
    //variables para la busqueda
    char ingreso = 'S', buscar = 'S';
    char buscnomb[50] = " ";
    int buscregis = 0;

    cout << "Programa de busqueda secuencial" << endl;
    do {

        do
        {
            buscar = 'S';
            cout << "A- Ingresar datos. \nB- Buscar datos.\nC- Salir" << endl;
            cin >> ingreso;
            if (ingreso != 'A' && ingreso != 'B' && ingreso != 'C') {
                cout << "Valor no corresponde\n";
            }
            switch (ingreso)
            {
            case 'A':
            {
                if (i_cont_rep >= 50) {
                    cout << "Se llego a la cantidad maxima de usuarios" << endl;
                    break;//para salir si hemos llegado al tope de usuarios
                }
                else {
                    do
                    {
                        cout << "Ingresa su registro: ";
                        cin >> estudiantes[i_cont_rep].registro;
                        // cout << estudiantes[i_cont_rep].registro <<endl;
                    } while (estudiantes[i_cont_rep].registro < 1);

                    cout << "Ingresa su nombre: ";
                    cin >> estudiantes[i_cont_rep].nombre;//ya sabemos que van a ser char

                    cout << "Ingresa su apellido: ";
                    cin >> estudiantes[i_cont_rep].apellido;

                    do
                    {
                        cout << "Ingresa su edad: ";
                        cin >> estudiantes[i_cont_rep].edad;
                        // cout << estudiantes[i_cont_rep].edad <<endl;
                    } while (estudiantes[i_cont_rep].edad < 1);

                    // cout <<  i_cont_rep<<endl;//ver en que usuario estamos
                    i_cont_rep++;//a la hora de que termine esto la posicion del arreglo aumentara y asi la siguiente vuelta sera otras nuevas variables, que vamos a recorrer en el caso B
                }
            }
            break;
            case 'B':
            {
                while (buscar == 'S') {
                    cout << "Quieres buscar por el nombre?(S/N) ";
                    cin >> buscar;
                    if (buscar == 'S') {
                        cout << "IMPORTANTE: el nombre debe de ser exacto al ingresado " << endl;
                        cout << "Ingresa el nombre que buscas: " << endl;
                        cin >> buscnomb;
                        busqueda(estudiantes, buscnomb, i_cont_rep);
                        break;//para salir al terminar
                    }
                    else if (buscar == 'N') {
                        //  cout<<"ola, No"<<endl;
                        break;//solo sale y lo pasa
                    }
                    else {
                        cout << "Ingresa un valor correspondiente" << endl;
                        buscar = 'S';//para volver a repetir
                    }
                };//while nombre
                while (buscar == 'N') {//aqui es N pq buscar sera N si se cancela nombre
                    cout << "Quieres buscar por el registro?(S/N) ";
                    cin >> buscar;
                    if (buscar == 'S') {
                        cout << "Ingresa el registro que buscas: " << endl;
                        cin >> buscregis;
                        busqueda(estudiantes, buscregis, i_cont_rep);
                        break;//para salir al terminar
                    }
                    else if (buscar == 'N') {
                        // cout<<"ola, No"<<endl;
                        break;//solo sale y lo pasa
                    }
                    else {
                        cout << "Ingresa un valor correspondiente" << endl;
                        buscar = 'N';//para volver a repetir
                    }
                }
            }
            break;
            case 'C':
            {
                cout << "Decidió salir" << endl;
                b_door = false;
                break;
            }
            }
        } while (ingreso != 'A' && ingreso != 'B' && ingreso != 'C');
    } while (b_door == true);
}
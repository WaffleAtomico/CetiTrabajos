#include <iostream>
#include <cctype>
#include <string.h>
#include <cmath>
using namespace std;
#define HashMod 50

//errores 120

struct persona {
    int registro;
    char nombre[50] = "null";
    char apellido[50];
    int edad;
};


unsigned long long CharToInt(char entrada)
{
    unsigned long long Salida;
    Salida = entrada;
    return Salida;
}
unsigned long long ObtenerNumero(string entrada)
{
    unsigned long long Salida = 0;
    for (int i = 0; entrada[i] != '\0'; i++)
    {
        if (entrada[1 + i] == '\0' && i == 0)
            Salida += CharToInt(entrada[i]);
        else
        {
            if (i == 0)
            {
                Salida += CharToInt(entrada[i]);
                continue;
            }
            else
            {
                int miChar = CharToInt(entrada[i]);
                if (miChar > 99)
                {
                    Salida *= 1000;
                }
                else if (miChar > 9)
                {
                    Salida *= 100;
                }

                Salida += miChar;
            }
        }
    }
    return Salida;
}
int  FuncHash(string entrada)
{
    unsigned long long Amodular = ObtenerNumero(entrada);
    int Salida = Amodular % HashMod;
    return Salida;
}
void busqueda(persona* valor, char* bus_nomb, int max) {
    if (max == 0) {
        cout << "No se ha ingresado ningun valor" << endl;
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

void shell(persona* arreglo, int cantidad) {
    int i, a = 1, aux;
    bool b_door;
    int i_redond = cantidad;
    while (i_redond > 1)//comenzamos a ordenar
    {
        i_redond = ceil(float(i_redond) / 2);
        b_door = true;
        while (b_door == true)
        {
            b_door = false;
            i = 0;
            while ((i + i_redond) <= cantidad)
            {
                if (arreglo[i].registro > arreglo[i + i_redond].registro)
                {
                    aux = arreglo[i].registro;
                    arreglo[i].registro = arreglo[i + i_redond].registro;
                    arreglo[i + i_redond].registro = aux;
                    b_door = true;
                }
                i++;
            }//aqui no se muestra
        }//aqui se puede mostrar 
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
                // cout<<"Se encontro similitud\n";
                posencon[i] = 1;
            }
        }
        cout << "Datos encontrados " << valorrep << "\n" << endl;
        for (int i = 0; i < max; i++) {
            if (posencon[i] == 1 && valorrep >= 1) {
                cout << "Registro: " << valor[i].registro << endl;
                cout << "Nombre: " << valor[i].nombre << endl;
                cout << "Apellido: " << valor[i].apellido << endl;
                cout << "Edad: " << valor[i].edad << endl;
            }
            cout << endl;
        }
    }

}


void insercion(persona* arreglo, int cantidad, int buscregis) {
    int i_auxreg = 0, pos = 0;
    int i_auxeda = 0;
    char c_auxnom[50];
    char c_auxape[50];
    for (int i = 0; i <= cantidad - 1; i++)
    {
        pos = i;//va a ser la posicion
        i_auxreg = arreglo[i].registro;//una variable auxiliar depende de i
        i_auxeda = arreglo[i].edad;
        strcpy(c_auxnom, arreglo[i].apellido);
        strcpy(c_auxape, arreglo[i].apellido);

        while (pos > 0 && (arreglo[pos - 1].registro > i_auxreg)) {//mientras posicion sea mayor a 0 y el numero del arreglo sea mayor que aux
            arreglo[pos].registro = arreglo[pos - 1].registro;
            arreglo[pos].edad = arreglo[pos - 1].edad;
            strcpy(arreglo[pos].apellido, arreglo[pos - 1].apellido);
            strcpy(arreglo[pos].nombre, arreglo[pos - 1].nombre);
            pos--;//reducimos la posicion para el siguiente ciclo
        }
        arreglo[pos].registro = i_auxreg;//se hace el intercambio de variable
        arreglo[pos].edad = i_auxeda;
        strcpy(arreglo[pos].nombre, c_auxnom);
        strcpy(arreglo[pos].apellido, c_auxape);
        // cout << "Iteracion " << i << ": ";//mostramos
        for (int j = 0; j < cantidad; j++)
        {//"Sin importar cual caso sea se deberá mostrar el arreglo en cada inserción."
        }
        cout << "\n";
    }
    busqueda(arreglo, buscregis, cantidad);
}

int main() {
    persona estudiantes[50];//pasar el numero de usuarios con sus variables correspondientes 
    int i_cont_rep = 0;//almacenar el valor de nuestras variables  
    int i_cont_rep2 = 0/*, verificador=0*/;//busqueda char

    bool b_door = true;//para repetir nuestro codigo
    //variables para la busqueda
    char ingreso = 'S', buscar = 'S';
    char buscnomb[50] = " ";
    int buscregis = 0;

    cout << "Programa de busqueda binaria" << endl;
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
                int verificador = 0;
                char Clave[50];
                // char Clave[50]=" ";
                while (buscar == 'S') {
                    cout << "Quieres buscar por el nombre?(S/N) ";
                    cin >> buscar;
                    if (buscar == 'S') {
                        cout << "IMPORTANTE: el nombre debe de ser exacto al ingresado " << endl;
                        cout << "Ingresa el nombre que buscas: " << endl;
                        cin >> buscnomb;//no la usamos wtf?

                        //aqui ordenamos
                        int Pos = FuncHash(estudiantes[i_cont_rep].nombre);
                        //  cout<<"\nValor hash: "<<Pos<<endl;
                        if (estudiantes[Pos].nombre == "null" || estudiantes[Pos].nombre == Clave) {
                            //estudiantes[Pos].nombre = Clave;
                            strcpy(estudiantes[Pos].nombre, Clave);
                        }
                        else {
                            for (int i = Pos; i < HashMod; i++) {
                                if (estudiantes[i].nombre == "null")
                                {
                                    strcpy(estudiantes[i].nombre, Clave);
                                    //estudiantes[i].nombre = Clave;
                                    break;
                                }
                            }
                        }
                        //aqui buscamos el valor ya ordenado
                        for (int i = 0; i < HashMod; i++)
                        {

                            if (!strcmp(estudiantes[i].nombre, buscnomb)) {
                                cout << "Registro: " << estudiantes[i].registro << endl;
                                cout << "Nombre: " << estudiantes[i].nombre << endl;
                                cout << "Apellido: " << estudiantes[i].apellido << endl;
                                cout << "Edad: " << estudiantes[i].edad << "\n" << endl;
                                verificador++;
                            }
                        }
                        if (verificador == 0) {
                            cout << "No se ha encontrado el nombre" << endl;
                        }
                        else if (verificador > 1) {
                            cout << "Hay (" << verificador << ") nombres iguales\n" << endl;
                        }
                        i_cont_rep2++;
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
                        insercion(estudiantes, i_cont_rep, buscregis);//dentro de este esta busqueda
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
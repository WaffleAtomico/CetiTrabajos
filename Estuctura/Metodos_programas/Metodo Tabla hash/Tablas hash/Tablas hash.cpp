#include <iostream>
#include <cctype>
#include <string.h>
#define HashMod 50
using namespace std;

struct persona {
    string registro;
    char nombre[50];
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

int main() {
    persona estudiantes[113];//pasar el numero de usuarios con sus variables correspondientes 

     //string Tabla[50];
    for (int i = 0; i < 113; i++)
    {
        estudiantes[i].registro = "null";
    }
    int aux = 0, verificador = 0;
    int i_cont_rep = 0;//almacenar el valor de nuestras variables  
    bool b_door = true;//para repetir nuestro codigo
    //variables para la busqueda
    char ingreso = 'S', buscar = 'S';
    //char buscnomb[50]=" ";
    string buscregis = " ";
    cout << "Programa de Tabla hash" << endl;
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
                string Clave;
                do
                {
                    cout << "Ingresa su registro: ";
                    cin >> aux;
                    estudiantes[i_cont_rep].registro = to_string(aux);
                } while (aux < 1);

                cout << "Ingresa su nombre: ";
                cin >> estudiantes[i_cont_rep].nombre;

                cout << "Ingresa su apellido: ";
                cin >> estudiantes[i_cont_rep].apellido;

                do
                {
                    cout << "Ingresa su edad: ";
                    cin >> estudiantes[i_cont_rep].edad;

                } while (estudiantes[i_cont_rep].edad < 1);
                int Pos = FuncHash(estudiantes[i_cont_rep].registro);
                // cout<<"\nEl valor ascii es: "<<ObtenerNumero(Clave);
                cout << "\nValor hash: " << Pos << endl;
                if (estudiantes[Pos].registro == "null" || estudiantes[Pos].registro == Clave) {
                    estudiantes[Pos].registro = Clave;
                }
                else {
                    for (int i = Pos; i < HashMod; i++) {
                        if (estudiantes[i].registro == "null")
                        {
                            estudiantes[i].registro = Clave;
                            break;
                        }
                    }
                }
            }
            i_cont_rep++;
            break;
            case 'B':
            {
                cout << "Ingresa el registro que buscas: " << endl;
                cin >> buscregis;
                for (int i = 0; i < 50; i++)
                {
                }
                for (int i = 0; i < HashMod; i++)
                {
                    if (buscregis == estudiantes[i].registro) {
                        cout << "Registro: " << estudiantes[i].registro << endl;
                        cout << "Nombre: " << estudiantes[i].nombre << endl;
                        cout << "Apellido: " << estudiantes[i].apellido << endl;
                        cout << "Edad: " << estudiantes[i].edad << endl;
                        verificador++;
                    }
                }
                if (verificador == 0) {
                    cout << "No se ha encontrado el registro" << endl;
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
// Pr1_P1_20300661.cpp
// Tamara Naomi Cholico Hernández
//20300661 / CETI Colomos

#include "iostream"

using namespace std;

int caso_2(char c_cad[]);

int main()
{
    //Variables
    int i_casoselec = 0;
    char c_cad[40];
    char* p_cad = &c_cad[0];

    //Bienvenida
    cout << "Bienvenido a la practica 1 de Tamara Cholico" << endl;
    cout << "Para empezar, ingrese una cadena de maximo 40 caracteres" << endl;
    cin.getline(c_cad, 40);
    cout << "A continuacion le mostrare un menu con las opciones" << endl;
    cout << " Opcion 1: Eliminar los espacios en blanco de la cadena" << endl;
    cout << " Opcion 2: Ver cuantas consonantes se encuentran en la cadena" << endl;
    cout << " Opcion 3: Salir" << endl;
    cout << "Que desea hacer?" << endl;
    cin >> i_casoselec;

    //Menu
    switch (i_casoselec)
    {
    case 1:
        cout << "Seleccionaste la opcion 1" << endl; // falta
        break;
    case 2:
        cout << "Seleccionaste la ocpion 2" << endl;
        cout << caso_2(c_cad);
        break;
    case 3:
        cout << "Seleccionaste la opcion 3 (Salir)" << endl << "Adioooooooos :3" << endl;
        exit;
        break;
    }
}

// puntero ++ mientras el puntero no sea
// \0

//while (puntero != '\0')   puntero++


int caso_2(char c_cad[])
{
    int  i_cont = 0;
    char *p_cad = c_cad;
    int  lingi = strlen(c_cad);
    
        for (int i = 1; i <= lingi; i++)
        {
            if (p_cad[i] != 'a' && p_cad[i] != 'e' && p_cad[i] != 'i' && p_cad[i] != 'o' && p_cad[i] != 'u' && p_cad[i] != ' ') {
                i_cont++;
            }
            else if (p_cad[i] != 'A' && p_cad[i] != 'E' && p_cad[i] != 'I' && p_cad[i] != 'O' && p_cad[i] != 'U') {
                i_cont++;
            }
        }
    return i_cont;
}
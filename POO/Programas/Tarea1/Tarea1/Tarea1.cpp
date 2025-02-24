// Tarea1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "iostream";
#include "conio.h";
#include "windows.h";
#include "string.h"

using namespace std;

void gotoxy(int x, int y);
string verificar(char palindromo[], int* longitud);

int main() {
        char c_resp = 'x';
    do { 
        char c_opcion = 'x';
        char c_caracter = 'x';

        int i_x = 0;
        int i_y = 0;
        int i_long = 0;
        char str_palin[40] = " ";
        cout << "Hola, elije una opcion\n";
        cout << "caso A: usa un caracter para rellenar la pantalla\n";
        cout << "caso B: Saber si una frase es palindromo\n";
        cout << "caso S: Salir\n";
        cin >> c_opcion;
        cin.ignore();
        switch (c_opcion)
        {
        case 'A':
            cout << "Ingresa el caracter qur vas a usar\n";
            cin >> c_caracter;
            for (int i_x = 0; i_y <= 80; i_x++) {
                for (int i_y = 0; i_y <= 24; i_y++)
                {
                    if (i_y != 24)
                    {
                        gotoxy(i_x, i_y); cout << c_caracter;
                        Sleep(1); //para que vaya rapido, en mi compu cuando uso menores a 1 va demasiado rapido, este es un intermedio
                        gotoxy(i_x, i_y); cout << " ";
                    }
                    else if (i_y <= 24) {                     
                        for (int i_y = 24; i_y >= 0; i_y--) {
                            gotoxy(i_x, i_y); cout << c_caracter;
                            Sleep(1);
                            gotoxy(i_x, i_y); cout << " ";
                        }//for subida
                    }//else
                }//for bajada
                if (i_x == 80) {
                    gotoxy(0, 0);
                    break;
                }
            }//for posicion
            break;
        case 'B':
            cout << "Escribe una frase\n";
            cin.getline(str_palin, 40, '\n');
            i_long = strlen(str_palin);
            cout << verificar(str_palin, &i_long)<<endl;
            break;
        case 'S':
            c_resp = 'S';
            break;
        default:
            cout << "Escribe una frase\n";
            break;
        }//switch

        if (c_opcion == 'A' || c_opcion == 'B') {
            cout << "Desea repetir el programa? (S para salir)\n";
            cin >> c_resp; 
        }//salida
    } while (c_resp != 'S');   
    }//main 

string verificar(char palindromo[], int* longitud) {
    char* cp_puntpalin1 = palindromo;
    char* cp_puntpalin2 = palindromo;
    int a = *longitud; //contador que va a decrementar
    for (int i = 0; i <= (*longitud/2); i++) {
              //son iguales(MM o mm)                    mayuscula y termina en minuscula               //minuscula y termina en mayuscula
        if (cp_puntpalin1[i] != cp_puntpalin2[a-1] && (cp_puntpalin1[i]+32) != (cp_puntpalin2[a - 1]) && (cp_puntpalin1[i]) != (cp_puntpalin2[a - 1]+32)) {
            return "La frase no es palindromo\n";
        }
        a--;
    }
    //cout << "La frase '" <<  << "' es un palindromo\n"
        return palindromo;
}
void gotoxy(int x, int y)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(h, c);
}
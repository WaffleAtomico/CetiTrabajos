// Seleccion bien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//insercion
//Oscar Alejandro Penilla 20300701
#include <iostream>
using namespace std;

class numeros
{
public:
	int cantidad = 0;
	char ingreso = ' ';
	int arreglo[50];
	//constructores y destructures y funcion
	numeros(int, int*);
	~numeros();
	void insercion(int*, int);
};
numeros::numeros(int, int*)// en este programa va a haber dos metodos
{
	numeros::cantidad = cantidad;
	numeros::arreglo[50] = arreglo[50];
}
numeros::~numeros()
{
}
//este solo ordena y muestra las iteraciones
void numeros::insercion(int* arreglo, int cantidad) {
	int aux = 0, pos = 0;
	for (int i = 0; i <= cantidad - 1; i++)
	{
		pos = i;//va a ser la posicion
		aux = arreglo[i];//una variable auxiliar depende de i
		while (pos > 0 && (arreglo[pos - 1] > aux)) {//mientras posicion sea mayor a 0 y el numero del arreglo sea mayor que aux
			arreglo[pos] = arreglo[pos - 1];
			pos--;//reducimos la posicion para el siguiente ciclo
		}
		arreglo[pos] = aux;//se hace el intercambio de variable
		cout << "Iteracion " << i << ": ";//mostramos
		for (int j = 0; j < cantidad; j++)
		{//"Sin importar cual caso sea se deberá mostrar el arreglo en cada inserción."
			cout << arreglo[j] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	int cant = 0;
	char ingreso = 'S';
	int arreglo[50];
	do
	{//esto se puede reducir con un simple if y la propia funcion ya sabria que soltar
		cout << "A-Quiere ingresar los valores antes \no \nB- Ingresarlos simultaneamente que se ordenen?" << endl;
		cin >> ingreso;
		switch (ingreso)
		{
		case 'A':
		{
			do
			{
				cout << "Cual es la cantidad de digitos que quieres ingresar? Min 1 max 50" << endl;
				cin >> cant;
				if (cant < 1 || cant > 50) {
					cout << "Valor fuera de rango\n";
				}
			} while (cant < 1 || cant > 50);
			cout << "Ingresa los datos: " << endl;
			for (int i = 0; i < cant; i++)
			{
				cin >> arreglo[i];
			}
			numeros ob1(cant, arreglo);
			ob1.insercion(arreglo, cant);
		}
		break;
		case 'B':
		{
			int i = 0;
			do
			{
				cout << "Introduzca un numero(-1000 para salir)\nNumeros ingresados: " << i << ":  ";
				cin >> arreglo[i];
				if (arreglo[i] == -1000) {
					cout << "Ha salido\n";
					i = 51;//sale
				}
				else {//entra a ordenarse
					numeros ob1(cant, arreglo);
					ob1.insercion(arreglo, i + 1);
					i++;
				}
			} while (i <= 50);
		}
		break;
		}
	} while (ingreso != 'A' && ingreso != 'B');
}
// shell.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Shell
//Oscar Alejandro Penilla 20300701

#include <iostream>
#include <cmath>
using namespace std;

class numeros
{
public:
	int cantidad;
	char iteracion;
	int arreglo[50];
	//constructores y destructures y funcion
	numeros(int, int*, char);
	~numeros();
	void shell(int*, int, char);
};

numeros::numeros(int, int*, char)
{
	numeros::iteracion = ' ';
	numeros::cantidad = 0;
}
numeros::~numeros() { }

void numeros::shell(int* arreglo, int cantidad, char mostrar) {
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
				if (arreglo[i] > arreglo[i + i_redond])
				{
					aux = arreglo[i];
					arreglo[i] = arreglo[i + i_redond];
					arreglo[i + i_redond] = aux;
					b_door = true;
				}
				i++;
			}//aqui no se muestra
		}//aqui se puede mostrar 
		if (mostrar == 'S') {
			cout << "iteracion " << a << ": ";//para mostrar el arreglo antes completo
			a++;
			for (int j = 0; j < cantidad; j++)
			{
				cout << arreglo[j] << " ";
			}
			cout << "\n";
		}
	}
	//para solo mostrar una vez nuestro arreglo
	if (mostrar == 'N') {//en caso de que no se repita
		for (int i = 0; i < cantidad; i++)
			cout << arreglo[i] << " "; //completo
	}
}

int main()
{
	int cant = 0;
	char iteracion = 'S';
	int arreglo[50];
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
	do
	{
		cout << "Quieres ver la iteracion? (S/N)" << endl;
		cin >> iteracion;
		numeros ob1(cant, arreglo, iteracion);
		ob1.shell(arreglo, cant, iteracion);
	} while (iteracion != 'S' && iteracion != 'N');
}
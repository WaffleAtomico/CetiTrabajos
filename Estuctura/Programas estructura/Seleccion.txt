// Seleccion bien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//seleccion

//Oscar Alejandro Penilla 20300701

#include <iostream>
using namespace std;

class numeros
{
public:
	int cantidad = 0;
	char iteracion = ' ';
	int arreglo[50];
	//constructores y destructures y funcion
	numeros(int, int*, char);
	~numeros();
	void seleccion(int*, int, char);
};

numeros::numeros(int, int*, char)
{
	numeros::iteracion, iteracion; 
	numeros::cantidad = cantidad;
	numeros::arreglo[50] = arreglo[50];// sinceramente no tengo idea de como funciona, preguntare en clase
}
numeros::~numeros()
{
}

void numeros::seleccion(int* arreglo, int cantidad, char mostrar) {
	int aux = 0;//variable auxiliar para pasar valores
	for (int i = 0; i <= cantidad - 1; i++)
	{
		if (mostrar == 'S') {//antes para que se vea el arreglo incial
			cout << "iteracion " << i << ": ";
			for (int j = 0; j < cantidad; j++)
			{
				cout << arreglo[j] << " ";
			}
			cout << "\n";
		}
		int max = i;//cada que repitamos el for el maximo va a ser igual a la poscion del arreglo
		for (int a = i + 1; a < cantidad; a++)
		{
			if (arreglo[a] < arreglo[max]) {
				max = a;//max nuestra variable que va a cambiar la poscion, no el valor
			}
		}
		//cambiamos los valores
		aux = arreglo[i];
		arreglo[i] = arreglo[max];
		arreglo[max] = aux;//mostramos si elije que no
		if (mostrar == 'N') {
			cout << arreglo[i] << " "; //completo
		}
	}
}

int main()
{
	int cant = 0;
	char iteracion = 'S';
	int arreglo[50];
	bool b_rep = true;
	do
	{
		cout << "Cual es la cantidad de digitos que quieres ingresar? Min 1 max 50" << endl;
		cin >> cant;
	} while (cant < 1 || cant > 50);
	cout << "Ingresa los datos: " << endl;
	for (int i = 0; i < cant; i++)
	{
		cin >> arreglo[i];
	}
	do
	{//esto se puede reducir con un simple if y la propia funcion ya sabria que soltar
		cout << "Quieres ver la iteracion? (S/N)" << endl;
		cin >> iteracion;
		switch (iteracion)
		{
		case 'S':
		{
			numeros ob1(cant, arreglo, iteracion);
			ob1.seleccion(arreglo, cant, iteracion);
		}
		break;
		case 'N':
		{
			numeros ob1(cant, arreglo, iteracion);
			ob1.seleccion(arreglo, cant, iteracion);
		}
		break;
		}
	} while (iteracion != 'S' && iteracion != 'N');
}
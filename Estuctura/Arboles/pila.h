#pragma once
#include <iostream>
//pila
using namespace std;


class Nodo
{
public:
	float x;
	Nodo();
	Nodo(float x);
	Nodo* siguiente;


};

Nodo::Nodo()
{

	x = 0;
	siguiente = NULL;
}


Nodo::Nodo(float x)
{
	this->x = x;
	siguiente = NULL;
}


class Pila //Agregamos datos
{
private:

	Nodo* i, * a; // i= inicio a = auxiliar

public:

	Pila(); //Poner a i y a en ceros.


	void push(float x); //Agregar un dato en partícular a la pila
	float pop(); //Sacar el elemento de hasta arrriba de la pila

	int vacio(); //Identificar si hay o no hay un elemento

	void limpiar(); //eliminar todo
	int contar(); //Cuantos elementos existen en la Pila

	~Pila();

};

Pila::Pila()
{

	i = NULL;
	a = NULL;
}

void Pila::push(float x)
{
	Nodo* p;
	if (i == NULL)
	{ //Por si no hay elementos en la pila
		i = new Nodo(x);
	}
	else
	{

		a = new Nodo(x);
		p = i;

		while (p->siguiente)
		{
			p = p->siguiente;
		}
		p->siguiente = a;
	}
}

float Pila::pop()
{
	float valor;
	Nodo* borrar;
	if (i == NULL) //Por si no hay elementos
	{
		return NULL;
	}
	else
	{
		a = i;

		while (a->siguiente)
		{
			a = a->siguiente;
		}

		//Permite que el elemento anterior al que se va eliminar apunte a NULL, y así evitar problemas de lectura
		borrar = i;
		while (borrar->siguiente != a && borrar->siguiente != NULL)
		{
			borrar = borrar->siguiente;
		}

		valor = a->x;
		borrar->siguiente = NULL;

		if (a == i)
			i = NULL;

		delete a;

		return valor;

	}

}

int Pila::contar()
{
	int contador = 0;
	a = i;
	while (a)
	{
		contador++;
		a = a->siguiente;

	}


	return contador;
}

int Pila::vacio()
{

	int condicion = (i == NULL) ? 0 : 1;

	return condicion;

}


void Pila::limpiar()
{

	if (i == NULL)
	{
		//cout << "No se pudo eliminar nada, porque no existe nada" << endl;
	}
	else
	{

		a = i;

		while (i)
		{
			i = i->siguiente;
			delete a;

			a = i;

		}
	}
}


Pila::~Pila()
{
	//limpiar();
}




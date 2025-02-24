#pragma once

#include <iostream>
using namespace std;

class Nodo2
{
public:
	int x;
	Nodo2();
	Nodo2(int x);
	Nodo2* siguiente;


};

Nodo2::Nodo2()
{

	x = 0;
	siguiente = NULL;
}


Nodo2::Nodo2(int x)
{
	this->x = x;
	siguiente = NULL;
}


class Cola
{
private:

	Nodo2* i, * a; // i= inicio a = auxiliar

public:

	Cola(); //Poner a i y a en ceros.


	void push(int x); //Agregar un dato en partícular a la cola
	int pop(); //Sacar el primer elemento de la cola

	int vacio(); //Identificar si hay o no hay un elemento

	void limpiar(); //eliminar todo

	int contar(); //Cuantos elementos posee la cola.



	~Cola();

};


Cola::Cola()
{
	i = NULL;
	a = NULL;

}

void Cola::push(int x)
{
	Nodo2* p;
	if (i == NULL) //Por si no hay elementos
	{
		i = new Nodo2(x);
	}
	else

	{  //Por si hay n elementos
		a = new Nodo2(x);
		p = i;

		while (p->siguiente)
		{
			p = p->siguiente;
		}
		p->siguiente = a;
	}
}

int Cola::pop()
{
	int valor; //Por si no hay elementos
	if (i == NULL)
	{
		return NULL;
	}
	else
	{
		//en el caso de que haya más de un0
		a = i;
		valor = i->x;
		i = i->siguiente;

		//Se tiene que eliminar cada elemento que se saca.
		delete a;

		return valor;

	}

}


int Cola::contar()
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


int Cola::vacio()
{
	//Si inicio es NULL,  quiere decir que no hay elementos.
	int condicion = (i == NULL) ? 0 : 1;

	return condicion;

}


void Cola::limpiar()
{

	if (i == NULL)
	{
		//cout << "No se pudo eliminar nada, porque no existe nada" << endl;
		a = NULL;
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


Cola::~Cola()
{

	//limpiar();
}

#pragma once


#include <iostream>
using namespace std;

class Nodo
{
public:
	int x;
	Nodo();
	Nodo(int x);
	Nodo* siguiente;


};

Nodo::Nodo()
{

	x = 0;
	siguiente = NULL;
}


Nodo::Nodo(int x)
{
	this->x = x;
	siguiente = NULL;
}


class Lista //Agregamos datos
{
private:

	Nodo* i, * a; // i= inicio a = auxiliar

public:

	Lista(); //Poner a i y a en ceros.


	void add(int x); //Agregar un dato en partícular
	void elim(int x); //Eliminar un dato en particular

	void eliminartodo(); //Borra todo

	int* buscar(int x); //buscar un elemento en específico

	int contar(); //Preguntar cuantos elemenots poseemos.

	Nodo* obtener(int i); //Devuelveme el elemento en una determinada posición
	int obtValor(int i);
	~Lista();

};


Lista::Lista() //Cuerpo del constructor de Lista
{
	i = NULL;
	a = NULL;

}



void Lista::add(int x)
{
	Nodo* p;
	if (i == NULL) //Cuando no hay ningun elemento
	{
		i = new Nodo(x);
	}
	else               //Cuando hay n elementos
	{
		a = new Nodo(x);
		p = i;



		while (p->siguiente)
		{
			p = p->siguiente;

			if (p == NULL)
				break;
		}
		p->siguiente = a;
	}
}


int* Lista::buscar(int x)
{

	if (i == NULL)  //Si no hay ningun elemento
		return NULL;

	a = i;

	while (a) //Si hay más de uno. Uso de búsqueda secuencial.
	{
		if (a->x == x)
		{
			return (int*)a;
		}

		a = a->siguiente;
	}

	return NULL;

}

void Lista::elim(int x)
{

	Nodo* antes, * des;
	int* ptr = NULL;

	ptr = buscar(x);

	a = (Nodo*)ptr;

	if (a) //Si hay elementos, entonces se activa
	{
		if (a == i) //Si se elimina el primer elemento.
		{
			i = i->siguiente;
			delete a;
		}
		else //Si se elimina  cualquier otro
		{
			des = a->siguiente;
			antes = i;
			while (antes->siguiente != a)
			{
				antes = antes->siguiente;
			}

			delete a;

			antes->siguiente = des;
		}


	}
	else
	{
		cout << "No se puede eliminar porque no se encontro" << endl;
	}


}


void Lista::eliminartodo()
{

	if (i == NULL)
	{

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


int Lista::contar()
{  //Conteo de elementos
	int contador = 0;
	a = i;
	while (a)
	{
		contador++;
		a = a->siguiente;

	}


	return contador;
}


Nodo* Lista::obtener(int x)
{//Imprime en pantalla todos los nodos existentens

	int cont = 0;
	if (i == NULL)
		return NULL;


	a = i;
	while (a)
	{
		if (x == cont)
			return a;
		cont++;
		a = a->siguiente;
	}




}

int Lista::obtValor(int x)
{
	int cont = 0;
	if (i == NULL)
		return NULL;


	a = i;
	while (a)
	{
		if (x == cont)
			return a->x;
		cont++;
		a = a->siguiente;
	}



}

Lista:: ~Lista()
{

	//eliminartodo();
}
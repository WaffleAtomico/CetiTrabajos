﻿// Constructores y destructores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 4

#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char descripcion[40];
float costo = 0;
char fecha_cad[12];

void leer(bool door);

class articulo
{
public:
	char descripcion[40];
	float costo = 0;
	char fecha_cad[12];
	articulo(char*, char*, float);
	articulo(char*, float);
	~articulo();

	//articulo() {};

	void muestra(bool door);

private:

};

articulo::articulo(char* descripcion, char* fecha_cad, float costo)
{
	strcpy_s(articulo::descripcion, descripcion);
	strcpy_s(articulo::fecha_cad, fecha_cad);
	articulo::costo = costo; // el primero es el de la clase, el 2do es el del constructor
	//articulo::door = door;
}


articulo::articulo(char* descripcion, float costo)
{
	strcpy_s(articulo::descripcion, descripcion);
	articulo::costo = costo;
}


articulo::~articulo()
{
}

void articulo::muestra(bool door) {
	cout << "Descripcion: " << articulo::descripcion << endl;
	if (door) {
		cout << "Fecha de caducidad: " << articulo::fecha_cad << endl;
	}
	cout << "Costo: " << articulo::costo << endl;

}

int main()
{
	/*leer();		esto si jala
	articulo ob1(descripcion, fecha_cad, costo);
	ob1.muestra();*/

	bool b_fin = true;
	do {

		bool b_door = true;
		int i_opcion = 0;
		cout << "Se te van a mostrar las opciones" << endl;
		cout << "1-Crear y mostrar un articulo con 3 atributos" << endl;
		cout << "2-Crear y mostrar un articulo con 2 atributos" << endl;
		cout << "3-Salir" << endl;
		cin >> i_opcion;
		cin.ignore();

		switch (i_opcion) {

		case 1:
		{
			b_door = true;
			leer(b_door);
			articulo ob1(descripcion, fecha_cad, costo);
			ob1.muestra(b_door);
			break;
		}
		case 2:
		{
			b_door = false;
			leer(b_door);
			articulo ob2(descripcion, costo);
			ob2.muestra(b_door);
			break;
		}


		case 3:
			cout << "Gracias :D" << endl;
			b_fin = 0;
			break;

		};
		/*	leer();
		articulo ob1(descripcion, fecha_cad, costo);
		ob1.muestra();*/
	} while (b_fin == true);


}

void leer(bool door) {

	cout << "Descripcion: ";
	gets_s(descripcion);
	if (door) {
		cout << "Fecha de caducidad: ";
		gets_s(fecha_cad);
	}
	cout << "Costo: ";
	cin >> costo;

}


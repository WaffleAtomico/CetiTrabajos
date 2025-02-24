
#include <iostream>
#include <string.h>
using namespace std;
//globales
char c_des[40];
float f_costo = 0;
char c_fecha[15];
float f_costoT = 0;
char c_nombre[20];
char c_RFC[30];
//*********
void leerart();
void leervent();
void leerfact();

class articulo {

public:
	char c_des[40];
	float f_costo;
	void mostrarArt();
	articulo(char*, float);
	~articulo();
};
class venta {
public:
	char c_fecha[10];
	float f_costoT;
	void mostrarVent();
	venta(char*, float);
	~venta();
};

class factura :public articulo, public venta {
public:
	char c_nombre[20];
	char c_RFC[30];
	void mostrarfact();
	//void mostrarVent2();
	factura(char*, char*, char*, float, float, char*);
	//venta(char*, char*, float);
	~factura();
};

// falta los metodos mostrar y leer, ademas de terminar el menu ciclico y lo de la sobrecarga
articulo::articulo(char* c_des, float f_costo) {
	strcpy_s(articulo::c_des, c_des);
	articulo::f_costo = f_costo;
};

venta::venta(char* c_fecha, float f_costoT) {
	strcpy_s(venta::c_fecha, c_fecha);
	venta::f_costoT = f_costoT;
};

factura::factura(char* c_des, char* c_fecha, char* c_nombre, float f_costo, float f_costoT, char* c_RFC) :articulo(c_des, f_costo), venta(c_fecha, f_costoT) {
	strcpy_s(factura::c_nombre, c_nombre);
	strcpy_s(factura::c_RFC, c_RFC);
};

void articulo::mostrarArt() {
	cout << "Descripcion: " << articulo::c_des << endl;
	cout << "Costo: " << articulo::f_costo << endl;
};

void venta::mostrarVent() {
	cout << "Fecha: " << venta::c_fecha << endl;
	cout << "Costo Total: " << venta::f_costoT << endl;
};

void factura::mostrarfact() {
	cout << "Descripcion: " << factura::c_des << endl;
	cout << "Costo: " << factura::f_costo << endl;
	cout << "Fecha: " << factura::c_fecha << endl;
	cout << "Costo Total: " << factura::f_costoT << endl;

	cout << "Nombre: " << factura::c_nombre << endl;
	cout << "RFC: " << factura::c_RFC << endl;
};


articulo::~articulo() { };
venta::~venta() { };
factura::~factura() { };

int main(int argc, char** argv) {
	char c_Opcion = 'S';
	bool b_fin = true;
	do {
		cout << "Elije una opcion" << endl;
		cout << "A crear y mostrar articulo" << endl;
		cout << "B crear y mostrar venta" << endl;
		cout << "C crear y mostrar factura" << endl;
		cout << "S Salir" << endl;
		cin >> c_Opcion;
		cin.ignore();
		switch (c_Opcion) {
		case 'A':
		{
			leerart();
			articulo ob1(c_des, f_costo);
			ob1.mostrarArt();
			break;
		}
		case 'B':
		{
			leervent();
			venta ob1(c_fecha, f_costoT);
			ob1.mostrarVent();
			break;
		}
		case 'C':
		{
			leerfact();
			factura ob1(c_des, c_fecha, c_nombre, f_costo, f_costoT, c_RFC);
			ob1.mostrarfact();
			break;
		}
		case 'S':
			cout << "Gracias :D" << endl;
			b_fin = 0;
			break;
		};

	} while (b_fin == true);
}

void leerart() {
	cout << "Descripcion: ";
	gets_s(c_des);
	cout << "Costo: ";
	cin >> f_costo;
}
void leervent() {
	cout << "Fecha de caducidad: ";
	gets_s(c_fecha);
	cout << "Costo Total: ";
	cin >> f_costoT;
}
void leerfact() {
	//cin.ignore();
	cout << "Nombre del cliente: ";
	gets_s(c_nombre);
	cout << "RFC: ";
	gets_s(c_RFC);
}